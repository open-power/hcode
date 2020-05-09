/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_eq/reg00013.H $           */
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

#ifndef __PPE_EQ_REG00013_H_
#define __PPE_EQ_REG00013_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


//>> PREP_[QME_EIMR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_EIMR_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EIMR_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_EIMR_RW]

//>> GET_[QME_EIMR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_EIMR_RW(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EIMR_RW;
#endif
    return fapi2::getScom(i_target, QME_EIMR_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_EIMR_RW]

//>> PUT_[QME_EIMR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_EIMR_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_EIMR_RW, QME_EIMR_WO_CLEAR, QME_EIMR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_EIMR_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_EIMR_RW]

//>> PREP_[QME_EIMR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_EIMR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EIMR_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_EIMR_WO_CLEAR]

//>> GET_[QME_EIMR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_EIMR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EIMR_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, QME_EIMR_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_EIMR_WO_CLEAR]

//>> PUT_[QME_EIMR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_EIMR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_EIMR_RW, QME_EIMR_WO_CLEAR, QME_EIMR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_EIMR_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_EIMR_WO_CLEAR]

//>> PREP_[QME_EIMR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_EIMR_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EIMR_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_EIMR_WO_OR]

//>> GET_[QME_EIMR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_EIMR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EIMR_WO_OR;
#endif
    return fapi2::getScom(i_target, QME_EIMR_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_EIMR_WO_OR]

//>> PUT_[QME_EIMR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_EIMR_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_EIMR_RW, QME_EIMR_WO_CLEAR, QME_EIMR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_EIMR_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_EIMR_WO_OR]


//>> SET_[QME_EIMR_INTERRUPT_MASK]
static inline fapi2::buffer<uint64_t>& SET_QME_EIMR_INTERRUPT_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EIMR_RW, QME_EIMR_WO_CLEAR, QME_EIMR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EIMR_INTERRUPT_MASK,
           QME_EIMR_INTERRUPT_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EIMR_INTERRUPT_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EIMR_INTERRUPT_MASK]

//>> SET_[QME_EIMR_INTERRUPT_MASK]
static inline fapi2::buffer<uint64_t>& SET_QME_EIMR_INTERRUPT_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EIMR_RW, QME_EIMR_WO_CLEAR, QME_EIMR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EIMR_INTERRUPT_MASK,
           QME_EIMR_INTERRUPT_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EIMR_INTERRUPT_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EIMR_INTERRUPT_MASK]

//>> GET_[QME_EIMR_INTERRUPT_MASK]
static inline fapi2::buffer<uint64_t>& GET_QME_EIMR_INTERRUPT_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EIMR_RW, QME_EIMR_WO_CLEAR, QME_EIMR_WO_OR));
#endif
    return i_data.extractToRight<QME_EIMR_INTERRUPT_MASK,
           QME_EIMR_INTERRUPT_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EIMR_INTERRUPT_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EIMR_INTERRUPT_MASK]

//>> PREP_[QME_PIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_PIG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PIG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_PIG]

//>> GET_[QME_PIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_PIG(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PIG;
#endif
    return fapi2::getScom(i_target, QME_PIG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_PIG]

//>> PUT_[QME_PIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_PIG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return fapi2::putScom(i_target, QME_PIG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_PIG]


//>> SET_[QME_PIG_REQ_INTR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_QME_PIG_REQ_INTR_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return o_data.insertFromRight<QME_PIG_REQ_INTR_TYPE,
           QME_PIG_REQ_INTR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PIG_REQ_INTR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PIG_REQ_INTR_TYPE]

//>> SET_[QME_PIG_REQ_INTR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_QME_PIG_REQ_INTR_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return o_data.insertFromRight<QME_PIG_REQ_INTR_TYPE,
           QME_PIG_REQ_INTR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PIG_REQ_INTR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PIG_REQ_INTR_TYPE]

//>> GET_[QME_PIG_REQ_INTR_TYPE]
static inline fapi2::buffer<uint64_t>& GET_QME_PIG_REQ_INTR_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return i_data.extractToRight<QME_PIG_REQ_INTR_TYPE,
           QME_PIG_REQ_INTR_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PIG_REQ_INTR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PIG_REQ_INTR_TYPE]

//>> SET_[QME_PIG_REQ_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_QME_PIG_REQ_INTR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return o_data.insertFromRight<QME_PIG_REQ_INTR_PAYLOAD,
           QME_PIG_REQ_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PIG_REQ_INTR_PAYLOAD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PIG_REQ_INTR_PAYLOAD]

//>> SET_[QME_PIG_REQ_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_QME_PIG_REQ_INTR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return o_data.insertFromRight<QME_PIG_REQ_INTR_PAYLOAD,
           QME_PIG_REQ_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PIG_REQ_INTR_PAYLOAD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PIG_REQ_INTR_PAYLOAD]

//>> GET_[QME_PIG_REQ_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_QME_PIG_REQ_INTR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return i_data.extractToRight<QME_PIG_REQ_INTR_PAYLOAD,
           QME_PIG_REQ_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PIG_REQ_INTR_PAYLOAD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PIG_REQ_INTR_PAYLOAD]

//>> SET_[QME_PIG_PENDING_SOURCE]
static inline fapi2::buffer<uint64_t>& SET_QME_PIG_PENDING_SOURCE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return o_data.insertFromRight<QME_PIG_PENDING_SOURCE,
           QME_PIG_PENDING_SOURCE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PIG_PENDING_SOURCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PIG_PENDING_SOURCE]

//>> SET_[QME_PIG_PENDING_SOURCE]
static inline fapi2::buffer<uint64_t>& SET_QME_PIG_PENDING_SOURCE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return o_data.insertFromRight<QME_PIG_PENDING_SOURCE,
           QME_PIG_PENDING_SOURCE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PIG_PENDING_SOURCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PIG_PENDING_SOURCE]

//>> GET_[QME_PIG_PENDING_SOURCE]
static inline fapi2::buffer<uint64_t>& GET_QME_PIG_PENDING_SOURCE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return i_data.extractToRight<QME_PIG_PENDING_SOURCE,
           QME_PIG_PENDING_SOURCE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PIG_PENDING_SOURCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PIG_PENDING_SOURCE]

