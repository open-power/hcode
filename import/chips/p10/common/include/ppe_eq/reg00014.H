/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_eq/reg00014.H $           */
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

#ifndef __PPE_EQ_REG00014_H_
#define __PPE_EQ_REG00014_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


//>> PREP_[QME_CRCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_CRCR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_CRCR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_CRCR]

//>> GET_[QME_CRCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_CRCR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_CRCR;
#endif
    return fapi2::getScom(i_target, QME_CRCR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_CRCR]

//>> PUT_[QME_CRCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_CRCR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_CRCR));
#endif
    return fapi2::putScom(i_target, QME_CRCR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_CRCR]


//>> SET_[QME_CRCR_COMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_QME_CRCR_COMPARE_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_CRCR));
#endif
    return o_data.insertFromRight<QME_CRCR_COMPARE_VALUE,
           QME_CRCR_COMPARE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_CRCR_COMPARE_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CRCR_COMPARE_VALUE]

//>> SET_[QME_CRCR_COMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_QME_CRCR_COMPARE_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_CRCR));
#endif
    return o_data.insertFromRight<QME_CRCR_COMPARE_VALUE,
           QME_CRCR_COMPARE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_CRCR_COMPARE_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CRCR_COMPARE_VALUE]

//>> GET_[QME_CRCR_COMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& GET_QME_CRCR_COMPARE_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_CRCR));
#endif
    return i_data.extractToRight<QME_CRCR_COMPARE_VALUE,
           QME_CRCR_COMPARE_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_CRCR_COMPARE_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CRCR_COMPARE_VALUE]

//>> SET_[P10_20_QME_CRCR_OMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_CRCR_OMPARE_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_CRCR));
#endif
    return o_data.insertFromRight<P10_20_QME_CRCR_OMPARE_VALUE,
           P10_20_QME_CRCR_OMPARE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access P10_20_QME_CRCR_OMPARE_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_CRCR_OMPARE_VALUE]

//>> SET_[P10_20_QME_CRCR_OMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_CRCR_OMPARE_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_CRCR));
#endif
    return o_data.insertFromRight<P10_20_QME_CRCR_OMPARE_VALUE,
           P10_20_QME_CRCR_OMPARE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access P10_20_QME_CRCR_OMPARE_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_CRCR_OMPARE_VALUE]

//>> GET_[P10_20_QME_CRCR_OMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& GET_P10_20_QME_CRCR_OMPARE_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_CRCR));
#endif
    return i_data.extractToRight<P10_20_QME_CRCR_OMPARE_VALUE,
           P10_20_QME_CRCR_OMPARE_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access P10_20_QME_CRCR_OMPARE_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_CRCR_OMPARE_VALUE]

//>> SET_[P10_20_QME_CRCR_R_TOGGLE_STEP]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_CRCR_R_TOGGLE_STEP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_CRCR));
#endif
    return o_data.insertFromRight<P10_20_QME_CRCR_R_TOGGLE_STEP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access P10_20_QME_CRCR_R_TOGGLE_STEP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_CRCR_R_TOGGLE_STEP]

//>> SET_[P10_20_QME_CRCR_R_TOGGLE_STEP]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_CRCR_R_TOGGLE_STEP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_CRCR));
#endif
    return o_data.insertFromRight<P10_20_QME_CRCR_R_TOGGLE_STEP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access P10_20_QME_CRCR_R_TOGGLE_STEP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_CRCR_R_TOGGLE_STEP]

//>> SET_[P10_20_QME_CRCR_R_TOGGLE_STEP]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_CRCR_R_TOGGLE_STEP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_CRCR));
#endif
    return o_data.setBit<P10_20_QME_CRCR_R_TOGGLE_STEP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access P10_20_QME_CRCR_R_TOGGLE_STEP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_CRCR_R_TOGGLE_STEP]

//>> CLEAR_[P10_20_QME_CRCR_R_TOGGLE_STEP]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_QME_CRCR_R_TOGGLE_STEP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_CRCR));
#endif
    return o_data.clearBit<P10_20_QME_CRCR_R_TOGGLE_STEP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access P10_20_QME_CRCR_R_TOGGLE_STEP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_QME_CRCR_R_TOGGLE_STEP]

//>> GET_[P10_20_QME_CRCR_R_TOGGLE_STEP]
static inline fapi2::buffer<uint64_t>& GET_P10_20_QME_CRCR_R_TOGGLE_STEP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_CRCR));
#endif
    return i_data.extractToRight<P10_20_QME_CRCR_R_TOGGLE_STEP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access P10_20_QME_CRCR_R_TOGGLE_STEP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_CRCR_R_TOGGLE_STEP]

//>> GET_[P10_20_QME_CRCR_R_TOGGLE_STEP]
static inline bool GET_P10_20_QME_CRCR_R_TOGGLE_STEP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_CRCR));
#endif
    return i_data.getBit<P10_20_QME_CRCR_R_TOGGLE_STEP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access P10_20_QME_CRCR_R_TOGGLE_STEP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_CRCR_R_TOGGLE_STEP]

//>> SET_[P10_20_QME_CRCR_R_TOGGLE_SYNC]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_CRCR_R_TOGGLE_SYNC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_CRCR));
#endif
    return o_data.insertFromRight<P10_20_QME_CRCR_R_TOGGLE_SYNC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access P10_20_QME_CRCR_R_TOGGLE_SYNC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_CRCR_R_TOGGLE_SYNC]

//>> SET_[P10_20_QME_CRCR_R_TOGGLE_SYNC]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_CRCR_R_TOGGLE_SYNC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_CRCR));
#endif
    return o_data.insertFromRight<P10_20_QME_CRCR_R_TOGGLE_SYNC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access P10_20_QME_CRCR_R_TOGGLE_SYNC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_CRCR_R_TOGGLE_SYNC]

//>> SET_[P10_20_QME_CRCR_R_TOGGLE_SYNC]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_CRCR_R_TOGGLE_SYNC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_CRCR));
#endif
    return o_data.setBit<P10_20_QME_CRCR_R_TOGGLE_SYNC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access P10_20_QME_CRCR_R_TOGGLE_SYNC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_CRCR_R_TOGGLE_SYNC]

//>> CLEAR_[P10_20_QME_CRCR_R_TOGGLE_SYNC]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_QME_CRCR_R_TOGGLE_SYNC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_CRCR));
#endif
    return o_data.clearBit<P10_20_QME_CRCR_R_TOGGLE_SYNC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access P10_20_QME_CRCR_R_TOGGLE_SYNC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_QME_CRCR_R_TOGGLE_SYNC]

//>> GET_[P10_20_QME_CRCR_R_TOGGLE_SYNC]
static inline fapi2::buffer<uint64_t>& GET_P10_20_QME_CRCR_R_TOGGLE_SYNC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_CRCR));
#endif
    return i_data.extractToRight<P10_20_QME_CRCR_R_TOGGLE_SYNC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access P10_20_QME_CRCR_R_TOGGLE_SYNC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_CRCR_R_TOGGLE_SYNC]

//>> GET_[P10_20_QME_CRCR_R_TOGGLE_SYNC]
static inline bool GET_P10_20_QME_CRCR_R_TOGGLE_SYNC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_CRCR));
#endif
    return i_data.getBit<P10_20_QME_CRCR_R_TOGGLE_SYNC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access P10_20_QME_CRCR_R_TOGGLE_SYNC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_CRCR_R_TOGGLE_SYNC]

