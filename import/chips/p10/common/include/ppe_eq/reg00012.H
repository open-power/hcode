/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_eq/reg00012.H $           */
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

#ifndef __PPE_EQ_REG00012_H_
#define __PPE_EQ_REG00012_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


//>> PREP_[QME_BCEBAR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_BCEBAR1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_BCEBAR1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_BCEBAR1]

//>> GET_[QME_BCEBAR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_BCEBAR1(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_BCEBAR1;
#endif
    return fapi2::getScom(i_target, QME_BCEBAR1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_BCEBAR1]

//>> PUT_[QME_BCEBAR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_BCEBAR1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_BCEBAR1));
#endif
    return fapi2::putScom(i_target, QME_BCEBAR1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_BCEBAR1]


//>> SET_[QME_BCEBAR1_BASE]
static inline fapi2::buffer<uint64_t>& SET_QME_BCEBAR1_BASE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCEBAR1));
#endif
    return o_data.insertFromRight<QME_BCEBAR1_BASE,
           QME_BCEBAR1_BASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_BCEBAR1_BASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCEBAR1_BASE]

//>> SET_[QME_BCEBAR1_BASE]
static inline fapi2::buffer<uint64_t>& SET_QME_BCEBAR1_BASE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCEBAR1));
#endif
    return o_data.insertFromRight<QME_BCEBAR1_BASE,
           QME_BCEBAR1_BASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_BCEBAR1_BASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCEBAR1_BASE]

//>> GET_[QME_BCEBAR1_BASE]
static inline fapi2::buffer<uint64_t>& GET_QME_BCEBAR1_BASE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCEBAR1));
#endif
    return i_data.extractToRight<QME_BCEBAR1_BASE,
           QME_BCEBAR1_BASE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_BCEBAR1_BASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCEBAR1_BASE]

//>> SET_[QME_BCEBAR1_SIZE]
static inline fapi2::buffer<uint64_t>& SET_QME_BCEBAR1_SIZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCEBAR1));
#endif
    return o_data.insertFromRight<QME_BCEBAR1_SIZE,
           QME_BCEBAR1_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_BCEBAR1_SIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCEBAR1_SIZE]

//>> SET_[QME_BCEBAR1_SIZE]
static inline fapi2::buffer<uint64_t>& SET_QME_BCEBAR1_SIZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCEBAR1));
#endif
    return o_data.insertFromRight<QME_BCEBAR1_SIZE,
           QME_BCEBAR1_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_BCEBAR1_SIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCEBAR1_SIZE]

//>> GET_[QME_BCEBAR1_SIZE]
static inline fapi2::buffer<uint64_t>& GET_QME_BCEBAR1_SIZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCEBAR1));
#endif
    return i_data.extractToRight<QME_BCEBAR1_SIZE,
           QME_BCEBAR1_SIZE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_BCEBAR1_SIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCEBAR1_SIZE]

//>> PREP_[QME_FLAGS_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_FLAGS_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_FLAGS_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_FLAGS_RW]

//>> GET_[QME_FLAGS_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_FLAGS_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_FLAGS_RW;
#endif
    return fapi2::getScom(i_target, QME_FLAGS_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_FLAGS_RW]

//>> PUT_[QME_FLAGS_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_FLAGS_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_FLAGS_RW, QME_FLAGS_WO_CLEAR, QME_FLAGS_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_FLAGS_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_FLAGS_RW]

//>> PREP_[QME_FLAGS_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_FLAGS_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_FLAGS_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_FLAGS_WO_CLEAR]

//>> GET_[QME_FLAGS_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_FLAGS_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_FLAGS_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, QME_FLAGS_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_FLAGS_WO_CLEAR]

//>> PUT_[QME_FLAGS_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_FLAGS_WO_CLEAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_FLAGS_RW, QME_FLAGS_WO_CLEAR, QME_FLAGS_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_FLAGS_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_FLAGS_WO_CLEAR]

//>> PREP_[QME_FLAGS_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_FLAGS_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_FLAGS_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_FLAGS_WO_OR]

//>> GET_[QME_FLAGS_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_FLAGS_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_FLAGS_WO_OR;
#endif
    return fapi2::getScom(i_target, QME_FLAGS_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_FLAGS_WO_OR]

