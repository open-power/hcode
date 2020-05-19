/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_eq/reg00001.H $           */
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

#ifndef __PPE_EQ_REG00001_H_
#define __PPE_EQ_REG00001_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


//>> PREP_[QME_SCDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_SCDR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCDR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_SCDR]

//>> GET_[QME_SCDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_SCDR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCDR;
#endif
    return fapi2::getScom(i_target, QME_SCDR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_SCDR]

//>> PUT_[QME_SCDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_SCDR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return fapi2::putScom(i_target, QME_SCDR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_SCDR]


//>> SET_[QME_SCDR_STOP_GATED]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_STOP_GATED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_STOP_GATED,
           QME_SCDR_STOP_GATED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SCDR_STOP_GATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_STOP_GATED]

//>> SET_[QME_SCDR_STOP_GATED]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_STOP_GATED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_STOP_GATED,
           QME_SCDR_STOP_GATED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SCDR_STOP_GATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_STOP_GATED]

//>> GET_[QME_SCDR_STOP_GATED]
static inline fapi2::buffer<uint64_t>& GET_QME_SCDR_STOP_GATED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return i_data.extractToRight<QME_SCDR_STOP_GATED,
           QME_SCDR_STOP_GATED_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SCDR_STOP_GATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCDR_STOP_GATED]

//>> SET_[QME_SCDR_STOP_TRANSITION_C0]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_STOP_TRANSITION_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_STOP_TRANSITION_C0,
           QME_SCDR_STOP_TRANSITION_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SCDR_STOP_TRANSITION_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_STOP_TRANSITION_C0]

//>> SET_[QME_SCDR_STOP_TRANSITION_C0]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_STOP_TRANSITION_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_STOP_TRANSITION_C0,
           QME_SCDR_STOP_TRANSITION_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SCDR_STOP_TRANSITION_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_STOP_TRANSITION_C0]

//>> GET_[QME_SCDR_STOP_TRANSITION_C0]
static inline fapi2::buffer<uint64_t>& GET_QME_SCDR_STOP_TRANSITION_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return i_data.extractToRight<QME_SCDR_STOP_TRANSITION_C0,
           QME_SCDR_STOP_TRANSITION_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SCDR_STOP_TRANSITION_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCDR_STOP_TRANSITION_C0]

//>> SET_[QME_SCDR_STOP_TRANSITION_C1]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_STOP_TRANSITION_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_STOP_TRANSITION_C1,
           QME_SCDR_STOP_TRANSITION_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SCDR_STOP_TRANSITION_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_STOP_TRANSITION_C1]

//>> SET_[QME_SCDR_STOP_TRANSITION_C1]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_STOP_TRANSITION_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_STOP_TRANSITION_C1,
           QME_SCDR_STOP_TRANSITION_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SCDR_STOP_TRANSITION_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_STOP_TRANSITION_C1]

//>> GET_[QME_SCDR_STOP_TRANSITION_C1]
static inline fapi2::buffer<uint64_t>& GET_QME_SCDR_STOP_TRANSITION_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return i_data.extractToRight<QME_SCDR_STOP_TRANSITION_C1,
           QME_SCDR_STOP_TRANSITION_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SCDR_STOP_TRANSITION_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCDR_STOP_TRANSITION_C1]

//>> SET_[QME_SCDR_STOP_TRANSITION_C2]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_STOP_TRANSITION_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_STOP_TRANSITION_C2,
           QME_SCDR_STOP_TRANSITION_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SCDR_STOP_TRANSITION_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_STOP_TRANSITION_C2]

//>> SET_[QME_SCDR_STOP_TRANSITION_C2]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_STOP_TRANSITION_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_STOP_TRANSITION_C2,
           QME_SCDR_STOP_TRANSITION_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SCDR_STOP_TRANSITION_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_STOP_TRANSITION_C2]

//>> GET_[QME_SCDR_STOP_TRANSITION_C2]
static inline fapi2::buffer<uint64_t>& GET_QME_SCDR_STOP_TRANSITION_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return i_data.extractToRight<QME_SCDR_STOP_TRANSITION_C2,
           QME_SCDR_STOP_TRANSITION_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SCDR_STOP_TRANSITION_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCDR_STOP_TRANSITION_C2]

//>> SET_[QME_SCDR_STOP_TRANSITION_C3]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_STOP_TRANSITION_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_STOP_TRANSITION_C3,
           QME_SCDR_STOP_TRANSITION_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SCDR_STOP_TRANSITION_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_STOP_TRANSITION_C3]

//>> SET_[QME_SCDR_STOP_TRANSITION_C3]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_STOP_TRANSITION_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_STOP_TRANSITION_C3,
           QME_SCDR_STOP_TRANSITION_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SCDR_STOP_TRANSITION_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_STOP_TRANSITION_C3]

//>> GET_[QME_SCDR_STOP_TRANSITION_C3]
static inline fapi2::buffer<uint64_t>& GET_QME_SCDR_STOP_TRANSITION_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return i_data.extractToRight<QME_SCDR_STOP_TRANSITION_C3,
           QME_SCDR_STOP_TRANSITION_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SCDR_STOP_TRANSITION_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCDR_STOP_TRANSITION_C3]

//>> SET_[QME_SCDR_SPC_WKUP_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_SPC_WKUP_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_SPC_WKUP_DONE,
           QME_SCDR_SPC_WKUP_DONE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SCDR_SPC_WKUP_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_SPC_WKUP_DONE]