//>> PREP_[QME_DERP]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_DERP(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_DERP;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_DERP]

//>> GET_[QME_DERP]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_DERP(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_DERP;
#endif
    return fapi2::getScom(i_target, QME_DERP, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_DERP]

//>> PUT_[QME_DERP]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_DERP(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_DERP));
#endif
    return fapi2::putScom(i_target, QME_DERP, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_DERP]


//>> SET_[QME_DERP_DEND]
static inline fapi2::buffer<uint64_t>& SET_QME_DERP_DEND(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DERP));
#endif
    return o_data.insertFromRight<QME_DERP_DEND,
           QME_DERP_DEND_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_DERP_DEND chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DERP_DEND]

//>> SET_[QME_DERP_DEND]
static inline fapi2::buffer<uint64_t>& SET_QME_DERP_DEND(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DERP));
#endif
    return o_data.insertFromRight<QME_DERP_DEND,
           QME_DERP_DEND_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_DERP_DEND chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DERP_DEND]

//>> GET_[QME_DERP_DEND]
static inline fapi2::buffer<uint64_t>& GET_QME_DERP_DEND(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DERP));
#endif
    return i_data.extractToRight<QME_DERP_DEND,
           QME_DERP_DEND_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_DERP_DEND chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DERP_DEND]

//>> SET_[QME_DERP_SOR]
static inline fapi2::buffer<uint64_t>& SET_QME_DERP_SOR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DERP));
#endif
    return o_data.insertFromRight<QME_DERP_SOR,
           QME_DERP_SOR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_DERP_SOR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DERP_SOR]

//>> SET_[QME_DERP_SOR]
static inline fapi2::buffer<uint64_t>& SET_QME_DERP_SOR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DERP));
#endif
    return o_data.insertFromRight<QME_DERP_SOR,
           QME_DERP_SOR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_DERP_SOR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DERP_SOR]

//>> GET_[QME_DERP_SOR]
static inline fapi2::buffer<uint64_t>& GET_QME_DERP_SOR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DERP));
#endif
    return i_data.extractToRight<QME_DERP_SOR,
           QME_DERP_SOR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_DERP_SOR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DERP_SOR]

//>> PREP_[QME_EINR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_EINR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EINR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_EINR]

//>> GET_[QME_EINR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_EINR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EINR;
#endif
    return fapi2::getScom(i_target, QME_EINR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_EINR]

//>> PUT_[QME_EINR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_EINR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_EINR));
#endif
    return fapi2::putScom(i_target, QME_EINR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_EINR]


//>> SET_[QME_EINR_INTERRUPT_INPUT]
static inline fapi2::buffer<uint64_t>& SET_QME_EINR_INTERRUPT_INPUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EINR));
#endif
    return o_data.insertFromRight<QME_EINR_INTERRUPT_INPUT,
           QME_EINR_INTERRUPT_INPUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EINR_INTERRUPT_INPUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EINR_INTERRUPT_INPUT]

//>> SET_[QME_EINR_INTERRUPT_INPUT]
static inline fapi2::buffer<uint64_t>& SET_QME_EINR_INTERRUPT_INPUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EINR));
#endif
    return o_data.insertFromRight<QME_EINR_INTERRUPT_INPUT,
           QME_EINR_INTERRUPT_INPUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EINR_INTERRUPT_INPUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EINR_INTERRUPT_INPUT]

//>> GET_[QME_EINR_INTERRUPT_INPUT]
static inline fapi2::buffer<uint64_t>& GET_QME_EINR_INTERRUPT_INPUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EINR));
#endif
    return i_data.extractToRight<QME_EINR_INTERRUPT_INPUT,
           QME_EINR_INTERRUPT_INPUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EINR_INTERRUPT_INPUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EINR_INTERRUPT_INPUT]

//>> PREP_[QME_LFIR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_LFIR_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIR_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_LFIR_RW]

//>> GET_[QME_LFIR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_LFIR_RW(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIR_RW;
#endif
    return fapi2::getScom(i_target, QME_LFIR_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_LFIR_RW]

//>> PUT_[QME_LFIR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_LFIR_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_LFIR_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_LFIR_RW]

//>> PREP_[QME_LFIR_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_LFIR_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIR_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_LFIR_WO_AND]

//>> GET_[QME_LFIR_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_LFIR_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIR_WO_AND;
#endif
    return fapi2::getScom(i_target, QME_LFIR_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_LFIR_WO_AND]

//>> PUT_[QME_LFIR_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_LFIR_WO_AND(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_LFIR_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_LFIR_WO_AND]

//>> PREP_[QME_LFIR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_LFIR_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIR_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_LFIR_WO_OR]

//>> GET_[QME_LFIR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_LFIR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIR_WO_OR;
#endif
    return fapi2::getScom(i_target, QME_LFIR_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_LFIR_WO_OR]

//>> PUT_[QME_LFIR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_LFIR_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_LFIR_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_LFIR_WO_OR]


//>> SET_[QME_LFIR_PPE_HALT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PPE_HALT_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PPE_HALT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_PPE_HALT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PPE_HALT_ERROR]

//>> SET_[QME_LFIR_PPE_HALT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PPE_HALT_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PPE_HALT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_PPE_HALT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PPE_HALT_ERROR]

//>> SET_[QME_LFIR_PPE_HALT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PPE_HALT_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_PPE_HALT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_PPE_HALT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PPE_HALT_ERROR]

//>> CLEAR_[QME_LFIR_PPE_HALT_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_PPE_HALT_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_PPE_HALT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_PPE_HALT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_PPE_HALT_ERROR]

//>> GET_[QME_LFIR_PPE_HALT_ERROR]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_PPE_HALT_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_PPE_HALT_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_PPE_HALT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PPE_HALT_ERROR]

//>> GET_[QME_LFIR_PPE_HALT_ERROR]
static inline bool GET_QME_LFIR_PPE_HALT_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_PPE_HALT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_PPE_HALT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PPE_HALT_ERROR]

//>> SET_[QME_LFIR_DEBUG_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_DEBUG_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_DEBUG_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_DEBUG_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_DEBUG_TRIGGER]

//>> SET_[QME_LFIR_DEBUG_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_DEBUG_TRIGGER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_DEBUG_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_DEBUG_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_DEBUG_TRIGGER]

//>> SET_[QME_LFIR_DEBUG_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_DEBUG_TRIGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_DEBUG_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_DEBUG_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_DEBUG_TRIGGER]

//>> CLEAR_[QME_LFIR_DEBUG_TRIGGER]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_DEBUG_TRIGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_DEBUG_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_DEBUG_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_DEBUG_TRIGGER]

//>> GET_[QME_LFIR_DEBUG_TRIGGER]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_DEBUG_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_DEBUG_TRIGGER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_DEBUG_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_DEBUG_TRIGGER]

//>> GET_[QME_LFIR_DEBUG_TRIGGER]
static inline bool GET_QME_LFIR_DEBUG_TRIGGER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_DEBUG_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_DEBUG_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_DEBUG_TRIGGER]

//>> SET_[QME_LFIR_SPARE_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_SPARE_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_SPARE_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_SPARE_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_SPARE_TRIGGER]