//>> PUT_[QME_FLAGS_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_FLAGS_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_FLAGS_RW, QME_FLAGS_WO_CLEAR, QME_FLAGS_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_FLAGS_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_FLAGS_WO_OR]


//>> SET_[QME_FLAGS_DATA]
static inline fapi2::buffer<uint64_t>& SET_QME_FLAGS_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_FLAGS_RW, QME_FLAGS_WO_CLEAR, QME_FLAGS_WO_OR));
#endif
    return o_data.insertFromRight<QME_FLAGS_DATA,
           QME_FLAGS_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_FLAGS_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_FLAGS_DATA]

//>> SET_[QME_FLAGS_DATA]
static inline fapi2::buffer<uint64_t>& SET_QME_FLAGS_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_FLAGS_RW, QME_FLAGS_WO_CLEAR, QME_FLAGS_WO_OR));
#endif
    return o_data.insertFromRight<QME_FLAGS_DATA,
           QME_FLAGS_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_FLAGS_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_FLAGS_DATA]

//>> GET_[QME_FLAGS_DATA]
static inline fapi2::buffer<uint64_t>& GET_QME_FLAGS_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_FLAGS_RW, QME_FLAGS_WO_CLEAR, QME_FLAGS_WO_OR));
#endif
    return i_data.extractToRight<QME_FLAGS_DATA,
           QME_FLAGS_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_FLAGS_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_FLAGS_DATA]

//>> PREP_[QME_RCIMR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_RCIMR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_RCIMR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_RCIMR]

//>> GET_[QME_RCIMR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_RCIMR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_RCIMR;
#endif
    return fapi2::getScom(i_target, QME_RCIMR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_RCIMR]

//>> PUT_[QME_RCIMR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_RCIMR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return fapi2::putScom(i_target, QME_RCIMR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_RCIMR]


//>> SET_[QME_RCIMR_P0]
static inline fapi2::buffer<uint64_t>& SET_QME_RCIMR_P0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return o_data.insertFromRight<QME_RCIMR_P0,
           QME_RCIMR_P0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCIMR_P0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCIMR_P0]

//>> SET_[QME_RCIMR_P0]
static inline fapi2::buffer<uint64_t>& SET_QME_RCIMR_P0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return o_data.insertFromRight<QME_RCIMR_P0,
           QME_RCIMR_P0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCIMR_P0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCIMR_P0]

//>> GET_[QME_RCIMR_P0]
static inline fapi2::buffer<uint64_t>& GET_QME_RCIMR_P0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return i_data.extractToRight<QME_RCIMR_P0,
           QME_RCIMR_P0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCIMR_P0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCIMR_P0]

//>> SET_[QME_RCIMR_X0]
static inline fapi2::buffer<uint64_t>& SET_QME_RCIMR_X0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return o_data.insertFromRight<QME_RCIMR_X0,
           QME_RCIMR_X0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCIMR_X0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCIMR_X0]

//>> SET_[QME_RCIMR_X0]
static inline fapi2::buffer<uint64_t>& SET_QME_RCIMR_X0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return o_data.insertFromRight<QME_RCIMR_X0,
           QME_RCIMR_X0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCIMR_X0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCIMR_X0]

//>> GET_[QME_RCIMR_X0]
static inline fapi2::buffer<uint64_t>& GET_QME_RCIMR_X0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return i_data.extractToRight<QME_RCIMR_X0,
           QME_RCIMR_X0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCIMR_X0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCIMR_X0]

//>> SET_[QME_RCIMR_P1]
static inline fapi2::buffer<uint64_t>& SET_QME_RCIMR_P1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return o_data.insertFromRight<QME_RCIMR_P1,
           QME_RCIMR_P1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCIMR_P1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCIMR_P1]

//>> SET_[QME_RCIMR_P1]
static inline fapi2::buffer<uint64_t>& SET_QME_RCIMR_P1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return o_data.insertFromRight<QME_RCIMR_P1,
           QME_RCIMR_P1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCIMR_P1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCIMR_P1]

//>> GET_[QME_RCIMR_P1]
static inline fapi2::buffer<uint64_t>& GET_QME_RCIMR_P1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return i_data.extractToRight<QME_RCIMR_P1,
           QME_RCIMR_P1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCIMR_P1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCIMR_P1]