//>> SET_[QME_SCDR_SPC_WKUP_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_SPC_WKUP_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_SPC_WKUP_DONE,
           QME_SCDR_SPC_WKUP_DONE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SCDR_SPC_WKUP_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_SPC_WKUP_DONE]

//>> GET_[QME_SCDR_SPC_WKUP_DONE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCDR_SPC_WKUP_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return i_data.extractToRight<QME_SCDR_SPC_WKUP_DONE,
           QME_SCDR_SPC_WKUP_DONE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SCDR_SPC_WKUP_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCDR_SPC_WKUP_DONE]

//>> SET_[QME_SCDR_REQ_STOP_LEVEL_C0]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_REQ_STOP_LEVEL_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_REQ_STOP_LEVEL_C0,
           QME_SCDR_REQ_STOP_LEVEL_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SCDR_REQ_STOP_LEVEL_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_REQ_STOP_LEVEL_C0]

//>> SET_[QME_SCDR_REQ_STOP_LEVEL_C0]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_REQ_STOP_LEVEL_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_REQ_STOP_LEVEL_C0,
           QME_SCDR_REQ_STOP_LEVEL_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SCDR_REQ_STOP_LEVEL_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_REQ_STOP_LEVEL_C0]

//>> GET_[QME_SCDR_REQ_STOP_LEVEL_C0]
static inline fapi2::buffer<uint64_t>& GET_QME_SCDR_REQ_STOP_LEVEL_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return i_data.extractToRight<QME_SCDR_REQ_STOP_LEVEL_C0,
           QME_SCDR_REQ_STOP_LEVEL_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SCDR_REQ_STOP_LEVEL_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCDR_REQ_STOP_LEVEL_C0]

//>> SET_[QME_SCDR_REQ_STOP_LEVEL_C1]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_REQ_STOP_LEVEL_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_REQ_STOP_LEVEL_C1,
           QME_SCDR_REQ_STOP_LEVEL_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SCDR_REQ_STOP_LEVEL_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_REQ_STOP_LEVEL_C1]

//>> SET_[QME_SCDR_REQ_STOP_LEVEL_C1]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_REQ_STOP_LEVEL_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_REQ_STOP_LEVEL_C1,
           QME_SCDR_REQ_STOP_LEVEL_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SCDR_REQ_STOP_LEVEL_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_REQ_STOP_LEVEL_C1]

//>> GET_[QME_SCDR_REQ_STOP_LEVEL_C1]
static inline fapi2::buffer<uint64_t>& GET_QME_SCDR_REQ_STOP_LEVEL_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return i_data.extractToRight<QME_SCDR_REQ_STOP_LEVEL_C1,
           QME_SCDR_REQ_STOP_LEVEL_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SCDR_REQ_STOP_LEVEL_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCDR_REQ_STOP_LEVEL_C1]

//>> SET_[QME_SCDR_REQ_STOP_LEVEL_C2]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_REQ_STOP_LEVEL_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_REQ_STOP_LEVEL_C2,
           QME_SCDR_REQ_STOP_LEVEL_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SCDR_REQ_STOP_LEVEL_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_REQ_STOP_LEVEL_C2]

//>> SET_[QME_SCDR_REQ_STOP_LEVEL_C2]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_REQ_STOP_LEVEL_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_REQ_STOP_LEVEL_C2,
           QME_SCDR_REQ_STOP_LEVEL_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SCDR_REQ_STOP_LEVEL_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_REQ_STOP_LEVEL_C2]

//>> GET_[QME_SCDR_REQ_STOP_LEVEL_C2]
static inline fapi2::buffer<uint64_t>& GET_QME_SCDR_REQ_STOP_LEVEL_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return i_data.extractToRight<QME_SCDR_REQ_STOP_LEVEL_C2,
           QME_SCDR_REQ_STOP_LEVEL_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SCDR_REQ_STOP_LEVEL_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCDR_REQ_STOP_LEVEL_C2]

//>> SET_[QME_SCDR_REQ_STOP_LEVEL_C3]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_REQ_STOP_LEVEL_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_REQ_STOP_LEVEL_C3,
           QME_SCDR_REQ_STOP_LEVEL_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SCDR_REQ_STOP_LEVEL_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_REQ_STOP_LEVEL_C3]

//>> SET_[QME_SCDR_REQ_STOP_LEVEL_C3]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_REQ_STOP_LEVEL_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_REQ_STOP_LEVEL_C3,
           QME_SCDR_REQ_STOP_LEVEL_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SCDR_REQ_STOP_LEVEL_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_REQ_STOP_LEVEL_C3]

//>> GET_[QME_SCDR_REQ_STOP_LEVEL_C3]
static inline fapi2::buffer<uint64_t>& GET_QME_SCDR_REQ_STOP_LEVEL_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return i_data.extractToRight<QME_SCDR_REQ_STOP_LEVEL_C3,
           QME_SCDR_REQ_STOP_LEVEL_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SCDR_REQ_STOP_LEVEL_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCDR_REQ_STOP_LEVEL_C3]

//>> SET_[QME_SCDR_REG_WKUP_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_REG_WKUP_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_REG_WKUP_REQUESTED,
           QME_SCDR_REG_WKUP_REQUESTED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SCDR_REG_WKUP_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_REG_WKUP_REQUESTED]

//>> SET_[QME_SCDR_REG_WKUP_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_REG_WKUP_REQUESTED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_REG_WKUP_REQUESTED,
           QME_SCDR_REG_WKUP_REQUESTED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SCDR_REG_WKUP_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_REG_WKUP_REQUESTED]

