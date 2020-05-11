/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_eq/reg00013_unused.H $    */
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

#ifndef __PPE_EQ_REG00013_H_UNUSED__
#define __PPE_EQ_REG00013_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


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

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