//>> SET_[QME_LFIR_SPARE_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_SPARE_TRIGGER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_SPARE_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_SPARE_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_SPARE_TRIGGER]

//>> SET_[QME_LFIR_SPARE_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_SPARE_TRIGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_SPARE_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_SPARE_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_SPARE_TRIGGER]

//>> CLEAR_[QME_LFIR_SPARE_TRIGGER]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_SPARE_TRIGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_SPARE_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_SPARE_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_SPARE_TRIGGER]

//>> GET_[QME_LFIR_SPARE_TRIGGER]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_SPARE_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_SPARE_TRIGGER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_SPARE_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_SPARE_TRIGGER]

//>> GET_[QME_LFIR_SPARE_TRIGGER]
static inline bool GET_QME_LFIR_SPARE_TRIGGER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_SPARE_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_SPARE_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_SPARE_TRIGGER]

//>> SET_[QME_LFIR_PPE_WATCHDOG]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PPE_WATCHDOG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PPE_WATCHDOG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_PPE_WATCHDOG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PPE_WATCHDOG]

//>> SET_[QME_LFIR_PPE_WATCHDOG]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PPE_WATCHDOG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PPE_WATCHDOG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_PPE_WATCHDOG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PPE_WATCHDOG]

//>> SET_[QME_LFIR_PPE_WATCHDOG]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PPE_WATCHDOG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_PPE_WATCHDOG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_PPE_WATCHDOG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PPE_WATCHDOG]

//>> CLEAR_[QME_LFIR_PPE_WATCHDOG]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_PPE_WATCHDOG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_PPE_WATCHDOG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_PPE_WATCHDOG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_PPE_WATCHDOG]

//>> GET_[QME_LFIR_PPE_WATCHDOG]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_PPE_WATCHDOG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_PPE_WATCHDOG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_PPE_WATCHDOG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PPE_WATCHDOG]

//>> GET_[QME_LFIR_PPE_WATCHDOG]
static inline bool GET_QME_LFIR_PPE_WATCHDOG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_PPE_WATCHDOG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_PPE_WATCHDOG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PPE_WATCHDOG]

//>> SET_[QME_LFIR_LOCAL_PCB_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_LOCAL_PCB_TIMEOUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_LOCAL_PCB_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_LOCAL_PCB_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_LOCAL_PCB_TIMEOUT]

//>> SET_[QME_LFIR_LOCAL_PCB_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_LOCAL_PCB_TIMEOUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_LOCAL_PCB_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_LOCAL_PCB_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_LOCAL_PCB_TIMEOUT]

//>> SET_[QME_LFIR_LOCAL_PCB_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_LOCAL_PCB_TIMEOUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_LOCAL_PCB_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_LOCAL_PCB_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_LOCAL_PCB_TIMEOUT]

//>> CLEAR_[QME_LFIR_LOCAL_PCB_TIMEOUT]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_LOCAL_PCB_TIMEOUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_LOCAL_PCB_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_LOCAL_PCB_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_LOCAL_PCB_TIMEOUT]

//>> GET_[QME_LFIR_LOCAL_PCB_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_LOCAL_PCB_TIMEOUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_LOCAL_PCB_TIMEOUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_LOCAL_PCB_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_LOCAL_PCB_TIMEOUT]

//>> GET_[QME_LFIR_LOCAL_PCB_TIMEOUT]
static inline bool GET_QME_LFIR_LOCAL_PCB_TIMEOUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_LOCAL_PCB_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_LOCAL_PCB_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_LOCAL_PCB_TIMEOUT]

//>> SET_[QME_LFIR_FABRIC_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_FABRIC_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_FABRIC_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_FABRIC_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_FABRIC_ERROR]

//>> SET_[QME_LFIR_FABRIC_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_FABRIC_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_FABRIC_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_FABRIC_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_FABRIC_ERROR]

//>> SET_[QME_LFIR_FABRIC_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_FABRIC_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_FABRIC_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_FABRIC_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_FABRIC_ERROR]

//>> CLEAR_[QME_LFIR_FABRIC_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_FABRIC_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_FABRIC_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_FABRIC_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_FABRIC_ERROR]

//>> GET_[QME_LFIR_FABRIC_ERROR]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_FABRIC_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_FABRIC_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_FABRIC_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_FABRIC_ERROR]

//>> GET_[QME_LFIR_FABRIC_ERROR]
static inline bool GET_QME_LFIR_FABRIC_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_FABRIC_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_FABRIC_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_FABRIC_ERROR]

//>> SET_[QME_LFIR_SRAM_UE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_SRAM_UE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_SRAM_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_SRAM_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_SRAM_UE]

//>> SET_[QME_LFIR_SRAM_UE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_SRAM_UE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_SRAM_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_SRAM_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_SRAM_UE]

//>> SET_[QME_LFIR_SRAM_UE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_SRAM_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_SRAM_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_SRAM_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_SRAM_UE]

//>> CLEAR_[QME_LFIR_SRAM_UE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_SRAM_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_SRAM_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_SRAM_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_SRAM_UE]

//>> GET_[QME_LFIR_SRAM_UE]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_SRAM_UE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_SRAM_UE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_SRAM_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_SRAM_UE]

//>> GET_[QME_LFIR_SRAM_UE]
static inline bool GET_QME_LFIR_SRAM_UE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_SRAM_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_SRAM_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_SRAM_UE]

//>> SET_[QME_LFIR_SRAM_CE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_SRAM_CE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_SRAM_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_SRAM_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_SRAM_CE]

//>> SET_[QME_LFIR_SRAM_CE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_SRAM_CE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_SRAM_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_SRAM_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_SRAM_CE]

//>> SET_[QME_LFIR_SRAM_CE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_SRAM_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_SRAM_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_SRAM_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_SRAM_CE]

//>> CLEAR_[QME_LFIR_SRAM_CE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_SRAM_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_SRAM_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_SRAM_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_SRAM_CE]

//>> GET_[QME_LFIR_SRAM_CE]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_SRAM_CE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_SRAM_CE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_SRAM_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_SRAM_CE]

//>> GET_[QME_LFIR_SRAM_CE]
static inline bool GET_QME_LFIR_SRAM_CE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_SRAM_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_SRAM_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_SRAM_CE]

//>> SET_[QME_LFIR_RESCLK_ARRAY_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_RESCLK_ARRAY_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_RESCLK_ARRAY_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_RESCLK_ARRAY_PARITY_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_RESCLK_ARRAY_PARITY_ERR]

//>> SET_[QME_LFIR_RESCLK_ARRAY_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_RESCLK_ARRAY_PARITY_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_RESCLK_ARRAY_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_RESCLK_ARRAY_PARITY_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_RESCLK_ARRAY_PARITY_ERR]

//>> SET_[QME_LFIR_RESCLK_ARRAY_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_RESCLK_ARRAY_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_RESCLK_ARRAY_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_RESCLK_ARRAY_PARITY_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_RESCLK_ARRAY_PARITY_ERR]

//>> CLEAR_[QME_LFIR_RESCLK_ARRAY_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_RESCLK_ARRAY_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_RESCLK_ARRAY_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_RESCLK_ARRAY_PARITY_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_RESCLK_ARRAY_PARITY_ERR]

//>> GET_[QME_LFIR_RESCLK_ARRAY_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_RESCLK_ARRAY_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_RESCLK_ARRAY_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_RESCLK_ARRAY_PARITY_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_RESCLK_ARRAY_PARITY_ERR]