//>> GET_[QME_SCDR_REG_WKUP_REQUESTED]
static inline fapi2::buffer<uint64_t>& GET_QME_SCDR_REG_WKUP_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return i_data.extractToRight<QME_SCDR_REG_WKUP_REQUESTED,
           QME_SCDR_REG_WKUP_REQUESTED_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SCDR_REG_WKUP_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCDR_REG_WKUP_REQUESTED]

//>> SET_[QME_SCDR_SPC_WKUP_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_SPC_WKUP_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_SPC_WKUP_REQUESTED,
           QME_SCDR_SPC_WKUP_REQUESTED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SCDR_SPC_WKUP_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_SPC_WKUP_REQUESTED]

//>> SET_[QME_SCDR_SPC_WKUP_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_SPC_WKUP_REQUESTED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_SPC_WKUP_REQUESTED,
           QME_SCDR_SPC_WKUP_REQUESTED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SCDR_SPC_WKUP_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_SPC_WKUP_REQUESTED]

//>> GET_[QME_SCDR_SPC_WKUP_REQUESTED]
static inline fapi2::buffer<uint64_t>& GET_QME_SCDR_SPC_WKUP_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return i_data.extractToRight<QME_SCDR_SPC_WKUP_REQUESTED,
           QME_SCDR_SPC_WKUP_REQUESTED_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SCDR_SPC_WKUP_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCDR_SPC_WKUP_REQUESTED]

//>> SET_[QME_SCDR_SELF_SAVE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_SELF_SAVE_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_SELF_SAVE_ACTIVE,
           QME_SCDR_SELF_SAVE_ACTIVE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SCDR_SELF_SAVE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_SELF_SAVE_ACTIVE]

//>> SET_[QME_SCDR_SELF_SAVE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_SELF_SAVE_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_SELF_SAVE_ACTIVE,
           QME_SCDR_SELF_SAVE_ACTIVE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SCDR_SELF_SAVE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_SELF_SAVE_ACTIVE]

//>> GET_[QME_SCDR_SELF_SAVE_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCDR_SELF_SAVE_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return i_data.extractToRight<QME_SCDR_SELF_SAVE_ACTIVE,
           QME_SCDR_SELF_SAVE_ACTIVE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SCDR_SELF_SAVE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCDR_SELF_SAVE_ACTIVE]

//>> SET_[QME_SCDR_SELF_RESTORE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_SELF_RESTORE_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_SELF_RESTORE_ACTIVE,
           QME_SCDR_SELF_RESTORE_ACTIVE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SCDR_SELF_RESTORE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_SELF_RESTORE_ACTIVE]

//>> SET_[QME_SCDR_SELF_RESTORE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_SELF_RESTORE_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_SELF_RESTORE_ACTIVE,
           QME_SCDR_SELF_RESTORE_ACTIVE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SCDR_SELF_RESTORE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_SELF_RESTORE_ACTIVE]

//>> GET_[QME_SCDR_SELF_RESTORE_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCDR_SELF_RESTORE_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return i_data.extractToRight<QME_SCDR_SELF_RESTORE_ACTIVE,
           QME_SCDR_SELF_RESTORE_ACTIVE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SCDR_SELF_RESTORE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCDR_SELF_RESTORE_ACTIVE]

//>> SET_[QME_SCDR_ACT_STOP_LEVEL_C0]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_ACT_STOP_LEVEL_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_ACT_STOP_LEVEL_C0,
           QME_SCDR_ACT_STOP_LEVEL_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SCDR_ACT_STOP_LEVEL_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_ACT_STOP_LEVEL_C0]

//>> SET_[QME_SCDR_ACT_STOP_LEVEL_C0]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_ACT_STOP_LEVEL_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_ACT_STOP_LEVEL_C0,
           QME_SCDR_ACT_STOP_LEVEL_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SCDR_ACT_STOP_LEVEL_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_ACT_STOP_LEVEL_C0]

//>> GET_[QME_SCDR_ACT_STOP_LEVEL_C0]
static inline fapi2::buffer<uint64_t>& GET_QME_SCDR_ACT_STOP_LEVEL_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return i_data.extractToRight<QME_SCDR_ACT_STOP_LEVEL_C0,
           QME_SCDR_ACT_STOP_LEVEL_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SCDR_ACT_STOP_LEVEL_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCDR_ACT_STOP_LEVEL_C0]

//>> SET_[QME_SCDR_ACT_STOP_LEVEL_C1]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_ACT_STOP_LEVEL_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_ACT_STOP_LEVEL_C1,
           QME_SCDR_ACT_STOP_LEVEL_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SCDR_ACT_STOP_LEVEL_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_ACT_STOP_LEVEL_C1]

//>> SET_[QME_SCDR_ACT_STOP_LEVEL_C1]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_ACT_STOP_LEVEL_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_ACT_STOP_LEVEL_C1,
           QME_SCDR_ACT_STOP_LEVEL_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SCDR_ACT_STOP_LEVEL_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_ACT_STOP_LEVEL_C1]

//>> GET_[QME_SCDR_ACT_STOP_LEVEL_C1]
static inline fapi2::buffer<uint64_t>& GET_QME_SCDR_ACT_STOP_LEVEL_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return i_data.extractToRight<QME_SCDR_ACT_STOP_LEVEL_C1,
           QME_SCDR_ACT_STOP_LEVEL_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SCDR_ACT_STOP_LEVEL_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCDR_ACT_STOP_LEVEL_C1]