//>> SET_[QME_PIG_INTR_GRANTED]
static inline fapi2::buffer<uint64_t>& SET_QME_PIG_INTR_GRANTED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return o_data.insertFromRight<QME_PIG_INTR_GRANTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PIG_INTR_GRANTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PIG_INTR_GRANTED]

//>> SET_[QME_PIG_INTR_GRANTED]
static inline fapi2::buffer<uint64_t>& SET_QME_PIG_INTR_GRANTED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return o_data.insertFromRight<QME_PIG_INTR_GRANTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PIG_INTR_GRANTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PIG_INTR_GRANTED]

//>> SET_[QME_PIG_INTR_GRANTED]
static inline fapi2::buffer<uint64_t>& SET_QME_PIG_INTR_GRANTED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return o_data.setBit<QME_PIG_INTR_GRANTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PIG_INTR_GRANTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PIG_INTR_GRANTED]

//>> CLEAR_[QME_PIG_INTR_GRANTED]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PIG_INTR_GRANTED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return o_data.clearBit<QME_PIG_INTR_GRANTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PIG_INTR_GRANTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PIG_INTR_GRANTED]

//>> GET_[QME_PIG_INTR_GRANTED]
static inline fapi2::buffer<uint64_t>& GET_QME_PIG_INTR_GRANTED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return i_data.extractToRight<QME_PIG_INTR_GRANTED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PIG_INTR_GRANTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PIG_INTR_GRANTED]

//>> GET_[QME_PIG_INTR_GRANTED]
static inline bool GET_QME_PIG_INTR_GRANTED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return i_data.getBit<QME_PIG_INTR_GRANTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PIG_INTR_GRANTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PIG_INTR_GRANTED]

//>> SET_[QME_PIG_GRANTED_SOURCE]
static inline fapi2::buffer<uint64_t>& SET_QME_PIG_GRANTED_SOURCE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return o_data.insertFromRight<QME_PIG_GRANTED_SOURCE,
           QME_PIG_GRANTED_SOURCE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PIG_GRANTED_SOURCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PIG_GRANTED_SOURCE]

//>> SET_[QME_PIG_GRANTED_SOURCE]
static inline fapi2::buffer<uint64_t>& SET_QME_PIG_GRANTED_SOURCE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return o_data.insertFromRight<QME_PIG_GRANTED_SOURCE,
           QME_PIG_GRANTED_SOURCE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PIG_GRANTED_SOURCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PIG_GRANTED_SOURCE]

//>> GET_[QME_PIG_GRANTED_SOURCE]
static inline fapi2::buffer<uint64_t>& GET_QME_PIG_GRANTED_SOURCE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return i_data.extractToRight<QME_PIG_GRANTED_SOURCE,
           QME_PIG_GRANTED_SOURCE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PIG_GRANTED_SOURCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PIG_GRANTED_SOURCE]

//>> SET_[QME_PIG_QUAD_ID]
static inline fapi2::buffer<uint64_t>& SET_QME_PIG_QUAD_ID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return o_data.insertFromRight<QME_PIG_QUAD_ID,
           QME_PIG_QUAD_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PIG_QUAD_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PIG_QUAD_ID]

//>> SET_[QME_PIG_QUAD_ID]
static inline fapi2::buffer<uint64_t>& SET_QME_PIG_QUAD_ID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return o_data.insertFromRight<QME_PIG_QUAD_ID,
           QME_PIG_QUAD_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PIG_QUAD_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PIG_QUAD_ID]

//>> GET_[QME_PIG_QUAD_ID]
static inline fapi2::buffer<uint64_t>& GET_QME_PIG_QUAD_ID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return i_data.extractToRight<QME_PIG_QUAD_ID,
           QME_PIG_QUAD_ID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PIG_QUAD_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PIG_QUAD_ID]

//>> SET_[QME_PIG_GRANTED_PACKET]
static inline fapi2::buffer<uint64_t>& SET_QME_PIG_GRANTED_PACKET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return o_data.insertFromRight<QME_PIG_GRANTED_PACKET,
           QME_PIG_GRANTED_PACKET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PIG_GRANTED_PACKET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PIG_GRANTED_PACKET]

//>> SET_[QME_PIG_GRANTED_PACKET]
static inline fapi2::buffer<uint64_t>& SET_QME_PIG_GRANTED_PACKET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return o_data.insertFromRight<QME_PIG_GRANTED_PACKET,
           QME_PIG_GRANTED_PACKET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PIG_GRANTED_PACKET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PIG_GRANTED_PACKET]

//>> GET_[QME_PIG_GRANTED_PACKET]
static inline fapi2::buffer<uint64_t>& GET_QME_PIG_GRANTED_PACKET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PIG));
#endif
    return i_data.extractToRight<QME_PIG_GRANTED_PACKET,
           QME_PIG_GRANTED_PACKET_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PIG_GRANTED_PACKET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PIG_GRANTED_PACKET]

//>> PREP_[QME_QSCR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_QSCR_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QSCR_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_QSCR_RW]

//>> GET_[QME_QSCR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_QSCR_RW(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QSCR_RW;
#endif
    return fapi2::getScom(i_target, QME_QSCR_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_QSCR_RW]

//>> PUT_[QME_QSCR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_QSCR_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_QSCR_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_QSCR_RW]

//>> PREP_[QME_QSCR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_QSCR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QSCR_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_QSCR_WO_CLEAR]

//>> GET_[QME_QSCR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_QSCR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QSCR_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, QME_QSCR_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_QSCR_WO_CLEAR]

//>> PUT_[QME_QSCR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_QSCR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_QSCR_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_QSCR_WO_CLEAR]

//>> PREP_[QME_QSCR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_QSCR_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QSCR_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_QSCR_WO_OR]

//>> GET_[QME_QSCR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_QSCR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QSCR_WO_OR;
#endif
    return fapi2::getScom(i_target, QME_QSCR_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_QSCR_WO_OR]

//>> PUT_[QME_QSCR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_QSCR_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_QSCR_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_QSCR_WO_OR]