//>> GET_[QME_LFIR_RESCLK_ARRAY_PARITY_ERR]
static inline bool GET_QME_LFIR_RESCLK_ARRAY_PARITY_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_RESCLK_ARRAY_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_RESCLK_ARRAY_PARITY_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_RESCLK_ARRAY_PARITY_ERR]

//>> SET_[QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR]

//>> SET_[QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR]

//>> SET_[QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR]

//>> CLEAR_[QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR]

//>> GET_[QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR]

//>> GET_[QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR]
static inline bool GET_QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PCB_INTERRUPT_PROTOCOL_ERR]

//>> SET_[QME_LFIR_SRAM_SCRUB_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_SRAM_SCRUB_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_SRAM_SCRUB_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_SRAM_SCRUB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_SRAM_SCRUB_ERR]

//>> SET_[QME_LFIR_SRAM_SCRUB_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_SRAM_SCRUB_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_SRAM_SCRUB_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_SRAM_SCRUB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_SRAM_SCRUB_ERR]

//>> SET_[QME_LFIR_SRAM_SCRUB_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_SRAM_SCRUB_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_SRAM_SCRUB_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_SRAM_SCRUB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_SRAM_SCRUB_ERR]

//>> CLEAR_[QME_LFIR_SRAM_SCRUB_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_SRAM_SCRUB_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_SRAM_SCRUB_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_SRAM_SCRUB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_SRAM_SCRUB_ERR]

//>> GET_[QME_LFIR_SRAM_SCRUB_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_SRAM_SCRUB_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_SRAM_SCRUB_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_SRAM_SCRUB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_SRAM_SCRUB_ERR]

//>> GET_[QME_LFIR_SRAM_SCRUB_ERR]
static inline bool GET_QME_LFIR_SRAM_SCRUB_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_SRAM_SCRUB_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_SRAM_SCRUB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_SRAM_SCRUB_ERR]

//>> SET_[QME_LFIR_CTFS_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_CTFS_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_CTFS_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_CTFS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_CTFS_ERR]

//>> SET_[QME_LFIR_CTFS_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_CTFS_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_CTFS_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_CTFS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_CTFS_ERR]

//>> SET_[QME_LFIR_CTFS_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_CTFS_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_CTFS_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_CTFS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_CTFS_ERR]

//>> CLEAR_[QME_LFIR_CTFS_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_CTFS_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_CTFS_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_CTFS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_CTFS_ERR]

//>> GET_[QME_LFIR_CTFS_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_CTFS_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_CTFS_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_CTFS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_CTFS_ERR]

//>> GET_[QME_LFIR_CTFS_ERR]
static inline bool GET_QME_LFIR_CTFS_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_CTFS_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_CTFS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_CTFS_ERR]

//>> SET_[QME_LFIR_CPMS_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_CPMS_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_CPMS_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_CPMS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_CPMS_ERR]

//>> SET_[QME_LFIR_CPMS_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_CPMS_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_CPMS_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_CPMS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_CPMS_ERR]

//>> SET_[QME_LFIR_CPMS_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_CPMS_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_CPMS_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_CPMS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_CPMS_ERR]

//>> CLEAR_[QME_LFIR_CPMS_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_CPMS_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_CPMS_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_CPMS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_CPMS_ERR]

//>> GET_[QME_LFIR_CPMS_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_CPMS_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_CPMS_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_CPMS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_CPMS_ERR]

//>> GET_[QME_LFIR_CPMS_ERR]
static inline bool GET_QME_LFIR_CPMS_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_CPMS_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_CPMS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_CPMS_ERR]

//>> SET_[QME_LFIR_PGPE_HEARTBEAT_LOST]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PGPE_HEARTBEAT_LOST(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PGPE_HEARTBEAT_LOST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_PGPE_HEARTBEAT_LOST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PGPE_HEARTBEAT_LOST]

//>> SET_[QME_LFIR_PGPE_HEARTBEAT_LOST]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PGPE_HEARTBEAT_LOST(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PGPE_HEARTBEAT_LOST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_PGPE_HEARTBEAT_LOST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PGPE_HEARTBEAT_LOST]

//>> SET_[QME_LFIR_PGPE_HEARTBEAT_LOST]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PGPE_HEARTBEAT_LOST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_PGPE_HEARTBEAT_LOST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_PGPE_HEARTBEAT_LOST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PGPE_HEARTBEAT_LOST]

//>> CLEAR_[QME_LFIR_PGPE_HEARTBEAT_LOST]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_PGPE_HEARTBEAT_LOST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_PGPE_HEARTBEAT_LOST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_PGPE_HEARTBEAT_LOST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_PGPE_HEARTBEAT_LOST]

//>> GET_[QME_LFIR_PGPE_HEARTBEAT_LOST]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_PGPE_HEARTBEAT_LOST(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_PGPE_HEARTBEAT_LOST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_PGPE_HEARTBEAT_LOST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PGPE_HEARTBEAT_LOST]

//>> GET_[QME_LFIR_PGPE_HEARTBEAT_LOST]
static inline bool GET_QME_LFIR_PGPE_HEARTBEAT_LOST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_PGPE_HEARTBEAT_LOST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_PGPE_HEARTBEAT_LOST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PGPE_HEARTBEAT_LOST]

//>> SET_[QME_LFIR_BCE_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_BCE_TIMEOUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_BCE_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_BCE_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_BCE_TIMEOUT]

//>> SET_[QME_LFIR_BCE_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_BCE_TIMEOUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_BCE_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_BCE_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_BCE_TIMEOUT]

//>> SET_[QME_LFIR_BCE_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_BCE_TIMEOUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_BCE_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_BCE_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_BCE_TIMEOUT]

//>> CLEAR_[QME_LFIR_BCE_TIMEOUT]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_BCE_TIMEOUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_BCE_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_BCE_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_BCE_TIMEOUT]

//>> GET_[QME_LFIR_BCE_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_BCE_TIMEOUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_BCE_TIMEOUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_BCE_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_BCE_TIMEOUT]

//>> GET_[QME_LFIR_BCE_TIMEOUT]
static inline bool GET_QME_LFIR_BCE_TIMEOUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_BCE_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_BCE_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_BCE_TIMEOUT]

//>> SET_[QME_LFIR_RESCLK_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_RESCLK_PROTOCOL_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_RESCLK_PROTOCOL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_RESCLK_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_RESCLK_PROTOCOL_ERR]

//>> SET_[QME_LFIR_RESCLK_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_RESCLK_PROTOCOL_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_RESCLK_PROTOCOL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_RESCLK_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_RESCLK_PROTOCOL_ERR]

//>> SET_[QME_LFIR_RESCLK_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_RESCLK_PROTOCOL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_RESCLK_PROTOCOL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_RESCLK_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_RESCLK_PROTOCOL_ERR]

//>> CLEAR_[QME_LFIR_RESCLK_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_RESCLK_PROTOCOL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_RESCLK_PROTOCOL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_RESCLK_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_RESCLK_PROTOCOL_ERR]

//>> GET_[QME_LFIR_RESCLK_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_RESCLK_PROTOCOL_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_RESCLK_PROTOCOL_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_RESCLK_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_RESCLK_PROTOCOL_ERR]