//>> SET_[QME_SCDR_ACT_STOP_LEVEL_C2]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_ACT_STOP_LEVEL_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_ACT_STOP_LEVEL_C2,
           QME_SCDR_ACT_STOP_LEVEL_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SCDR_ACT_STOP_LEVEL_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_ACT_STOP_LEVEL_C2]

//>> SET_[QME_SCDR_ACT_STOP_LEVEL_C2]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_ACT_STOP_LEVEL_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_ACT_STOP_LEVEL_C2,
           QME_SCDR_ACT_STOP_LEVEL_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SCDR_ACT_STOP_LEVEL_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_ACT_STOP_LEVEL_C2]

//>> GET_[QME_SCDR_ACT_STOP_LEVEL_C2]
static inline fapi2::buffer<uint64_t>& GET_QME_SCDR_ACT_STOP_LEVEL_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return i_data.extractToRight<QME_SCDR_ACT_STOP_LEVEL_C2,
           QME_SCDR_ACT_STOP_LEVEL_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SCDR_ACT_STOP_LEVEL_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCDR_ACT_STOP_LEVEL_C2]

//>> SET_[QME_SCDR_ACT_STOP_LEVEL_C3]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_ACT_STOP_LEVEL_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_ACT_STOP_LEVEL_C3,
           QME_SCDR_ACT_STOP_LEVEL_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SCDR_ACT_STOP_LEVEL_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_ACT_STOP_LEVEL_C3]

//>> SET_[QME_SCDR_ACT_STOP_LEVEL_C3]
static inline fapi2::buffer<uint64_t>& SET_QME_SCDR_ACT_STOP_LEVEL_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return o_data.insertFromRight<QME_SCDR_ACT_STOP_LEVEL_C3,
           QME_SCDR_ACT_STOP_LEVEL_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SCDR_ACT_STOP_LEVEL_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCDR_ACT_STOP_LEVEL_C3]

//>> GET_[QME_SCDR_ACT_STOP_LEVEL_C3]
static inline fapi2::buffer<uint64_t>& GET_QME_SCDR_ACT_STOP_LEVEL_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return i_data.extractToRight<QME_SCDR_ACT_STOP_LEVEL_C3,
           QME_SCDR_ACT_STOP_LEVEL_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SCDR_ACT_STOP_LEVEL_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCDR_ACT_STOP_LEVEL_C3]

//>> PREP_[QME_TBR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_TBR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_TBR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_TBR]

//>> GET_[QME_TBR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_TBR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_TBR;
#endif
    return fapi2::getScom(i_target, QME_TBR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_TBR]

//>> PUT_[QME_TBR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_TBR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_TBR));
#endif
    return fapi2::putScom(i_target, QME_TBR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_TBR]


//>> SET_[QME_TBR_TIMEBASE]
static inline fapi2::buffer<uint64_t>& SET_QME_TBR_TIMEBASE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TBR));
#endif
    return o_data.insertFromRight<QME_TBR_TIMEBASE,
           QME_TBR_TIMEBASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_TBR_TIMEBASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TBR_TIMEBASE]

//>> SET_[QME_TBR_TIMEBASE]
static inline fapi2::buffer<uint64_t>& SET_QME_TBR_TIMEBASE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TBR));
#endif
    return o_data.insertFromRight<QME_TBR_TIMEBASE,
           QME_TBR_TIMEBASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_TBR_TIMEBASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TBR_TIMEBASE]

//>> GET_[QME_TBR_TIMEBASE]
static inline fapi2::buffer<uint64_t>& GET_QME_TBR_TIMEBASE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TBR));
#endif
    return i_data.extractToRight<QME_TBR_TIMEBASE,
           QME_TBR_TIMEBASE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_TBR_TIMEBASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_TBR_TIMEBASE]

//>> SET_[QME_TBR_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_QME_TBR_CYCLES(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TBR));
#endif
    return o_data.insertFromRight<QME_TBR_CYCLES,
           QME_TBR_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_TBR_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TBR_CYCLES]

//>> SET_[QME_TBR_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_QME_TBR_CYCLES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TBR));
#endif
    return o_data.insertFromRight<QME_TBR_CYCLES,
           QME_TBR_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_TBR_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TBR_CYCLES]

//>> GET_[QME_TBR_CYCLES]
static inline fapi2::buffer<uint64_t>& GET_QME_TBR_CYCLES(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TBR));
#endif
    return i_data.extractToRight<QME_TBR_CYCLES,
           QME_TBR_CYCLES_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_TBR_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_TBR_CYCLES]


//>> PREP_[QME_EIPR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_EIPR_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EIPR_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_EIPR_RW]

//>> GET_[QME_EIPR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_EIPR_RW(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EIPR_RW;
#endif
    return fapi2::getScom(i_target, QME_EIPR_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_EIPR_RW]

//>> PUT_[QME_EIPR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_EIPR_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_EIPR_RW, QME_EIPR_WO_CLEAR, QME_EIPR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_EIPR_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_EIPR_RW]

//>> SET_[QME_EIPR_INTERRUPT_POLARITY]
static inline fapi2::buffer<uint64_t>& SET_QME_EIPR_INTERRUPT_POLARITY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EIPR_RW, QME_EIPR_WO_CLEAR, QME_EIPR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EIPR_INTERRUPT_POLARITY,
           QME_EIPR_INTERRUPT_POLARITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EIPR_INTERRUPT_POLARITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EIPR_INTERRUPT_POLARITY]