//>> SET_[QME_QSCR_SRAM_ACCESS_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_SRAM_ACCESS_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.insertFromRight<QME_QSCR_SRAM_ACCESS_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QSCR_SRAM_ACCESS_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_SRAM_ACCESS_MODE]

//>> SET_[QME_QSCR_SRAM_ACCESS_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_SRAM_ACCESS_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.insertFromRight<QME_QSCR_SRAM_ACCESS_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QSCR_SRAM_ACCESS_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_SRAM_ACCESS_MODE]

//>> SET_[QME_QSCR_SRAM_ACCESS_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_SRAM_ACCESS_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.setBit<QME_QSCR_SRAM_ACCESS_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QSCR_SRAM_ACCESS_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_SRAM_ACCESS_MODE]

//>> CLEAR_[QME_QSCR_SRAM_ACCESS_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QSCR_SRAM_ACCESS_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.clearBit<QME_QSCR_SRAM_ACCESS_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QSCR_SRAM_ACCESS_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QSCR_SRAM_ACCESS_MODE]

//>> GET_[QME_QSCR_SRAM_ACCESS_MODE]
static inline fapi2::buffer<uint64_t>& GET_QME_QSCR_SRAM_ACCESS_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return i_data.extractToRight<QME_QSCR_SRAM_ACCESS_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QSCR_SRAM_ACCESS_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QSCR_SRAM_ACCESS_MODE]

//>> GET_[QME_QSCR_SRAM_ACCESS_MODE]
static inline bool GET_QME_QSCR_SRAM_ACCESS_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return i_data.getBit<QME_QSCR_SRAM_ACCESS_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QSCR_SRAM_ACCESS_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QSCR_SRAM_ACCESS_MODE]

//>> SET_[QME_QSCR_SRAM_SCRUB_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_SRAM_SCRUB_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.insertFromRight<QME_QSCR_SRAM_SCRUB_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QSCR_SRAM_SCRUB_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_SRAM_SCRUB_ENABLE]

//>> SET_[QME_QSCR_SRAM_SCRUB_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_SRAM_SCRUB_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.insertFromRight<QME_QSCR_SRAM_SCRUB_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QSCR_SRAM_SCRUB_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_SRAM_SCRUB_ENABLE]

//>> SET_[QME_QSCR_SRAM_SCRUB_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_SRAM_SCRUB_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.setBit<QME_QSCR_SRAM_SCRUB_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QSCR_SRAM_SCRUB_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_SRAM_SCRUB_ENABLE]

//>> CLEAR_[QME_QSCR_SRAM_SCRUB_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QSCR_SRAM_SCRUB_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.clearBit<QME_QSCR_SRAM_SCRUB_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QSCR_SRAM_SCRUB_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QSCR_SRAM_SCRUB_ENABLE]

//>> GET_[QME_QSCR_SRAM_SCRUB_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_QSCR_SRAM_SCRUB_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return i_data.extractToRight<QME_QSCR_SRAM_SCRUB_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QSCR_SRAM_SCRUB_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QSCR_SRAM_SCRUB_ENABLE]

//>> GET_[QME_QSCR_SRAM_SCRUB_ENABLE]
static inline bool GET_QME_QSCR_SRAM_SCRUB_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return i_data.getBit<QME_QSCR_SRAM_SCRUB_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QSCR_SRAM_SCRUB_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QSCR_SRAM_SCRUB_ENABLE]

//>> SET_[QME_QSCR_ECC_CORRECT_DIS]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_ECC_CORRECT_DIS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.insertFromRight<QME_QSCR_ECC_CORRECT_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QSCR_ECC_CORRECT_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_ECC_CORRECT_DIS]

//>> SET_[QME_QSCR_ECC_CORRECT_DIS]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_ECC_CORRECT_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.insertFromRight<QME_QSCR_ECC_CORRECT_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QSCR_ECC_CORRECT_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_ECC_CORRECT_DIS]

//>> SET_[QME_QSCR_ECC_CORRECT_DIS]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_ECC_CORRECT_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.setBit<QME_QSCR_ECC_CORRECT_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QSCR_ECC_CORRECT_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_ECC_CORRECT_DIS]

//>> CLEAR_[QME_QSCR_ECC_CORRECT_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QSCR_ECC_CORRECT_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.clearBit<QME_QSCR_ECC_CORRECT_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QSCR_ECC_CORRECT_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QSCR_ECC_CORRECT_DIS]

//>> GET_[QME_QSCR_ECC_CORRECT_DIS]
static inline fapi2::buffer<uint64_t>& GET_QME_QSCR_ECC_CORRECT_DIS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return i_data.extractToRight<QME_QSCR_ECC_CORRECT_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QSCR_ECC_CORRECT_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QSCR_ECC_CORRECT_DIS]

//>> GET_[QME_QSCR_ECC_CORRECT_DIS]
static inline bool GET_QME_QSCR_ECC_CORRECT_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return i_data.getBit<QME_QSCR_ECC_CORRECT_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QSCR_ECC_CORRECT_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QSCR_ECC_CORRECT_DIS]

//>> SET_[QME_QSCR_ECC_DETECT_DIS]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_ECC_DETECT_DIS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.insertFromRight<QME_QSCR_ECC_DETECT_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QSCR_ECC_DETECT_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_ECC_DETECT_DIS]

//>> SET_[QME_QSCR_ECC_DETECT_DIS]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_ECC_DETECT_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.insertFromRight<QME_QSCR_ECC_DETECT_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QSCR_ECC_DETECT_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_ECC_DETECT_DIS]

//>> SET_[QME_QSCR_ECC_DETECT_DIS]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_ECC_DETECT_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.setBit<QME_QSCR_ECC_DETECT_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QSCR_ECC_DETECT_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_ECC_DETECT_DIS]

//>> CLEAR_[QME_QSCR_ECC_DETECT_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QSCR_ECC_DETECT_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.clearBit<QME_QSCR_ECC_DETECT_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QSCR_ECC_DETECT_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QSCR_ECC_DETECT_DIS]

//>> GET_[QME_QSCR_ECC_DETECT_DIS]
static inline fapi2::buffer<uint64_t>& GET_QME_QSCR_ECC_DETECT_DIS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return i_data.extractToRight<QME_QSCR_ECC_DETECT_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QSCR_ECC_DETECT_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QSCR_ECC_DETECT_DIS]