//>> GET_[QME_LFIR_RESCLK_PROTOCOL_ERR]
static inline bool GET_QME_LFIR_RESCLK_PROTOCOL_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_RESCLK_PROTOCOL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_RESCLK_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_RESCLK_PROTOCOL_ERR]

//>> SET_[QME_LFIR_PCB_RESET_WHEN_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PCB_RESET_WHEN_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PCB_RESET_WHEN_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_PCB_RESET_WHEN_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PCB_RESET_WHEN_ACTIVE]

//>> SET_[QME_LFIR_PCB_RESET_WHEN_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PCB_RESET_WHEN_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PCB_RESET_WHEN_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_PCB_RESET_WHEN_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PCB_RESET_WHEN_ACTIVE]

//>> SET_[QME_LFIR_PCB_RESET_WHEN_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PCB_RESET_WHEN_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_PCB_RESET_WHEN_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_PCB_RESET_WHEN_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PCB_RESET_WHEN_ACTIVE]

//>> CLEAR_[QME_LFIR_PCB_RESET_WHEN_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_PCB_RESET_WHEN_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_PCB_RESET_WHEN_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_PCB_RESET_WHEN_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_PCB_RESET_WHEN_ACTIVE]

//>> GET_[QME_LFIR_PCB_RESET_WHEN_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_PCB_RESET_WHEN_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_PCB_RESET_WHEN_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_PCB_RESET_WHEN_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PCB_RESET_WHEN_ACTIVE]

//>> GET_[QME_LFIR_PCB_RESET_WHEN_ACTIVE]
static inline bool GET_QME_LFIR_PCB_RESET_WHEN_ACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_PCB_RESET_WHEN_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_PCB_RESET_WHEN_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PCB_RESET_WHEN_ACTIVE]

//>> SET_[QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR]

//>> SET_[QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR]

//>> SET_[QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR]

//>> CLEAR_[QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR]

//>> GET_[QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR]

//>> GET_[QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR]
static inline bool GET_QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_SPECIAL_WKUP_PROTOCOL_ERR]

//>> SET_[QME_LFIR_SPECIAL_WKUP_DONE_WINDOW]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_SPECIAL_WKUP_DONE_WINDOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_SPECIAL_WKUP_DONE_WINDOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_SPECIAL_WKUP_DONE_WINDOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_SPECIAL_WKUP_DONE_WINDOW]

//>> SET_[QME_LFIR_SPECIAL_WKUP_DONE_WINDOW]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_SPECIAL_WKUP_DONE_WINDOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_SPECIAL_WKUP_DONE_WINDOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_SPECIAL_WKUP_DONE_WINDOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_SPECIAL_WKUP_DONE_WINDOW]

//>> SET_[QME_LFIR_SPECIAL_WKUP_DONE_WINDOW]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_SPECIAL_WKUP_DONE_WINDOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_SPECIAL_WKUP_DONE_WINDOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_SPECIAL_WKUP_DONE_WINDOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_SPECIAL_WKUP_DONE_WINDOW]

//>> CLEAR_[QME_LFIR_SPECIAL_WKUP_DONE_WINDOW]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_SPECIAL_WKUP_DONE_WINDOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_SPECIAL_WKUP_DONE_WINDOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_SPECIAL_WKUP_DONE_WINDOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_SPECIAL_WKUP_DONE_WINDOW]

//>> GET_[QME_LFIR_SPECIAL_WKUP_DONE_WINDOW]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_SPECIAL_WKUP_DONE_WINDOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_SPECIAL_WKUP_DONE_WINDOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_SPECIAL_WKUP_DONE_WINDOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_SPECIAL_WKUP_DONE_WINDOW]

//>> GET_[QME_LFIR_SPECIAL_WKUP_DONE_WINDOW]
static inline bool GET_QME_LFIR_SPECIAL_WKUP_DONE_WINDOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_SPECIAL_WKUP_DONE_WINDOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_SPECIAL_WKUP_DONE_WINDOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_SPECIAL_WKUP_DONE_WINDOW]

//>> SET_[QME_LFIR_DISABLED_INTR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_DISABLED_INTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_DISABLED_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_DISABLED_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_DISABLED_INTR]

//>> SET_[QME_LFIR_DISABLED_INTR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_DISABLED_INTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_DISABLED_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_DISABLED_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_DISABLED_INTR]

//>> SET_[QME_LFIR_DISABLED_INTR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_DISABLED_INTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_DISABLED_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_DISABLED_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_DISABLED_INTR]

//>> CLEAR_[QME_LFIR_DISABLED_INTR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_DISABLED_INTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_DISABLED_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_DISABLED_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_DISABLED_INTR]

//>> GET_[QME_LFIR_DISABLED_INTR]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_DISABLED_INTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_DISABLED_INTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_DISABLED_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_DISABLED_INTR]

//>> GET_[QME_LFIR_DISABLED_INTR]
static inline bool GET_QME_LFIR_DISABLED_INTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_DISABLED_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_DISABLED_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_DISABLED_INTR]

//>> SET_[QME_LFIR_DECONFIGURED_INTR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_DECONFIGURED_INTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_DECONFIGURED_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_DECONFIGURED_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_DECONFIGURED_INTR]

//>> SET_[QME_LFIR_DECONFIGURED_INTR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_DECONFIGURED_INTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_DECONFIGURED_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_DECONFIGURED_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_DECONFIGURED_INTR]

//>> SET_[QME_LFIR_DECONFIGURED_INTR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_DECONFIGURED_INTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_DECONFIGURED_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_DECONFIGURED_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_DECONFIGURED_INTR]

//>> CLEAR_[QME_LFIR_DECONFIGURED_INTR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_DECONFIGURED_INTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_DECONFIGURED_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_DECONFIGURED_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_DECONFIGURED_INTR]

//>> GET_[QME_LFIR_DECONFIGURED_INTR]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_DECONFIGURED_INTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_DECONFIGURED_INTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_DECONFIGURED_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_DECONFIGURED_INTR]

//>> GET_[QME_LFIR_DECONFIGURED_INTR]
static inline bool GET_QME_LFIR_DECONFIGURED_INTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_DECONFIGURED_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_DECONFIGURED_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_DECONFIGURED_INTR]

//>> SET_[QME_LFIR_RS4_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_RS4_TIMEOUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_RS4_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_RS4_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_RS4_TIMEOUT]

//>> SET_[QME_LFIR_RS4_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_RS4_TIMEOUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_RS4_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_RS4_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_RS4_TIMEOUT]

//>> SET_[QME_LFIR_RS4_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_RS4_TIMEOUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_RS4_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_RS4_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_RS4_TIMEOUT]

//>> CLEAR_[QME_LFIR_RS4_TIMEOUT]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_RS4_TIMEOUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_RS4_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_RS4_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_RS4_TIMEOUT]

//>> GET_[QME_LFIR_RS4_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_RS4_TIMEOUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_RS4_TIMEOUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_RS4_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_RS4_TIMEOUT]

//>> GET_[QME_LFIR_RS4_TIMEOUT]
static inline bool GET_QME_LFIR_RS4_TIMEOUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_RS4_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_RS4_TIMEOUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_RS4_TIMEOUT]