//>> SET_[QME_EIPR_INTERRUPT_POLARITY]
static inline fapi2::buffer<uint64_t>& SET_QME_EIPR_INTERRUPT_POLARITY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EIPR_RW, QME_EIPR_WO_CLEAR, QME_EIPR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EIPR_INTERRUPT_POLARITY,
           QME_EIPR_INTERRUPT_POLARITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EIPR_INTERRUPT_POLARITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EIPR_INTERRUPT_POLARITY]

//>> GET_[QME_EIPR_INTERRUPT_POLARITY]
static inline fapi2::buffer<uint64_t>& GET_QME_EIPR_INTERRUPT_POLARITY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EIPR_RW, QME_EIPR_WO_CLEAR, QME_EIPR_WO_OR));
#endif
    return i_data.extractToRight<QME_EIPR_INTERRUPT_POLARITY,
           QME_EIPR_INTERRUPT_POLARITY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EIPR_INTERRUPT_POLARITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EIPR_INTERRUPT_POLARITY]

//>> PREP_[QME_LFIRMASK_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_LFIRMASK_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIRMASK_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_LFIRMASK_RW]

//>> GET_[QME_LFIRMASK_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_LFIRMASK_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIRMASK_RW;
#endif
    return fapi2::getScom(i_target, QME_LFIRMASK_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_LFIRMASK_RW]

//>> PUT_[QME_LFIRMASK_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_LFIRMASK_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_LFIRMASK_RW, QME_LFIRMASK_WO_AND, QME_LFIRMASK_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_LFIRMASK_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_LFIRMASK_RW]

//>> SET_[QME_LFIRMASK_FIR_MASK]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIRMASK_FIR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIRMASK_RW, QME_LFIRMASK_WO_AND, QME_LFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIRMASK_FIR_MASK,
           QME_LFIRMASK_FIR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIRMASK_FIR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIRMASK_FIR_MASK]

//>> SET_[QME_LFIRMASK_FIR_MASK]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIRMASK_FIR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIRMASK_RW, QME_LFIRMASK_WO_AND, QME_LFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIRMASK_FIR_MASK,
           QME_LFIRMASK_FIR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIRMASK_FIR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIRMASK_FIR_MASK]

//>> GET_[QME_LFIRMASK_FIR_MASK]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIRMASK_FIR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIRMASK_RW, QME_LFIRMASK_WO_AND, QME_LFIRMASK_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIRMASK_FIR_MASK,
           QME_LFIRMASK_FIR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIRMASK_FIR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIRMASK_FIR_MASK]

//>> PREP_[QME_SSDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_SSDR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SSDR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_SSDR]

//>> GET_[QME_SSDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_SSDR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SSDR;
#endif
    return fapi2::getScom(i_target, QME_SSDR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_SSDR]

//>> PUT_[QME_SSDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_SSDR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return fapi2::putScom(i_target, QME_SSDR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_SSDR]


//>> SET_[QME_SSDR_PC_UNMASKED_ATTN]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_PC_UNMASKED_ATTN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_PC_UNMASKED_ATTN,
           QME_SSDR_PC_UNMASKED_ATTN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SSDR_PC_UNMASKED_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_PC_UNMASKED_ATTN]

//>> SET_[QME_SSDR_PC_UNMASKED_ATTN]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_PC_UNMASKED_ATTN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_PC_UNMASKED_ATTN,
           QME_SSDR_PC_UNMASKED_ATTN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SSDR_PC_UNMASKED_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_PC_UNMASKED_ATTN]

//>> GET_[QME_SSDR_PC_UNMASKED_ATTN]
static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_PC_UNMASKED_ATTN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_PC_UNMASKED_ATTN,
           QME_SSDR_PC_UNMASKED_ATTN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SSDR_PC_UNMASKED_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SSDR_PC_UNMASKED_ATTN]

//>> SET_[QME_SSDR_INSTR_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_INSTR_RUNNING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_INSTR_RUNNING,
           QME_SSDR_INSTR_RUNNING_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SSDR_INSTR_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_INSTR_RUNNING]

//>> SET_[QME_SSDR_INSTR_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_INSTR_RUNNING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_INSTR_RUNNING,
           QME_SSDR_INSTR_RUNNING_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SSDR_INSTR_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_INSTR_RUNNING]

//>> GET_[QME_SSDR_INSTR_RUNNING]
static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_INSTR_RUNNING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_INSTR_RUNNING,
           QME_SSDR_INSTR_RUNNING_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SSDR_INSTR_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SSDR_INSTR_RUNNING]

//>> SET_[QME_SSDR_QME_SCSR_PM_EXIT]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_QME_SCSR_PM_EXIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SSDR_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_QME_SCSR_PM_EXIT]

//>> SET_[QME_SSDR_QME_SCSR_PM_EXIT]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_QME_SCSR_PM_EXIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_QME_SCSR_PM_EXIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SSDR_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_QME_SCSR_PM_EXIT]

//>> SET_[QME_SSDR_QME_SCSR_PM_EXIT]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.setBit<QME_SSDR_QME_SCSR_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_SSDR_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_QME_SCSR_PM_EXIT]

//>> CLEAR_[QME_SSDR_QME_SCSR_PM_EXIT]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SSDR_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.clearBit<QME_SSDR_QME_SCSR_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_SSDR_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SSDR_QME_SCSR_PM_EXIT]