//>> GET_[QME_QSCR_ECC_DETECT_DIS]
static inline bool GET_QME_QSCR_ECC_DETECT_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return i_data.getBit<QME_QSCR_ECC_DETECT_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QSCR_ECC_DETECT_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QSCR_ECC_DETECT_DIS]

//>> SET_[QME_QSCR_ECC_INJECT_TYPE]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_ECC_INJECT_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.insertFromRight<QME_QSCR_ECC_INJECT_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QSCR_ECC_INJECT_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_ECC_INJECT_TYPE]

//>> SET_[QME_QSCR_ECC_INJECT_TYPE]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_ECC_INJECT_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.insertFromRight<QME_QSCR_ECC_INJECT_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QSCR_ECC_INJECT_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_ECC_INJECT_TYPE]

//>> SET_[QME_QSCR_ECC_INJECT_TYPE]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_ECC_INJECT_TYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.setBit<QME_QSCR_ECC_INJECT_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QSCR_ECC_INJECT_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_ECC_INJECT_TYPE]

//>> CLEAR_[QME_QSCR_ECC_INJECT_TYPE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QSCR_ECC_INJECT_TYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.clearBit<QME_QSCR_ECC_INJECT_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QSCR_ECC_INJECT_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QSCR_ECC_INJECT_TYPE]

//>> GET_[QME_QSCR_ECC_INJECT_TYPE]
static inline fapi2::buffer<uint64_t>& GET_QME_QSCR_ECC_INJECT_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return i_data.extractToRight<QME_QSCR_ECC_INJECT_TYPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QSCR_ECC_INJECT_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QSCR_ECC_INJECT_TYPE]

//>> GET_[QME_QSCR_ECC_INJECT_TYPE]
static inline bool GET_QME_QSCR_ECC_INJECT_TYPE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return i_data.getBit<QME_QSCR_ECC_INJECT_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QSCR_ECC_INJECT_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QSCR_ECC_INJECT_TYPE]

//>> SET_[QME_QSCR_ECC_INJECT_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_ECC_INJECT_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.insertFromRight<QME_QSCR_ECC_INJECT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QSCR_ECC_INJECT_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_ECC_INJECT_ERR]

//>> SET_[QME_QSCR_ECC_INJECT_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_ECC_INJECT_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.insertFromRight<QME_QSCR_ECC_INJECT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QSCR_ECC_INJECT_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_ECC_INJECT_ERR]

//>> SET_[QME_QSCR_ECC_INJECT_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_ECC_INJECT_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.setBit<QME_QSCR_ECC_INJECT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QSCR_ECC_INJECT_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_ECC_INJECT_ERR]

//>> CLEAR_[QME_QSCR_ECC_INJECT_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QSCR_ECC_INJECT_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.clearBit<QME_QSCR_ECC_INJECT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QSCR_ECC_INJECT_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QSCR_ECC_INJECT_ERR]

//>> GET_[QME_QSCR_ECC_INJECT_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_QSCR_ECC_INJECT_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return i_data.extractToRight<QME_QSCR_ECC_INJECT_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QSCR_ECC_INJECT_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QSCR_ECC_INJECT_ERR]

//>> GET_[QME_QSCR_ECC_INJECT_ERR]
static inline bool GET_QME_QSCR_ECC_INJECT_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return i_data.getBit<QME_QSCR_ECC_INJECT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QSCR_ECC_INJECT_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QSCR_ECC_INJECT_ERR]

//>> SET_[QME_QSCR_SPARE_6_7]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_SPARE_6_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.insertFromRight<QME_QSCR_SPARE_6_7,
           QME_QSCR_SPARE_6_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QSCR_SPARE_6_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_SPARE_6_7]

//>> SET_[QME_QSCR_SPARE_6_7]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_SPARE_6_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.insertFromRight<QME_QSCR_SPARE_6_7,
           QME_QSCR_SPARE_6_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QSCR_SPARE_6_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_SPARE_6_7]

//>> GET_[QME_QSCR_SPARE_6_7]
static inline fapi2::buffer<uint64_t>& GET_QME_QSCR_SPARE_6_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return i_data.extractToRight<QME_QSCR_SPARE_6_7,
           QME_QSCR_SPARE_6_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QSCR_SPARE_6_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QSCR_SPARE_6_7]

//>> SET_[QME_QSCR_DTCBASE]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_DTCBASE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.insertFromRight<QME_QSCR_DTCBASE,
           QME_QSCR_DTCBASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QSCR_DTCBASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_DTCBASE]

//>> SET_[QME_QSCR_DTCBASE]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_DTCBASE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.insertFromRight<QME_QSCR_DTCBASE,
           QME_QSCR_DTCBASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QSCR_DTCBASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_DTCBASE]

//>> GET_[QME_QSCR_DTCBASE]
static inline fapi2::buffer<uint64_t>& GET_QME_QSCR_DTCBASE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return i_data.extractToRight<QME_QSCR_DTCBASE,
           QME_QSCR_DTCBASE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QSCR_DTCBASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QSCR_DTCBASE]

//>> SET_[QME_QSCR_SRAM_SCRUB_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_SRAM_SCRUB_INDEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.insertFromRight<QME_QSCR_SRAM_SCRUB_INDEX,
           QME_QSCR_SRAM_SCRUB_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QSCR_SRAM_SCRUB_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_SRAM_SCRUB_INDEX]

//>> SET_[QME_QSCR_SRAM_SCRUB_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_QSCR_SRAM_SCRUB_INDEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return o_data.insertFromRight<QME_QSCR_SRAM_SCRUB_INDEX,
           QME_QSCR_SRAM_SCRUB_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QSCR_SRAM_SCRUB_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSCR_SRAM_SCRUB_INDEX]