//>> SET_[P10_20_QME_LFIR_MIXED_LPAR_ERROR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_LFIR_MIXED_LPAR_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<P10_20_QME_LFIR_MIXED_LPAR_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access P10_20_QME_LFIR_MIXED_LPAR_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_LFIR_MIXED_LPAR_ERROR]

//>> SET_[P10_20_QME_LFIR_MIXED_LPAR_ERROR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_LFIR_MIXED_LPAR_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<P10_20_QME_LFIR_MIXED_LPAR_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access P10_20_QME_LFIR_MIXED_LPAR_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_LFIR_MIXED_LPAR_ERROR]

//>> SET_[P10_20_QME_LFIR_MIXED_LPAR_ERROR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_LFIR_MIXED_LPAR_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<P10_20_QME_LFIR_MIXED_LPAR_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access P10_20_QME_LFIR_MIXED_LPAR_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_LFIR_MIXED_LPAR_ERROR]

//>> CLEAR_[P10_20_QME_LFIR_MIXED_LPAR_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_QME_LFIR_MIXED_LPAR_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<P10_20_QME_LFIR_MIXED_LPAR_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access P10_20_QME_LFIR_MIXED_LPAR_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_QME_LFIR_MIXED_LPAR_ERROR]

//>> GET_[P10_20_QME_LFIR_MIXED_LPAR_ERROR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_QME_LFIR_MIXED_LPAR_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<P10_20_QME_LFIR_MIXED_LPAR_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access P10_20_QME_LFIR_MIXED_LPAR_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_LFIR_MIXED_LPAR_ERROR]

//>> GET_[P10_20_QME_LFIR_MIXED_LPAR_ERROR]
static inline bool GET_P10_20_QME_LFIR_MIXED_LPAR_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<P10_20_QME_LFIR_MIXED_LPAR_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access P10_20_QME_LFIR_MIXED_LPAR_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_LFIR_MIXED_LPAR_ERROR]

//>> SET_[QME_LFIR_PB_DATA_HANG]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_DATA_HANG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PB_DATA_HANG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_PB_DATA_HANG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_DATA_HANG]

//>> SET_[QME_LFIR_PB_DATA_HANG]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_DATA_HANG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PB_DATA_HANG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_PB_DATA_HANG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_DATA_HANG]

//>> SET_[QME_LFIR_PB_DATA_HANG]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_DATA_HANG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_PB_DATA_HANG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_PB_DATA_HANG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_DATA_HANG]

//>> CLEAR_[QME_LFIR_PB_DATA_HANG]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_PB_DATA_HANG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_PB_DATA_HANG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_PB_DATA_HANG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_PB_DATA_HANG]

//>> GET_[QME_LFIR_PB_DATA_HANG]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_PB_DATA_HANG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_PB_DATA_HANG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_PB_DATA_HANG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PB_DATA_HANG]

//>> GET_[QME_LFIR_PB_DATA_HANG]
static inline bool GET_QME_LFIR_PB_DATA_HANG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_PB_DATA_HANG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_PB_DATA_HANG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PB_DATA_HANG]

//>> SET_[QME_LFIR_WRITE_PROTECT_FAIL]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_WRITE_PROTECT_FAIL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_WRITE_PROTECT_FAIL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_WRITE_PROTECT_FAIL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_WRITE_PROTECT_FAIL]

//>> SET_[QME_LFIR_WRITE_PROTECT_FAIL]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_WRITE_PROTECT_FAIL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_WRITE_PROTECT_FAIL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_WRITE_PROTECT_FAIL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_WRITE_PROTECT_FAIL]

//>> SET_[QME_LFIR_WRITE_PROTECT_FAIL]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_WRITE_PROTECT_FAIL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_WRITE_PROTECT_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_WRITE_PROTECT_FAIL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_WRITE_PROTECT_FAIL]

//>> CLEAR_[QME_LFIR_WRITE_PROTECT_FAIL]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_WRITE_PROTECT_FAIL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_WRITE_PROTECT_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_WRITE_PROTECT_FAIL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_WRITE_PROTECT_FAIL]

//>> GET_[QME_LFIR_WRITE_PROTECT_FAIL]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_WRITE_PROTECT_FAIL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_WRITE_PROTECT_FAIL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_WRITE_PROTECT_FAIL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_WRITE_PROTECT_FAIL]

//>> GET_[QME_LFIR_WRITE_PROTECT_FAIL]
static inline bool GET_QME_LFIR_WRITE_PROTECT_FAIL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_WRITE_PROTECT_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_WRITE_PROTECT_FAIL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_WRITE_PROTECT_FAIL]

//>> SET_[QME_LFIR_DTC_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_DTC_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_DTC_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_DTC_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_DTC_ERROR]

//>> SET_[QME_LFIR_DTC_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_DTC_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_DTC_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_DTC_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_DTC_ERROR]

//>> SET_[QME_LFIR_DTC_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_DTC_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_DTC_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_DTC_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_DTC_ERROR]

//>> CLEAR_[QME_LFIR_DTC_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_DTC_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_DTC_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_DTC_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_DTC_ERROR]

//>> GET_[QME_LFIR_DTC_ERROR]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_DTC_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_DTC_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_DTC_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_DTC_ERROR]

//>> GET_[QME_LFIR_DTC_ERROR]
static inline bool GET_QME_LFIR_DTC_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_DTC_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_DTC_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_DTC_ERROR]

//>> SET_[QME_LFIR_PB_CE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_CE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PB_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_PB_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_CE]

//>> SET_[QME_LFIR_PB_CE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_CE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PB_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_PB_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_CE]

//>> SET_[QME_LFIR_PB_CE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_PB_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_PB_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_CE]

//>> CLEAR_[QME_LFIR_PB_CE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_PB_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_PB_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_PB_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_PB_CE]

//>> GET_[QME_LFIR_PB_CE]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_PB_CE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_PB_CE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_PB_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PB_CE]

//>> GET_[QME_LFIR_PB_CE]
static inline bool GET_QME_LFIR_PB_CE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_PB_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_PB_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PB_CE]

//>> SET_[QME_LFIR_PB_UE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_UE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PB_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_PB_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_UE]

//>> SET_[QME_LFIR_PB_UE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_UE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PB_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_PB_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_UE]

//>> SET_[QME_LFIR_PB_UE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_PB_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_PB_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_UE]

//>> CLEAR_[QME_LFIR_PB_UE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_PB_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_PB_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_PB_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_PB_UE]

//>> GET_[QME_LFIR_PB_UE]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_PB_UE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_PB_UE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_PB_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PB_UE]

//>> GET_[QME_LFIR_PB_UE]
static inline bool GET_QME_LFIR_PB_UE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_PB_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_PB_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PB_UE]

//>> SET_[QME_LFIR_PB_SUE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_SUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PB_SUE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_PB_SUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_SUE]

//>> SET_[QME_LFIR_PB_SUE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_SUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PB_SUE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_PB_SUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_SUE]

//>> SET_[QME_LFIR_PB_SUE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_SUE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_PB_SUE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_PB_SUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_SUE]

//>> CLEAR_[QME_LFIR_PB_SUE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_PB_SUE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_PB_SUE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_PB_SUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_PB_SUE]

//>> GET_[QME_LFIR_PB_SUE]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_PB_SUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_PB_SUE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_PB_SUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PB_SUE]

//>> GET_[QME_LFIR_PB_SUE]
static inline bool GET_QME_LFIR_PB_SUE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_PB_SUE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_PB_SUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PB_SUE]