//>> GET_[QME_SSDR_QME_SCSR_PM_EXIT]
static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_QME_SCSR_PM_EXIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SSDR_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SSDR_QME_SCSR_PM_EXIT]

//>> GET_[QME_SSDR_QME_SCSR_PM_EXIT]
static inline bool GET_QME_SSDR_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.getBit<QME_SSDR_QME_SCSR_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_SSDR_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SSDR_QME_SCSR_PM_EXIT]

//>> SET_[QME_SSDR_PM_STATE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_PM_STATE_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_PM_STATE_ACTIVE,
           QME_SSDR_PM_STATE_ACTIVE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SSDR_PM_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_PM_STATE_ACTIVE]

//>> SET_[QME_SSDR_PM_STATE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_PM_STATE_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_PM_STATE_ACTIVE,
           QME_SSDR_PM_STATE_ACTIVE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SSDR_PM_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_PM_STATE_ACTIVE]

//>> GET_[QME_SSDR_PM_STATE_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_PM_STATE_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_PM_STATE_ACTIVE,
           QME_SSDR_PM_STATE_ACTIVE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SSDR_PM_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SSDR_PM_STATE_ACTIVE]

//>> SET_[QME_SSDR_PM_STATE_C0]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_PM_STATE_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_PM_STATE_C0,
           QME_SSDR_PM_STATE_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SSDR_PM_STATE_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_PM_STATE_C0]

//>> SET_[QME_SSDR_PM_STATE_C0]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_PM_STATE_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_PM_STATE_C0,
           QME_SSDR_PM_STATE_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SSDR_PM_STATE_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_PM_STATE_C0]

//>> GET_[QME_SSDR_PM_STATE_C0]
static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_PM_STATE_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_PM_STATE_C0,
           QME_SSDR_PM_STATE_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SSDR_PM_STATE_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SSDR_PM_STATE_C0]

//>> SET_[QME_SSDR_PM_STATE_C1]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_PM_STATE_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_PM_STATE_C1,
           QME_SSDR_PM_STATE_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SSDR_PM_STATE_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_PM_STATE_C1]

//>> SET_[QME_SSDR_PM_STATE_C1]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_PM_STATE_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_PM_STATE_C1,
           QME_SSDR_PM_STATE_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SSDR_PM_STATE_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_PM_STATE_C1]

//>> GET_[QME_SSDR_PM_STATE_C1]
static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_PM_STATE_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_PM_STATE_C1,
           QME_SSDR_PM_STATE_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SSDR_PM_STATE_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SSDR_PM_STATE_C1]

//>> SET_[QME_SSDR_PM_STATE_C2]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_PM_STATE_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_PM_STATE_C2,
           QME_SSDR_PM_STATE_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SSDR_PM_STATE_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_PM_STATE_C2]

//>> SET_[QME_SSDR_PM_STATE_C2]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_PM_STATE_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_PM_STATE_C2,
           QME_SSDR_PM_STATE_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SSDR_PM_STATE_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_PM_STATE_C2]

//>> GET_[QME_SSDR_PM_STATE_C2]
static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_PM_STATE_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_PM_STATE_C2,
           QME_SSDR_PM_STATE_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SSDR_PM_STATE_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SSDR_PM_STATE_C2]

//>> SET_[QME_SSDR_PM_STATE_C3]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_PM_STATE_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_PM_STATE_C3,
           QME_SSDR_PM_STATE_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SSDR_PM_STATE_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_PM_STATE_C3]

//>> SET_[QME_SSDR_PM_STATE_C3]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_PM_STATE_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_PM_STATE_C3,
           QME_SSDR_PM_STATE_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SSDR_PM_STATE_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_PM_STATE_C3]

//>> GET_[QME_SSDR_PM_STATE_C3]
static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_PM_STATE_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_PM_STATE_C3,
           QME_SSDR_PM_STATE_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SSDR_PM_STATE_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SSDR_PM_STATE_C3]

//>> SET_[QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS]

//>> SET_[QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS]

//>> SET_[QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.setBit<QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS]

//>> CLEAR_[QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.clearBit<QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS]

//>> GET_[QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS]
static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS]

//>> GET_[QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS]
static inline bool GET_QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.getBit<QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SSDR_QME_SCSR_BLOCK_INTR_OUTPUTS]

//>> SET_[QME_SSDR_QME_SCSR_PM_BLOCK_INTR]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_QME_SCSR_PM_BLOCK_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SSDR_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_QME_SCSR_PM_BLOCK_INTR]

//>> SET_[QME_SSDR_QME_SCSR_PM_BLOCK_INTR]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_QME_SCSR_PM_BLOCK_INTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_QME_SCSR_PM_BLOCK_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SSDR_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_QME_SCSR_PM_BLOCK_INTR]

//>> SET_[QME_SSDR_QME_SCSR_PM_BLOCK_INTR]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.setBit<QME_SSDR_QME_SCSR_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_SSDR_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_QME_SCSR_PM_BLOCK_INTR]

//>> CLEAR_[QME_SSDR_QME_SCSR_PM_BLOCK_INTR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SSDR_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.clearBit<QME_SSDR_QME_SCSR_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_SSDR_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SSDR_QME_SCSR_PM_BLOCK_INTR]

//>> GET_[QME_SSDR_QME_SCSR_PM_BLOCK_INTR]
static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_QME_SCSR_PM_BLOCK_INTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SSDR_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SSDR_QME_SCSR_PM_BLOCK_INTR]