//>> GET_[QME_QSCR_SRAM_SCRUB_INDEX]
static inline fapi2::buffer<uint64_t>& GET_QME_QSCR_SRAM_SCRUB_INDEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSCR_RW, QME_QSCR_WO_CLEAR, QME_QSCR_WO_OR));
#endif
    return i_data.extractToRight<QME_QSCR_SRAM_SCRUB_INDEX,
           QME_QSCR_SRAM_SCRUB_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QSCR_SRAM_SCRUB_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QSCR_SRAM_SCRUB_INDEX]

//>> PREP_[QME_RCMR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_RCMR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_RCMR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_RCMR]

//>> GET_[QME_RCMR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_RCMR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_RCMR;
#endif
    return fapi2::getScom(i_target, QME_RCMR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_RCMR]

//>> PUT_[QME_RCMR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_RCMR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_RCMR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_RCMR]

//>> PREP_[QME_RCMR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_RCMR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_RCMR_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_RCMR_WO_CLEAR]

//>> GET_[QME_RCMR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_RCMR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_RCMR_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, QME_RCMR_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_RCMR_WO_CLEAR]

//>> PUT_[QME_RCMR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_RCMR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_RCMR_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_RCMR_WO_CLEAR]

//>> PREP_[QME_RCMR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_RCMR_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_RCMR_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_RCMR_WO_OR]

//>> GET_[QME_RCMR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_RCMR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_RCMR_WO_OR;
#endif
    return fapi2::getScom(i_target, QME_RCMR_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_RCMR_WO_OR]

//>> PUT_[QME_RCMR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_RCMR_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_RCMR_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_RCMR_WO_OR]


//>> SET_[QME_RCMR_STEP_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_STEP_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.insertFromRight<QME_RCMR_STEP_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCMR_STEP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_STEP_ENABLE]

//>> SET_[QME_RCMR_STEP_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_STEP_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.insertFromRight<QME_RCMR_STEP_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCMR_STEP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_STEP_ENABLE]

//>> SET_[QME_RCMR_STEP_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_STEP_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.setBit<QME_RCMR_STEP_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_RCMR_STEP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_STEP_ENABLE]

//>> CLEAR_[QME_RCMR_STEP_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_RCMR_STEP_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.clearBit<QME_RCMR_STEP_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_RCMR_STEP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_RCMR_STEP_ENABLE]

//>> GET_[QME_RCMR_STEP_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_RCMR_STEP_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return i_data.extractToRight<QME_RCMR_STEP_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCMR_STEP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCMR_STEP_ENABLE]

//>> GET_[QME_RCMR_STEP_ENABLE]
static inline bool GET_QME_RCMR_STEP_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return i_data.getBit<QME_RCMR_STEP_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_RCMR_STEP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCMR_STEP_ENABLE]

//>> SET_[QME_RCMR_AUTO_ACK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_AUTO_ACK_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.insertFromRight<QME_RCMR_AUTO_ACK_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCMR_AUTO_ACK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_AUTO_ACK_ENABLE]

//>> SET_[QME_RCMR_AUTO_ACK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_AUTO_ACK_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.insertFromRight<QME_RCMR_AUTO_ACK_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCMR_AUTO_ACK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_AUTO_ACK_ENABLE]

//>> SET_[QME_RCMR_AUTO_ACK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_AUTO_ACK_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.setBit<QME_RCMR_AUTO_ACK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_RCMR_AUTO_ACK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_AUTO_ACK_ENABLE]

//>> CLEAR_[QME_RCMR_AUTO_ACK_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_RCMR_AUTO_ACK_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.clearBit<QME_RCMR_AUTO_ACK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_RCMR_AUTO_ACK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_RCMR_AUTO_ACK_ENABLE]

//>> GET_[QME_RCMR_AUTO_ACK_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_RCMR_AUTO_ACK_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return i_data.extractToRight<QME_RCMR_AUTO_ACK_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCMR_AUTO_ACK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCMR_AUTO_ACK_ENABLE]

//>> GET_[QME_RCMR_AUTO_ACK_ENABLE]
static inline bool GET_QME_RCMR_AUTO_ACK_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return i_data.getBit<QME_RCMR_AUTO_ACK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_RCMR_AUTO_ACK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCMR_AUTO_ACK_ENABLE]

//>> SET_[QME_RCMR_AUTO_TARGET_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_AUTO_TARGET_DISABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.insertFromRight<QME_RCMR_AUTO_TARGET_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCMR_AUTO_TARGET_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_AUTO_TARGET_DISABLE]

//>> SET_[QME_RCMR_AUTO_TARGET_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_AUTO_TARGET_DISABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.insertFromRight<QME_RCMR_AUTO_TARGET_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCMR_AUTO_TARGET_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_AUTO_TARGET_DISABLE]

//>> SET_[QME_RCMR_AUTO_TARGET_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_AUTO_TARGET_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.setBit<QME_RCMR_AUTO_TARGET_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_RCMR_AUTO_TARGET_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_AUTO_TARGET_DISABLE]

//>> CLEAR_[QME_RCMR_AUTO_TARGET_DISABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_RCMR_AUTO_TARGET_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.clearBit<QME_RCMR_AUTO_TARGET_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_RCMR_AUTO_TARGET_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_RCMR_AUTO_TARGET_DISABLE]

//>> GET_[QME_RCMR_AUTO_TARGET_DISABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_RCMR_AUTO_TARGET_DISABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return i_data.extractToRight<QME_RCMR_AUTO_TARGET_DISABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCMR_AUTO_TARGET_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCMR_AUTO_TARGET_DISABLE]

//>> GET_[QME_RCMR_AUTO_TARGET_DISABLE]
static inline bool GET_QME_RCMR_AUTO_TARGET_DISABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return i_data.getBit<QME_RCMR_AUTO_TARGET_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_RCMR_AUTO_TARGET_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCMR_AUTO_TARGET_DISABLE]

//>> SET_[QME_RCMR_AUTO_DONE_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_AUTO_DONE_DISABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.insertFromRight<QME_RCMR_AUTO_DONE_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCMR_AUTO_DONE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_AUTO_DONE_DISABLE]

//>> SET_[QME_RCMR_AUTO_DONE_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_AUTO_DONE_DISABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.insertFromRight<QME_RCMR_AUTO_DONE_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCMR_AUTO_DONE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_AUTO_DONE_DISABLE]