//>> SET_[QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY]

//>> SET_[QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY]

//>> SET_[QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY]

//>> CLEAR_[QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY]

//>> GET_[QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY]

//>> GET_[QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY]
static inline bool GET_QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PB_INVALID_TOPOTABLE_ENTRY]

//>> SET_[QME_LFIR_PB_TAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_TAG_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PB_TAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_PB_TAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_TAG_PERR]

//>> SET_[QME_LFIR_PB_TAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_TAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PB_TAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_PB_TAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_TAG_PERR]

//>> SET_[QME_LFIR_PB_TAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_TAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_PB_TAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_PB_TAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_TAG_PERR]

//>> CLEAR_[QME_LFIR_PB_TAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_PB_TAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_PB_TAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_PB_TAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_PB_TAG_PERR]

//>> GET_[QME_LFIR_PB_TAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_PB_TAG_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_PB_TAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_PB_TAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PB_TAG_PERR]

//>> GET_[QME_LFIR_PB_TAG_PERR]
static inline bool GET_QME_LFIR_PB_TAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_PB_TAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_PB_TAG_PERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PB_TAG_PERR]

//>> SET_[QME_LFIR_PIG_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PIG_PROTOCOL_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PIG_PROTOCOL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_PIG_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PIG_PROTOCOL_ERR]

//>> SET_[QME_LFIR_PIG_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PIG_PROTOCOL_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PIG_PROTOCOL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_PIG_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PIG_PROTOCOL_ERR]

//>> SET_[QME_LFIR_PIG_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PIG_PROTOCOL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_PIG_PROTOCOL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_PIG_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PIG_PROTOCOL_ERR]

//>> CLEAR_[QME_LFIR_PIG_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_PIG_PROTOCOL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_PIG_PROTOCOL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_PIG_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_PIG_PROTOCOL_ERR]

//>> GET_[QME_LFIR_PIG_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_PIG_PROTOCOL_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_PIG_PROTOCOL_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_PIG_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PIG_PROTOCOL_ERR]

//>> GET_[QME_LFIR_PIG_PROTOCOL_ERR]
static inline bool GET_QME_LFIR_PIG_PROTOCOL_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_PIG_PROTOCOL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_PIG_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PIG_PROTOCOL_ERR]

//>> SET_[QME_LFIR_LOCAL_ACCESS_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_LOCAL_ACCESS_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_LOCAL_ACCESS_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_LOCAL_ACCESS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_LOCAL_ACCESS_ERR]

//>> SET_[QME_LFIR_LOCAL_ACCESS_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_LOCAL_ACCESS_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_LOCAL_ACCESS_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_LOCAL_ACCESS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_LOCAL_ACCESS_ERR]

//>> SET_[QME_LFIR_LOCAL_ACCESS_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_LOCAL_ACCESS_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_LOCAL_ACCESS_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_LOCAL_ACCESS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_LOCAL_ACCESS_ERR]

//>> CLEAR_[QME_LFIR_LOCAL_ACCESS_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_LOCAL_ACCESS_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_LOCAL_ACCESS_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_LOCAL_ACCESS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_LOCAL_ACCESS_ERR]

//>> GET_[QME_LFIR_LOCAL_ACCESS_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_LOCAL_ACCESS_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_LOCAL_ACCESS_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_LOCAL_ACCESS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_LOCAL_ACCESS_ERR]

//>> GET_[QME_LFIR_LOCAL_ACCESS_ERR]
static inline bool GET_QME_LFIR_LOCAL_ACCESS_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_LOCAL_ACCESS_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_LOCAL_ACCESS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_LOCAL_ACCESS_ERR]

//>> SET_[QME_LFIR_PB_SSA_CE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_SSA_CE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PB_SSA_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_PB_SSA_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_SSA_CE]

//>> SET_[QME_LFIR_PB_SSA_CE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_SSA_CE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PB_SSA_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_PB_SSA_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_SSA_CE]

//>> SET_[QME_LFIR_PB_SSA_CE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_SSA_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_PB_SSA_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_PB_SSA_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_SSA_CE]

//>> CLEAR_[QME_LFIR_PB_SSA_CE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_PB_SSA_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_PB_SSA_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_PB_SSA_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_PB_SSA_CE]

//>> GET_[QME_LFIR_PB_SSA_CE]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_PB_SSA_CE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_PB_SSA_CE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_PB_SSA_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PB_SSA_CE]

//>> GET_[QME_LFIR_PB_SSA_CE]
static inline bool GET_QME_LFIR_PB_SSA_CE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_PB_SSA_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_PB_SSA_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PB_SSA_CE]

//>> SET_[QME_LFIR_PB_SSA_UE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_SSA_UE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PB_SSA_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_PB_SSA_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_SSA_UE]

//>> SET_[QME_LFIR_PB_SSA_UE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_SSA_UE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_PB_SSA_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_PB_SSA_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_SSA_UE]

//>> SET_[QME_LFIR_PB_SSA_UE]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_PB_SSA_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<QME_LFIR_PB_SSA_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_LFIR_PB_SSA_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_PB_SSA_UE]

//>> CLEAR_[QME_LFIR_PB_SSA_UE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_LFIR_PB_SSA_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<QME_LFIR_PB_SSA_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_LFIR_PB_SSA_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_LFIR_PB_SSA_UE]

//>> GET_[QME_LFIR_PB_SSA_UE]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_PB_SSA_UE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_PB_SSA_UE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_PB_SSA_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PB_SSA_UE]

//>> GET_[QME_LFIR_PB_SSA_UE]
static inline bool GET_QME_LFIR_PB_SSA_UE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<QME_LFIR_PB_SSA_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_LFIR_PB_SSA_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_PB_SSA_UE]

//>> SET_[QME_LFIR_SPARE1]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_SPARE1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_SPARE1,
           QME_LFIR_SPARE1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIR_SPARE1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_SPARE1]

//>> SET_[QME_LFIR_SPARE1]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIR_SPARE1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIR_SPARE1,
           QME_LFIR_SPARE1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIR_SPARE1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIR_SPARE1]

//>> GET_[QME_LFIR_SPARE1]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIR_SPARE1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIR_SPARE1,
           QME_LFIR_SPARE1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIR_SPARE1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIR_SPARE1]

//>> SET_[P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR]

//>> SET_[P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR]

//>> SET_[P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR]

//>> CLEAR_[P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR]

//>> GET_[P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR]

//>> GET_[P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR]
static inline bool GET_P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_LFIR_RESCLK_CCFG_PAR_ERR]

//>> SET_[P10_20_QME_LFIR_SPARE1]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_LFIR_SPARE1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<P10_20_QME_LFIR_SPARE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access P10_20_QME_LFIR_SPARE1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_LFIR_SPARE1]

//>> SET_[P10_20_QME_LFIR_SPARE1]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_LFIR_SPARE1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.insertFromRight<P10_20_QME_LFIR_SPARE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access P10_20_QME_LFIR_SPARE1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_LFIR_SPARE1]

//>> SET_[P10_20_QME_LFIR_SPARE1]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_LFIR_SPARE1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.setBit<P10_20_QME_LFIR_SPARE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access P10_20_QME_LFIR_SPARE1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_LFIR_SPARE1]