//>> GET_[QME_SSDR_QME_SCSR_PM_BLOCK_INTR]
static inline bool GET_QME_SSDR_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.getBit<QME_SSDR_QME_SCSR_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_SSDR_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SSDR_QME_SCSR_PM_BLOCK_INTR]

//>> SET_[QME_SSDR_PC_DPES_INTR_PEND]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_PC_DPES_INTR_PEND(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_PC_DPES_INTR_PEND,
           QME_SSDR_PC_DPES_INTR_PEND_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SSDR_PC_DPES_INTR_PEND chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_PC_DPES_INTR_PEND]

//>> SET_[QME_SSDR_PC_DPES_INTR_PEND]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_PC_DPES_INTR_PEND(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_PC_DPES_INTR_PEND,
           QME_SSDR_PC_DPES_INTR_PEND_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SSDR_PC_DPES_INTR_PEND chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_PC_DPES_INTR_PEND]

//>> GET_[QME_SSDR_PC_DPES_INTR_PEND]
static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_PC_DPES_INTR_PEND(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_PC_DPES_INTR_PEND,
           QME_SSDR_PC_DPES_INTR_PEND_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SSDR_PC_DPES_INTR_PEND chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SSDR_PC_DPES_INTR_PEND]

//>> SET_[QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE]

//>> SET_[QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE]

//>> SET_[QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.setBit<QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE]

//>> CLEAR_[QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.clearBit<QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE]

//>> GET_[QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE]

//>> GET_[QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE]
static inline bool GET_QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.getBit<QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_ACTIVE]

//>> SET_[QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_STATE]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_STATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_STATE,
           QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_STATE]

//>> SET_[QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_STATE]
static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_STATE,
           QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_STATE]

//>> GET_[QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_STATE]
static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_STATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_STATE,
           QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SSDR_QME_SSH_SRC_SAMPLED_STOP_STATE]

//>> PREP_[QME_EIPR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_EIPR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EIPR_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_EIPR_WO_CLEAR]

//>> GET_[QME_EIPR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_EIPR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EIPR_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, QME_EIPR_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_EIPR_WO_CLEAR]

//>> PUT_[QME_EIPR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_EIPR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_EIPR_RW, QME_EIPR_WO_CLEAR, QME_EIPR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_EIPR_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_EIPR_WO_CLEAR]

//>> PREP_[QME_EIPR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_EIPR_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EIPR_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_EIPR_WO_OR]

//>> GET_[QME_EIPR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_EIPR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EIPR_WO_OR;
#endif
    return fapi2::getScom(i_target, QME_EIPR_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_EIPR_WO_OR]

//>> PUT_[QME_EIPR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_EIPR_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_EIPR_RW, QME_EIPR_WO_CLEAR, QME_EIPR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_EIPR_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_EIPR_WO_OR]


//>> PREP_[QME_LFIRMASK_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_LFIRMASK_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIRMASK_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_LFIRMASK_WO_AND]

//>> GET_[QME_LFIRMASK_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_LFIRMASK_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIRMASK_WO_AND;
#endif
    return fapi2::getScom(i_target, QME_LFIRMASK_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_LFIRMASK_WO_AND]

//>> PUT_[QME_LFIRMASK_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_LFIRMASK_WO_AND(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_LFIRMASK_RW, QME_LFIRMASK_WO_AND, QME_LFIRMASK_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_LFIRMASK_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_LFIRMASK_WO_AND]

//>> PREP_[QME_LFIRMASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_LFIRMASK_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIRMASK_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_LFIRMASK_WO_OR]

//>> GET_[QME_LFIRMASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_LFIRMASK_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIRMASK_WO_OR;
#endif
    return fapi2::getScom(i_target, QME_LFIRMASK_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_LFIRMASK_WO_OR]

//>> PUT_[QME_LFIRMASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_LFIRMASK_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_LFIRMASK_RW, QME_LFIRMASK_WO_AND, QME_LFIRMASK_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_LFIRMASK_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_LFIRMASK_WO_OR]


//>> PREP_[QME_SWHR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_SWHR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SWHR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_SWHR]

//>> GET_[QME_SWHR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_SWHR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SWHR;
#endif
    return fapi2::getScom(i_target, QME_SWHR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_SWHR]

//>> PUT_[QME_SWHR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_SWHR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return fapi2::putScom(i_target, QME_SWHR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_SWHR]


//>> SET_[QME_SWHR_SPC_WKUP_HISTORY_C0]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_SPC_WKUP_HISTORY_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_SPC_WKUP_HISTORY_C0,
           QME_SWHR_SPC_WKUP_HISTORY_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_SPC_WKUP_HISTORY_C0]

//>> SET_[QME_SWHR_SPC_WKUP_HISTORY_C0]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_SPC_WKUP_HISTORY_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_SPC_WKUP_HISTORY_C0,
           QME_SWHR_SPC_WKUP_HISTORY_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_SPC_WKUP_HISTORY_C0]

//>> GET_[QME_SWHR_SPC_WKUP_HISTORY_C0]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_SPC_WKUP_HISTORY_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_SPC_WKUP_HISTORY_C0,
           QME_SWHR_SPC_WKUP_HISTORY_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_SPC_WKUP_HISTORY_C0]

//>> SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET]

//>> SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET]

//>> GET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET]

//>> SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR]

//>> SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR]

//>> GET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR]

