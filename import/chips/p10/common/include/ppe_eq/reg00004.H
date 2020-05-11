/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_eq/reg00004.H $           */
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

#ifndef __PPE_EQ_REG00004_H_
#define __PPE_EQ_REG00004_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


//>> PREP_[QME_QHB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_QHB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QHB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_QHB]

//>> GET_[QME_QHB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_QHB(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QHB;
#endif
    return fapi2::getScom(i_target, QME_QHB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_QHB]

//>> PUT_[QME_QHB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_QHB(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_QHB));
#endif
    return fapi2::putScom(i_target, QME_QHB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_QHB]


//>> SET_[QME_QHB_HEARTBEAT_COUNT]
static inline fapi2::buffer<uint64_t>& SET_QME_QHB_HEARTBEAT_COUNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHB));
#endif
    return o_data.insertFromRight<QME_QHB_HEARTBEAT_COUNT,
           QME_QHB_HEARTBEAT_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QHB_HEARTBEAT_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHB_HEARTBEAT_COUNT]

//>> SET_[QME_QHB_HEARTBEAT_COUNT]
static inline fapi2::buffer<uint64_t>& SET_QME_QHB_HEARTBEAT_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHB));
#endif
    return o_data.insertFromRight<QME_QHB_HEARTBEAT_COUNT,
           QME_QHB_HEARTBEAT_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QHB_HEARTBEAT_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHB_HEARTBEAT_COUNT]

//>> GET_[QME_QHB_HEARTBEAT_COUNT]
static inline fapi2::buffer<uint64_t>& GET_QME_QHB_HEARTBEAT_COUNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHB));
#endif
    return i_data.extractToRight<QME_QHB_HEARTBEAT_COUNT,
           QME_QHB_HEARTBEAT_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QHB_HEARTBEAT_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QHB_HEARTBEAT_COUNT]

//>> SET_[QME_QHB_HEARTBEAT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QHB_HEARTBEAT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHB));
#endif
    return o_data.insertFromRight<QME_QHB_HEARTBEAT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QHB_HEARTBEAT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHB_HEARTBEAT_ENABLE]

//>> SET_[QME_QHB_HEARTBEAT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QHB_HEARTBEAT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHB));
#endif
    return o_data.insertFromRight<QME_QHB_HEARTBEAT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QHB_HEARTBEAT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHB_HEARTBEAT_ENABLE]

//>> SET_[QME_QHB_HEARTBEAT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QHB_HEARTBEAT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHB));
#endif
    return o_data.setBit<QME_QHB_HEARTBEAT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QHB_HEARTBEAT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHB_HEARTBEAT_ENABLE]

//>> CLEAR_[QME_QHB_HEARTBEAT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QHB_HEARTBEAT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHB));
#endif
    return o_data.clearBit<QME_QHB_HEARTBEAT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QHB_HEARTBEAT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QHB_HEARTBEAT_ENABLE]

//>> GET_[QME_QHB_HEARTBEAT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_QHB_HEARTBEAT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHB));
#endif
    return i_data.extractToRight<QME_QHB_HEARTBEAT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QHB_HEARTBEAT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QHB_HEARTBEAT_ENABLE]

//>> GET_[QME_QHB_HEARTBEAT_ENABLE]
static inline bool GET_QME_QHB_HEARTBEAT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHB));
#endif
    return i_data.getBit<QME_QHB_HEARTBEAT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QHB_HEARTBEAT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QHB_HEARTBEAT_ENABLE]

//>> SET_[QME_QHB_SPARE]
static inline fapi2::buffer<uint64_t>& SET_QME_QHB_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHB));
#endif
    return o_data.insertFromRight<QME_QHB_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QHB_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHB_SPARE]

//>> SET_[QME_QHB_SPARE]
static inline fapi2::buffer<uint64_t>& SET_QME_QHB_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHB));
#endif
    return o_data.insertFromRight<QME_QHB_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QHB_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHB_SPARE]