//>> SET_[QME_RCIMR_X1]
static inline fapi2::buffer<uint64_t>& SET_QME_RCIMR_X1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return o_data.insertFromRight<QME_RCIMR_X1,
           QME_RCIMR_X1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCIMR_X1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCIMR_X1]

//>> SET_[QME_RCIMR_X1]
static inline fapi2::buffer<uint64_t>& SET_QME_RCIMR_X1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return o_data.insertFromRight<QME_RCIMR_X1,
           QME_RCIMR_X1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCIMR_X1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCIMR_X1]

//>> GET_[QME_RCIMR_X1]
static inline fapi2::buffer<uint64_t>& GET_QME_RCIMR_X1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return i_data.extractToRight<QME_RCIMR_X1,
           QME_RCIMR_X1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCIMR_X1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCIMR_X1]

//>> SET_[QME_RCIMR_P2]
static inline fapi2::buffer<uint64_t>& SET_QME_RCIMR_P2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return o_data.insertFromRight<QME_RCIMR_P2,
           QME_RCIMR_P2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCIMR_P2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCIMR_P2]

//>> SET_[QME_RCIMR_P2]
static inline fapi2::buffer<uint64_t>& SET_QME_RCIMR_P2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return o_data.insertFromRight<QME_RCIMR_P2,
           QME_RCIMR_P2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCIMR_P2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCIMR_P2]

//>> GET_[QME_RCIMR_P2]
static inline fapi2::buffer<uint64_t>& GET_QME_RCIMR_P2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return i_data.extractToRight<QME_RCIMR_P2,
           QME_RCIMR_P2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCIMR_P2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCIMR_P2]

//>> SET_[QME_RCIMR_X2]
static inline fapi2::buffer<uint64_t>& SET_QME_RCIMR_X2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return o_data.insertFromRight<QME_RCIMR_X2,
           QME_RCIMR_X2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCIMR_X2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCIMR_X2]

//>> SET_[QME_RCIMR_X2]
static inline fapi2::buffer<uint64_t>& SET_QME_RCIMR_X2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return o_data.insertFromRight<QME_RCIMR_X2,
           QME_RCIMR_X2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCIMR_X2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCIMR_X2]

//>> GET_[QME_RCIMR_X2]
static inline fapi2::buffer<uint64_t>& GET_QME_RCIMR_X2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return i_data.extractToRight<QME_RCIMR_X2,
           QME_RCIMR_X2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCIMR_X2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCIMR_X2]

//>> SET_[QME_RCIMR_P3]
static inline fapi2::buffer<uint64_t>& SET_QME_RCIMR_P3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return o_data.insertFromRight<QME_RCIMR_P3,
           QME_RCIMR_P3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCIMR_P3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCIMR_P3]

//>> SET_[QME_RCIMR_P3]
static inline fapi2::buffer<uint64_t>& SET_QME_RCIMR_P3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return o_data.insertFromRight<QME_RCIMR_P3,
           QME_RCIMR_P3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCIMR_P3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCIMR_P3]

//>> GET_[QME_RCIMR_P3]
static inline fapi2::buffer<uint64_t>& GET_QME_RCIMR_P3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return i_data.extractToRight<QME_RCIMR_P3,
           QME_RCIMR_P3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCIMR_P3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCIMR_P3]

//>> SET_[QME_RCIMR_X3]
static inline fapi2::buffer<uint64_t>& SET_QME_RCIMR_X3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return o_data.insertFromRight<QME_RCIMR_X3,
           QME_RCIMR_X3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCIMR_X3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCIMR_X3]

//>> SET_[QME_RCIMR_X3]
static inline fapi2::buffer<uint64_t>& SET_QME_RCIMR_X3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return o_data.insertFromRight<QME_RCIMR_X3,
           QME_RCIMR_X3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCIMR_X3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCIMR_X3]

//>> GET_[QME_RCIMR_X3]
static inline fapi2::buffer<uint64_t>& GET_QME_RCIMR_X3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCIMR));
#endif
    return i_data.extractToRight<QME_RCIMR_X3,
           QME_RCIMR_X3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCIMR_X3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCIMR_X3]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
