/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_eq/reg00011.H $           */
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

#ifndef __PPE_EQ_REG00011_H_
#define __PPE_EQ_REG00011_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


//>> PREP_[QME_RCPTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_RCPTR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_RCPTR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_RCPTR]

//>> GET_[QME_RCPTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_RCPTR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_RCPTR;
#endif
    return fapi2::getScom(i_target, QME_RCPTR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_RCPTR]

//>> PUT_[QME_RCPTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_RCPTR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return fapi2::putScom(i_target, QME_RCPTR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_RCPTR]


//>> SET_[QME_RCPTR_TARGET_PSTATE]
static inline fapi2::buffer<uint64_t>& SET_QME_RCPTR_TARGET_PSTATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return o_data.insertFromRight<QME_RCPTR_TARGET_PSTATE,
           QME_RCPTR_TARGET_PSTATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCPTR_TARGET_PSTATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCPTR_TARGET_PSTATE]

//>> SET_[QME_RCPTR_TARGET_PSTATE]
static inline fapi2::buffer<uint64_t>& SET_QME_RCPTR_TARGET_PSTATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return o_data.insertFromRight<QME_RCPTR_TARGET_PSTATE,
           QME_RCPTR_TARGET_PSTATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCPTR_TARGET_PSTATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCPTR_TARGET_PSTATE]

//>> GET_[QME_RCPTR_TARGET_PSTATE]
static inline fapi2::buffer<uint64_t>& GET_QME_RCPTR_TARGET_PSTATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return i_data.extractToRight<QME_RCPTR_TARGET_PSTATE,
           QME_RCPTR_TARGET_PSTATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCPTR_TARGET_PSTATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCPTR_TARGET_PSTATE]

//>> SET_[QME_RCPTR_PSTATE_CHANGE_PENDING]
static inline fapi2::buffer<uint64_t>& SET_QME_RCPTR_PSTATE_CHANGE_PENDING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return o_data.insertFromRight<QME_RCPTR_PSTATE_CHANGE_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCPTR_PSTATE_CHANGE_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCPTR_PSTATE_CHANGE_PENDING]

//>> SET_[QME_RCPTR_PSTATE_CHANGE_PENDING]
static inline fapi2::buffer<uint64_t>& SET_QME_RCPTR_PSTATE_CHANGE_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return o_data.insertFromRight<QME_RCPTR_PSTATE_CHANGE_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCPTR_PSTATE_CHANGE_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCPTR_PSTATE_CHANGE_PENDING]

//>> SET_[QME_RCPTR_PSTATE_CHANGE_PENDING]
static inline fapi2::buffer<uint64_t>& SET_QME_RCPTR_PSTATE_CHANGE_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return o_data.setBit<QME_RCPTR_PSTATE_CHANGE_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_RCPTR_PSTATE_CHANGE_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCPTR_PSTATE_CHANGE_PENDING]

//>> CLEAR_[QME_RCPTR_PSTATE_CHANGE_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_RCPTR_PSTATE_CHANGE_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return o_data.clearBit<QME_RCPTR_PSTATE_CHANGE_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_RCPTR_PSTATE_CHANGE_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_RCPTR_PSTATE_CHANGE_PENDING]

//>> GET_[QME_RCPTR_PSTATE_CHANGE_PENDING]
static inline fapi2::buffer<uint64_t>& GET_QME_RCPTR_PSTATE_CHANGE_PENDING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return i_data.extractToRight<QME_RCPTR_PSTATE_CHANGE_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCPTR_PSTATE_CHANGE_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCPTR_PSTATE_CHANGE_PENDING]

//>> GET_[QME_RCPTR_PSTATE_CHANGE_PENDING]
static inline bool GET_QME_RCPTR_PSTATE_CHANGE_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return i_data.getBit<QME_RCPTR_PSTATE_CHANGE_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_RCPTR_PSTATE_CHANGE_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCPTR_PSTATE_CHANGE_PENDING]

//>> SET_[QME_RCPTR_TARGET_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_RCPTR_TARGET_INDEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return o_data.insertFromRight<QME_RCPTR_TARGET_INDEX,
           QME_RCPTR_TARGET_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCPTR_TARGET_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCPTR_TARGET_INDEX]

//>> SET_[QME_RCPTR_TARGET_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_RCPTR_TARGET_INDEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return o_data.insertFromRight<QME_RCPTR_TARGET_INDEX,
           QME_RCPTR_TARGET_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCPTR_TARGET_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCPTR_TARGET_INDEX]

//>> GET_[QME_RCPTR_TARGET_INDEX]
static inline fapi2::buffer<uint64_t>& GET_QME_RCPTR_TARGET_INDEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return i_data.extractToRight<QME_RCPTR_TARGET_INDEX,
           QME_RCPTR_TARGET_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCPTR_TARGET_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCPTR_TARGET_INDEX]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