//>> SET_[QME_QHB_SPARE]
static inline fapi2::buffer<uint64_t>& SET_QME_QHB_SPARE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHB));
#endif
    return o_data.setBit<QME_QHB_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QHB_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHB_SPARE]

//>> CLEAR_[QME_QHB_SPARE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QHB_SPARE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHB));
#endif
    return o_data.clearBit<QME_QHB_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QHB_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QHB_SPARE]

//>> GET_[QME_QHB_SPARE]
static inline fapi2::buffer<uint64_t>& GET_QME_QHB_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHB));
#endif
    return i_data.extractToRight<QME_QHB_SPARE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QHB_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QHB_SPARE]

//>> GET_[QME_QHB_SPARE]
static inline bool GET_QME_QHB_SPARE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHB));
#endif
    return i_data.getBit<QME_QHB_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QHB_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QHB_SPARE]

//>> PREP_[QME_EISTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_EISTR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EISTR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_EISTR]

//>> GET_[QME_EISTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_EISTR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EISTR;
#endif
    return fapi2::getScom(i_target, QME_EISTR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_EISTR]

//>> PUT_[QME_EISTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_EISTR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_EISTR));
#endif
    return fapi2::putScom(i_target, QME_EISTR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_EISTR]


//>> SET_[QME_EISTR_INTERRUPT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_QME_EISTR_INTERRUPT_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISTR));
#endif
    return o_data.insertFromRight<QME_EISTR_INTERRUPT_STATUS,
           QME_EISTR_INTERRUPT_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISTR_INTERRUPT_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISTR_INTERRUPT_STATUS]

//>> SET_[QME_EISTR_INTERRUPT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_QME_EISTR_INTERRUPT_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISTR));
#endif
    return o_data.insertFromRight<QME_EISTR_INTERRUPT_STATUS,
           QME_EISTR_INTERRUPT_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISTR_INTERRUPT_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISTR_INTERRUPT_STATUS]

//>> GET_[QME_EISTR_INTERRUPT_STATUS]
static inline fapi2::buffer<uint64_t>& GET_QME_EISTR_INTERRUPT_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISTR));
#endif
    return i_data.extractToRight<QME_EISTR_INTERRUPT_STATUS,
           QME_EISTR_INTERRUPT_STATUS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISTR_INTERRUPT_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISTR_INTERRUPT_STATUS]

//>> PREP_[QME_LFIRACT0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_LFIRACT0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIRACT0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_LFIRACT0]

//>> GET_[QME_LFIRACT0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_LFIRACT0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIRACT0;
#endif
    return fapi2::getScom(i_target, QME_LFIRACT0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_LFIRACT0]

//>> PUT_[QME_LFIRACT0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_LFIRACT0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_LFIRACT0));
#endif
    return fapi2::putScom(i_target, QME_LFIRACT0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_LFIRACT0]


//>> SET_[QME_LFIRACT0_FIR_ACTION0]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIRACT0_FIR_ACTION0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIRACT0));
#endif
    return o_data.insertFromRight<QME_LFIRACT0_FIR_ACTION0,
           QME_LFIRACT0_FIR_ACTION0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIRACT0_FIR_ACTION0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIRACT0_FIR_ACTION0]

//>> SET_[QME_LFIRACT0_FIR_ACTION0]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIRACT0_FIR_ACTION0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIRACT0));
#endif
    return o_data.insertFromRight<QME_LFIRACT0_FIR_ACTION0,
           QME_LFIRACT0_FIR_ACTION0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIRACT0_FIR_ACTION0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIRACT0_FIR_ACTION0]

//>> GET_[QME_LFIRACT0_FIR_ACTION0]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIRACT0_FIR_ACTION0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIRACT0));
#endif
    return i_data.extractToRight<QME_LFIRACT0_FIR_ACTION0,
           QME_LFIRACT0_FIR_ACTION0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIRACT0_FIR_ACTION0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIRACT0_FIR_ACTION0]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