//>> SET_[QME_RCMR_AUTO_DONE_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_AUTO_DONE_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.setBit<QME_RCMR_AUTO_DONE_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_RCMR_AUTO_DONE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_AUTO_DONE_DISABLE]

//>> CLEAR_[QME_RCMR_AUTO_DONE_DISABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_RCMR_AUTO_DONE_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.clearBit<QME_RCMR_AUTO_DONE_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_RCMR_AUTO_DONE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_RCMR_AUTO_DONE_DISABLE]

//>> GET_[QME_RCMR_AUTO_DONE_DISABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_RCMR_AUTO_DONE_DISABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return i_data.extractToRight<QME_RCMR_AUTO_DONE_DISABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCMR_AUTO_DONE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCMR_AUTO_DONE_DISABLE]

//>> GET_[QME_RCMR_AUTO_DONE_DISABLE]
static inline bool GET_QME_RCMR_AUTO_DONE_DISABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return i_data.getBit<QME_RCMR_AUTO_DONE_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_RCMR_AUTO_DONE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCMR_AUTO_DONE_DISABLE]

//>> SET_[QME_RCMR_STEP_DELAY]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_STEP_DELAY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.insertFromRight<QME_RCMR_STEP_DELAY,
           QME_RCMR_STEP_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCMR_STEP_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_STEP_DELAY]

//>> SET_[QME_RCMR_STEP_DELAY]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_STEP_DELAY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.insertFromRight<QME_RCMR_STEP_DELAY,
           QME_RCMR_STEP_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCMR_STEP_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_STEP_DELAY]

//>> GET_[QME_RCMR_STEP_DELAY]
static inline fapi2::buffer<uint64_t>& GET_QME_RCMR_STEP_DELAY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return i_data.extractToRight<QME_RCMR_STEP_DELAY,
           QME_RCMR_STEP_DELAY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCMR_STEP_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCMR_STEP_DELAY]

//>> SET_[QME_RCMR_CORE0_CONTROL_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_CORE0_CONTROL_INDEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.insertFromRight<QME_RCMR_CORE0_CONTROL_INDEX,
           QME_RCMR_CORE0_CONTROL_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCMR_CORE0_CONTROL_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_CORE0_CONTROL_INDEX]

//>> SET_[QME_RCMR_CORE0_CONTROL_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_CORE0_CONTROL_INDEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.insertFromRight<QME_RCMR_CORE0_CONTROL_INDEX,
           QME_RCMR_CORE0_CONTROL_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCMR_CORE0_CONTROL_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_CORE0_CONTROL_INDEX]

//>> GET_[QME_RCMR_CORE0_CONTROL_INDEX]
static inline fapi2::buffer<uint64_t>& GET_QME_RCMR_CORE0_CONTROL_INDEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return i_data.extractToRight<QME_RCMR_CORE0_CONTROL_INDEX,
           QME_RCMR_CORE0_CONTROL_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCMR_CORE0_CONTROL_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCMR_CORE0_CONTROL_INDEX]

//>> SET_[QME_RCMR_CORE1_CONTROL_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_CORE1_CONTROL_INDEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.insertFromRight<QME_RCMR_CORE1_CONTROL_INDEX,
           QME_RCMR_CORE1_CONTROL_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCMR_CORE1_CONTROL_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_CORE1_CONTROL_INDEX]

//>> SET_[QME_RCMR_CORE1_CONTROL_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_CORE1_CONTROL_INDEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.insertFromRight<QME_RCMR_CORE1_CONTROL_INDEX,
           QME_RCMR_CORE1_CONTROL_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCMR_CORE1_CONTROL_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_CORE1_CONTROL_INDEX]

//>> GET_[QME_RCMR_CORE1_CONTROL_INDEX]
static inline fapi2::buffer<uint64_t>& GET_QME_RCMR_CORE1_CONTROL_INDEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return i_data.extractToRight<QME_RCMR_CORE1_CONTROL_INDEX,
           QME_RCMR_CORE1_CONTROL_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCMR_CORE1_CONTROL_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCMR_CORE1_CONTROL_INDEX]

//>> SET_[QME_RCMR_CORE2_CONTROL_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_CORE2_CONTROL_INDEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.insertFromRight<QME_RCMR_CORE2_CONTROL_INDEX,
           QME_RCMR_CORE2_CONTROL_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCMR_CORE2_CONTROL_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_CORE2_CONTROL_INDEX]

//>> SET_[QME_RCMR_CORE2_CONTROL_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_CORE2_CONTROL_INDEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.insertFromRight<QME_RCMR_CORE2_CONTROL_INDEX,
           QME_RCMR_CORE2_CONTROL_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCMR_CORE2_CONTROL_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_CORE2_CONTROL_INDEX]

//>> GET_[QME_RCMR_CORE2_CONTROL_INDEX]
static inline fapi2::buffer<uint64_t>& GET_QME_RCMR_CORE2_CONTROL_INDEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return i_data.extractToRight<QME_RCMR_CORE2_CONTROL_INDEX,
           QME_RCMR_CORE2_CONTROL_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCMR_CORE2_CONTROL_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCMR_CORE2_CONTROL_INDEX]

//>> SET_[QME_RCMR_CORE3_CONTROL_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_CORE3_CONTROL_INDEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.insertFromRight<QME_RCMR_CORE3_CONTROL_INDEX,
           QME_RCMR_CORE3_CONTROL_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCMR_CORE3_CONTROL_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_CORE3_CONTROL_INDEX]

//>> SET_[QME_RCMR_CORE3_CONTROL_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_RCMR_CORE3_CONTROL_INDEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return o_data.insertFromRight<QME_RCMR_CORE3_CONTROL_INDEX,
           QME_RCMR_CORE3_CONTROL_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCMR_CORE3_CONTROL_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCMR_CORE3_CONTROL_INDEX]

//>> GET_[QME_RCMR_CORE3_CONTROL_INDEX]
static inline fapi2::buffer<uint64_t>& GET_QME_RCMR_CORE3_CONTROL_INDEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCMR, QME_RCMR_WO_CLEAR, QME_RCMR_WO_OR));
#endif
    return i_data.extractToRight<QME_RCMR_CORE3_CONTROL_INDEX,
           QME_RCMR_CORE3_CONTROL_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCMR_CORE3_CONTROL_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCMR_CORE3_CONTROL_INDEX]