//>> CLEAR_[P10_20_QME_LFIR_SPARE1]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_QME_LFIR_SPARE1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return o_data.clearBit<P10_20_QME_LFIR_SPARE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access P10_20_QME_LFIR_SPARE1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_QME_LFIR_SPARE1]

//>> GET_[P10_20_QME_LFIR_SPARE1]
static inline fapi2::buffer<uint64_t>& GET_P10_20_QME_LFIR_SPARE1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.extractToRight<P10_20_QME_LFIR_SPARE1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access P10_20_QME_LFIR_SPARE1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_LFIR_SPARE1]

//>> GET_[P10_20_QME_LFIR_SPARE1]
static inline bool GET_P10_20_QME_LFIR_SPARE1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return i_data.getBit<P10_20_QME_LFIR_SPARE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access P10_20_QME_LFIR_SPARE1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_LFIR_SPARE1]

//>> PREP_[QME_PCBSII]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_PCBSII(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PCBSII;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_PCBSII]

//>> GET_[QME_PCBSII]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_PCBSII(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PCBSII;
#endif
    return fapi2::getScom(i_target, QME_PCBSII, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_PCBSII]

//>> PUT_[QME_PCBSII]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_PCBSII(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return fapi2::putScom(i_target, QME_PCBSII, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_PCBSII]


//>> SET_[QME_PCBSII_PCB_REQ_ACK]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_REQ_ACK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.insertFromRight<QME_PCBSII_PCB_REQ_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PCBSII_PCB_REQ_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_REQ_ACK]

//>> SET_[QME_PCBSII_PCB_REQ_ACK]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_REQ_ACK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.insertFromRight<QME_PCBSII_PCB_REQ_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PCBSII_PCB_REQ_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_REQ_ACK]

//>> SET_[QME_PCBSII_PCB_REQ_ACK]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_REQ_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.setBit<QME_PCBSII_PCB_REQ_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PCBSII_PCB_REQ_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_REQ_ACK]

//>> CLEAR_[QME_PCBSII_PCB_REQ_ACK]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PCBSII_PCB_REQ_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.clearBit<QME_PCBSII_PCB_REQ_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PCBSII_PCB_REQ_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PCBSII_PCB_REQ_ACK]

//>> GET_[QME_PCBSII_PCB_REQ_ACK]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSII_PCB_REQ_ACK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return i_data.extractToRight<QME_PCBSII_PCB_REQ_ACK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PCBSII_PCB_REQ_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSII_PCB_REQ_ACK]

//>> GET_[QME_PCBSII_PCB_REQ_ACK]
static inline bool GET_QME_PCBSII_PCB_REQ_ACK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return i_data.getBit<QME_PCBSII_PCB_REQ_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PCBSII_PCB_REQ_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSII_PCB_REQ_ACK]

//>> SET_[QME_PCBSII_PCB_RSP_P]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_RSP_P(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.insertFromRight<QME_PCBSII_PCB_RSP_P,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PCBSII_PCB_RSP_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_RSP_P]

//>> SET_[QME_PCBSII_PCB_RSP_P]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_RSP_P(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.insertFromRight<QME_PCBSII_PCB_RSP_P,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PCBSII_PCB_RSP_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_RSP_P]

//>> SET_[QME_PCBSII_PCB_RSP_P]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_RSP_P(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.setBit<QME_PCBSII_PCB_RSP_P>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PCBSII_PCB_RSP_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_RSP_P]

//>> CLEAR_[QME_PCBSII_PCB_RSP_P]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PCBSII_PCB_RSP_P(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.clearBit<QME_PCBSII_PCB_RSP_P>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PCBSII_PCB_RSP_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PCBSII_PCB_RSP_P]

//>> GET_[QME_PCBSII_PCB_RSP_P]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSII_PCB_RSP_P(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return i_data.extractToRight<QME_PCBSII_PCB_RSP_P,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PCBSII_PCB_RSP_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSII_PCB_RSP_P]

//>> GET_[QME_PCBSII_PCB_RSP_P]
static inline bool GET_QME_PCBSII_PCB_RSP_P(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return i_data.getBit<QME_PCBSII_PCB_RSP_P>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PCBSII_PCB_RSP_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSII_PCB_RSP_P]

//>> SET_[QME_PCBSII_PCB_RSP_VLD]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_RSP_VLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.insertFromRight<QME_PCBSII_PCB_RSP_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PCBSII_PCB_RSP_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_RSP_VLD]

//>> SET_[QME_PCBSII_PCB_RSP_VLD]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_RSP_VLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.insertFromRight<QME_PCBSII_PCB_RSP_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PCBSII_PCB_RSP_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_RSP_VLD]

//>> SET_[QME_PCBSII_PCB_RSP_VLD]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_RSP_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.setBit<QME_PCBSII_PCB_RSP_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PCBSII_PCB_RSP_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_RSP_VLD]

//>> CLEAR_[QME_PCBSII_PCB_RSP_VLD]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PCBSII_PCB_RSP_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.clearBit<QME_PCBSII_PCB_RSP_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PCBSII_PCB_RSP_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PCBSII_PCB_RSP_VLD]

//>> GET_[QME_PCBSII_PCB_RSP_VLD]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSII_PCB_RSP_VLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return i_data.extractToRight<QME_PCBSII_PCB_RSP_VLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PCBSII_PCB_RSP_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSII_PCB_RSP_VLD]

//>> GET_[QME_PCBSII_PCB_RSP_VLD]
static inline bool GET_QME_PCBSII_PCB_RSP_VLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return i_data.getBit<QME_PCBSII_PCB_RSP_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PCBSII_PCB_RSP_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSII_PCB_RSP_VLD]

//>> SET_[QME_PCBSII_PCB_RSP_INFO]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_RSP_INFO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.insertFromRight<QME_PCBSII_PCB_RSP_INFO,
           QME_PCBSII_PCB_RSP_INFO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PCBSII_PCB_RSP_INFO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_RSP_INFO]

//>> SET_[QME_PCBSII_PCB_RSP_INFO]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_RSP_INFO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.insertFromRight<QME_PCBSII_PCB_RSP_INFO,
           QME_PCBSII_PCB_RSP_INFO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PCBSII_PCB_RSP_INFO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_RSP_INFO]

//>> GET_[QME_PCBSII_PCB_RSP_INFO]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSII_PCB_RSP_INFO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return i_data.extractToRight<QME_PCBSII_PCB_RSP_INFO,
           QME_PCBSII_PCB_RSP_INFO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PCBSII_PCB_RSP_INFO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSII_PCB_RSP_INFO]

//>> SET_[QME_PCBSII_QUAD_ID]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_QUAD_ID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.insertFromRight<QME_PCBSII_QUAD_ID,
           QME_PCBSII_QUAD_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PCBSII_QUAD_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_QUAD_ID]

//>> SET_[QME_PCBSII_QUAD_ID]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_QUAD_ID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.insertFromRight<QME_PCBSII_QUAD_ID,
           QME_PCBSII_QUAD_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PCBSII_QUAD_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_QUAD_ID]

//>> GET_[QME_PCBSII_QUAD_ID]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSII_QUAD_ID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return i_data.extractToRight<QME_PCBSII_QUAD_ID,
           QME_PCBSII_QUAD_ID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PCBSII_QUAD_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSII_QUAD_ID]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