//>> SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT]

//>> SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT]

//>> GET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT]

//>> SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP]

//>> SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP]

//>> GET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP]

//>> SET_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]

//>> CLEAR_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]

//>> GET_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]

//>> GET_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]
static inline bool GET_QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]

//>> CLEAR_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]

//>> GET_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]

//>> GET_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]
static inline bool GET_QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]

//>> CLEAR_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]

//>> GET_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]

//>> GET_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]
static inline bool GET_QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]

//>> CLEAR_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]

//>> GET_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]

//>> GET_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]
static inline bool GET_QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_SPC_WKUP_HISTORY_C1]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_SPC_WKUP_HISTORY_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_SPC_WKUP_HISTORY_C1,
           QME_SWHR_SPC_WKUP_HISTORY_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_SPC_WKUP_HISTORY_C1]

//>> SET_[QME_SWHR_SPC_WKUP_HISTORY_C1]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_SPC_WKUP_HISTORY_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_SPC_WKUP_HISTORY_C1,
           QME_SWHR_SPC_WKUP_HISTORY_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_SPC_WKUP_HISTORY_C1]

//>> GET_[QME_SWHR_SPC_WKUP_HISTORY_C1]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_SPC_WKUP_HISTORY_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_SPC_WKUP_HISTORY_C1,
           QME_SWHR_SPC_WKUP_HISTORY_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_SPC_WKUP_HISTORY_C1]

//>> SET_[QME_SWHR_SPC_WKUP_HISTORY_C2]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_SPC_WKUP_HISTORY_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_SPC_WKUP_HISTORY_C2,
           QME_SWHR_SPC_WKUP_HISTORY_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_SPC_WKUP_HISTORY_C2]

//>> SET_[QME_SWHR_SPC_WKUP_HISTORY_C2]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_SPC_WKUP_HISTORY_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_SPC_WKUP_HISTORY_C2,
           QME_SWHR_SPC_WKUP_HISTORY_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_SPC_WKUP_HISTORY_C2]

//>> GET_[QME_SWHR_SPC_WKUP_HISTORY_C2]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_SPC_WKUP_HISTORY_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_SPC_WKUP_HISTORY_C2,
           QME_SWHR_SPC_WKUP_HISTORY_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_SPC_WKUP_HISTORY_C2]

//>> SET_[QME_SWHR_SPC_WKUP_HISTORY_C3]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_SPC_WKUP_HISTORY_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_SPC_WKUP_HISTORY_C3,
           QME_SWHR_SPC_WKUP_HISTORY_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_SPC_WKUP_HISTORY_C3]

//>> SET_[QME_SWHR_SPC_WKUP_HISTORY_C3]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_SPC_WKUP_HISTORY_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_SPC_WKUP_HISTORY_C3,
           QME_SWHR_SPC_WKUP_HISTORY_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_SPC_WKUP_HISTORY_C3]

//>> GET_[QME_SWHR_SPC_WKUP_HISTORY_C3]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_SPC_WKUP_HISTORY_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_SPC_WKUP_HISTORY_C3,
           QME_SWHR_SPC_WKUP_HISTORY_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_SPC_WKUP_HISTORY_C3]

//>> PREP_[QME_SWPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_SWPR0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SWPR0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_SWPR0]

//>> GET_[QME_SWPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_SWPR0(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SWPR0;
#endif
    return fapi2::getScom(i_target, QME_SWPR0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_SWPR0]

//>> PUT_[QME_SWPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_SWPR0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_SWPR0));
#endif
    return fapi2::putScom(i_target, QME_SWPR0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_SWPR0]


//>> SET_[QME_SWPR0_BAR]
static inline fapi2::buffer<uint64_t>& SET_QME_SWPR0_BAR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWPR0));
#endif
    return o_data.insertFromRight<QME_SWPR0_BAR,
           QME_SWPR0_BAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWPR0_BAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWPR0_BAR]

//>> SET_[QME_SWPR0_BAR]
static inline fapi2::buffer<uint64_t>& SET_QME_SWPR0_BAR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWPR0));
#endif
    return o_data.insertFromRight<QME_SWPR0_BAR,
           QME_SWPR0_BAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWPR0_BAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWPR0_BAR]

//>> GET_[QME_SWPR0_BAR]
static inline fapi2::buffer<uint64_t>& GET_QME_SWPR0_BAR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWPR0));
#endif
    return i_data.extractToRight<QME_SWPR0_BAR,
           QME_SWPR0_BAR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWPR0_BAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWPR0_BAR]

//>> SET_[QME_SWPR0_SIZE]
static inline fapi2::buffer<uint64_t>& SET_QME_SWPR0_SIZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWPR0));
#endif
    return o_data.insertFromRight<QME_SWPR0_SIZE,
           QME_SWPR0_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWPR0_SIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWPR0_SIZE]

//>> SET_[QME_SWPR0_SIZE]
static inline fapi2::buffer<uint64_t>& SET_QME_SWPR0_SIZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWPR0));
#endif
    return o_data.insertFromRight<QME_SWPR0_SIZE,
           QME_SWPR0_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWPR0_SIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWPR0_SIZE]

//>> GET_[QME_SWPR0_SIZE]
static inline fapi2::buffer<uint64_t>& GET_QME_SWPR0_SIZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWPR0));
#endif
    return i_data.extractToRight<QME_SWPR0_SIZE,
           QME_SWPR0_SIZE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWPR0_SIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWPR0_SIZE]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