//>> PREP_[QME_WCOR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_WCOR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_WCOR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_WCOR]

//>> GET_[QME_WCOR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_WCOR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_WCOR;
#endif
    return fapi2::getScom(i_target, QME_WCOR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_WCOR]

//>> PUT_[QME_WCOR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_WCOR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return fapi2::putScom(i_target, QME_WCOR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_WCOR]


//>> SET_[QME_WCOR_0_OVER_THROTTLED]
static inline fapi2::buffer<uint64_t>& SET_QME_WCOR_0_OVER_THROTTLED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.insertFromRight<QME_WCOR_0_OVER_THROTTLED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_WCOR_0_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_WCOR_0_OVER_THROTTLED]

//>> SET_[QME_WCOR_0_OVER_THROTTLED]
static inline fapi2::buffer<uint64_t>& SET_QME_WCOR_0_OVER_THROTTLED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.insertFromRight<QME_WCOR_0_OVER_THROTTLED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_WCOR_0_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_WCOR_0_OVER_THROTTLED]

//>> SET_[QME_WCOR_0_OVER_THROTTLED]
static inline fapi2::buffer<uint64_t>& SET_QME_WCOR_0_OVER_THROTTLED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.setBit<QME_WCOR_0_OVER_THROTTLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_WCOR_0_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_WCOR_0_OVER_THROTTLED]

//>> CLEAR_[QME_WCOR_0_OVER_THROTTLED]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_WCOR_0_OVER_THROTTLED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.clearBit<QME_WCOR_0_OVER_THROTTLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_WCOR_0_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_WCOR_0_OVER_THROTTLED]

//>> GET_[QME_WCOR_0_OVER_THROTTLED]
static inline fapi2::buffer<uint64_t>& GET_QME_WCOR_0_OVER_THROTTLED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return i_data.extractToRight<QME_WCOR_0_OVER_THROTTLED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_WCOR_0_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_WCOR_0_OVER_THROTTLED]

//>> GET_[QME_WCOR_0_OVER_THROTTLED]
static inline bool GET_QME_WCOR_0_OVER_THROTTLED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return i_data.getBit<QME_WCOR_0_OVER_THROTTLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_WCOR_0_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_WCOR_0_OVER_THROTTLED]

//>> SET_[QME_WCOR_0_THROTTLE_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_WCOR_0_THROTTLE_INDEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.insertFromRight<QME_WCOR_0_THROTTLE_INDEX,
           QME_WCOR_0_THROTTLE_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_WCOR_0_THROTTLE_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_WCOR_0_THROTTLE_INDEX]

//>> SET_[QME_WCOR_0_THROTTLE_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_WCOR_0_THROTTLE_INDEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.insertFromRight<QME_WCOR_0_THROTTLE_INDEX,
           QME_WCOR_0_THROTTLE_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_WCOR_0_THROTTLE_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_WCOR_0_THROTTLE_INDEX]

//>> GET_[QME_WCOR_0_THROTTLE_INDEX]
static inline fapi2::buffer<uint64_t>& GET_QME_WCOR_0_THROTTLE_INDEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return i_data.extractToRight<QME_WCOR_0_THROTTLE_INDEX,
           QME_WCOR_0_THROTTLE_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_WCOR_0_THROTTLE_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_WCOR_0_THROTTLE_INDEX]

//>> SET_[QME_WCOR_1_OVER_THROTTLED]
static inline fapi2::buffer<uint64_t>& SET_QME_WCOR_1_OVER_THROTTLED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.insertFromRight<QME_WCOR_1_OVER_THROTTLED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_WCOR_1_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_WCOR_1_OVER_THROTTLED]

//>> SET_[QME_WCOR_1_OVER_THROTTLED]
static inline fapi2::buffer<uint64_t>& SET_QME_WCOR_1_OVER_THROTTLED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.insertFromRight<QME_WCOR_1_OVER_THROTTLED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_WCOR_1_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_WCOR_1_OVER_THROTTLED]

//>> SET_[QME_WCOR_1_OVER_THROTTLED]
static inline fapi2::buffer<uint64_t>& SET_QME_WCOR_1_OVER_THROTTLED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.setBit<QME_WCOR_1_OVER_THROTTLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_WCOR_1_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_WCOR_1_OVER_THROTTLED]

//>> CLEAR_[QME_WCOR_1_OVER_THROTTLED]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_WCOR_1_OVER_THROTTLED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.clearBit<QME_WCOR_1_OVER_THROTTLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_WCOR_1_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_WCOR_1_OVER_THROTTLED]

//>> GET_[QME_WCOR_1_OVER_THROTTLED]
static inline fapi2::buffer<uint64_t>& GET_QME_WCOR_1_OVER_THROTTLED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return i_data.extractToRight<QME_WCOR_1_OVER_THROTTLED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_WCOR_1_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_WCOR_1_OVER_THROTTLED]

//>> GET_[QME_WCOR_1_OVER_THROTTLED]
static inline bool GET_QME_WCOR_1_OVER_THROTTLED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return i_data.getBit<QME_WCOR_1_OVER_THROTTLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_WCOR_1_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_WCOR_1_OVER_THROTTLED]

//>> SET_[QME_WCOR_1_THROTTLE_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_WCOR_1_THROTTLE_INDEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.insertFromRight<QME_WCOR_1_THROTTLE_INDEX,
           QME_WCOR_1_THROTTLE_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_WCOR_1_THROTTLE_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_WCOR_1_THROTTLE_INDEX]

//>> SET_[QME_WCOR_1_THROTTLE_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_WCOR_1_THROTTLE_INDEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.insertFromRight<QME_WCOR_1_THROTTLE_INDEX,
           QME_WCOR_1_THROTTLE_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_WCOR_1_THROTTLE_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_WCOR_1_THROTTLE_INDEX]

//>> GET_[QME_WCOR_1_THROTTLE_INDEX]
static inline fapi2::buffer<uint64_t>& GET_QME_WCOR_1_THROTTLE_INDEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return i_data.extractToRight<QME_WCOR_1_THROTTLE_INDEX,
           QME_WCOR_1_THROTTLE_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_WCOR_1_THROTTLE_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_WCOR_1_THROTTLE_INDEX]

//>> SET_[QME_WCOR_2_OVER_THROTTLED]
static inline fapi2::buffer<uint64_t>& SET_QME_WCOR_2_OVER_THROTTLED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.insertFromRight<QME_WCOR_2_OVER_THROTTLED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_WCOR_2_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_WCOR_2_OVER_THROTTLED]

//>> SET_[QME_WCOR_2_OVER_THROTTLED]
static inline fapi2::buffer<uint64_t>& SET_QME_WCOR_2_OVER_THROTTLED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.insertFromRight<QME_WCOR_2_OVER_THROTTLED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_WCOR_2_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_WCOR_2_OVER_THROTTLED]

//>> SET_[QME_WCOR_2_OVER_THROTTLED]
static inline fapi2::buffer<uint64_t>& SET_QME_WCOR_2_OVER_THROTTLED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.setBit<QME_WCOR_2_OVER_THROTTLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_WCOR_2_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_WCOR_2_OVER_THROTTLED]

//>> CLEAR_[QME_WCOR_2_OVER_THROTTLED]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_WCOR_2_OVER_THROTTLED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.clearBit<QME_WCOR_2_OVER_THROTTLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_WCOR_2_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_WCOR_2_OVER_THROTTLED]

//>> GET_[QME_WCOR_2_OVER_THROTTLED]
static inline fapi2::buffer<uint64_t>& GET_QME_WCOR_2_OVER_THROTTLED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return i_data.extractToRight<QME_WCOR_2_OVER_THROTTLED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_WCOR_2_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_WCOR_2_OVER_THROTTLED]

//>> GET_[QME_WCOR_2_OVER_THROTTLED]
static inline bool GET_QME_WCOR_2_OVER_THROTTLED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return i_data.getBit<QME_WCOR_2_OVER_THROTTLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_WCOR_2_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_WCOR_2_OVER_THROTTLED]

//>> SET_[QME_WCOR_2_THROTTLE_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_WCOR_2_THROTTLE_INDEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.insertFromRight<QME_WCOR_2_THROTTLE_INDEX,
           QME_WCOR_2_THROTTLE_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_WCOR_2_THROTTLE_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_WCOR_2_THROTTLE_INDEX]

//>> SET_[QME_WCOR_2_THROTTLE_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_WCOR_2_THROTTLE_INDEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.insertFromRight<QME_WCOR_2_THROTTLE_INDEX,
           QME_WCOR_2_THROTTLE_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_WCOR_2_THROTTLE_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_WCOR_2_THROTTLE_INDEX]

//>> GET_[QME_WCOR_2_THROTTLE_INDEX]
static inline fapi2::buffer<uint64_t>& GET_QME_WCOR_2_THROTTLE_INDEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return i_data.extractToRight<QME_WCOR_2_THROTTLE_INDEX,
           QME_WCOR_2_THROTTLE_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_WCOR_2_THROTTLE_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_WCOR_2_THROTTLE_INDEX]

//>> SET_[QME_WCOR_3_OVER_THROTTLED]
static inline fapi2::buffer<uint64_t>& SET_QME_WCOR_3_OVER_THROTTLED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.insertFromRight<QME_WCOR_3_OVER_THROTTLED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_WCOR_3_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_WCOR_3_OVER_THROTTLED]

//>> SET_[QME_WCOR_3_OVER_THROTTLED]
static inline fapi2::buffer<uint64_t>& SET_QME_WCOR_3_OVER_THROTTLED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.insertFromRight<QME_WCOR_3_OVER_THROTTLED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_WCOR_3_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_WCOR_3_OVER_THROTTLED]

//>> SET_[QME_WCOR_3_OVER_THROTTLED]
static inline fapi2::buffer<uint64_t>& SET_QME_WCOR_3_OVER_THROTTLED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.setBit<QME_WCOR_3_OVER_THROTTLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_WCOR_3_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_WCOR_3_OVER_THROTTLED]

//>> CLEAR_[QME_WCOR_3_OVER_THROTTLED]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_WCOR_3_OVER_THROTTLED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.clearBit<QME_WCOR_3_OVER_THROTTLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_WCOR_3_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_WCOR_3_OVER_THROTTLED]

//>> GET_[QME_WCOR_3_OVER_THROTTLED]
static inline fapi2::buffer<uint64_t>& GET_QME_WCOR_3_OVER_THROTTLED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return i_data.extractToRight<QME_WCOR_3_OVER_THROTTLED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_WCOR_3_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_WCOR_3_OVER_THROTTLED]

//>> GET_[QME_WCOR_3_OVER_THROTTLED]
static inline bool GET_QME_WCOR_3_OVER_THROTTLED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return i_data.getBit<QME_WCOR_3_OVER_THROTTLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_WCOR_3_OVER_THROTTLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_WCOR_3_OVER_THROTTLED]

//>> SET_[QME_WCOR_3_THROTTLE_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_WCOR_3_THROTTLE_INDEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.insertFromRight<QME_WCOR_3_THROTTLE_INDEX,
           QME_WCOR_3_THROTTLE_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_WCOR_3_THROTTLE_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_WCOR_3_THROTTLE_INDEX]

//>> SET_[QME_WCOR_3_THROTTLE_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_WCOR_3_THROTTLE_INDEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return o_data.insertFromRight<QME_WCOR_3_THROTTLE_INDEX,
           QME_WCOR_3_THROTTLE_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_WCOR_3_THROTTLE_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_WCOR_3_THROTTLE_INDEX]

//>> GET_[QME_WCOR_3_THROTTLE_INDEX]
static inline fapi2::buffer<uint64_t>& GET_QME_WCOR_3_THROTTLE_INDEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_WCOR));
#endif
    return i_data.extractToRight<QME_WCOR_3_THROTTLE_INDEX,
           QME_WCOR_3_THROTTLE_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_WCOR_3_THROTTLE_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_WCOR_3_THROTTLE_INDEX]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
