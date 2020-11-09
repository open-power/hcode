/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_eq/reg00002.H $           */
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

#ifndef __PPE_EQ_REG00002_H_
#define __PPE_EQ_REG00002_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


//>> PREP_[QME_DUCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_DUCR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_DUCR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_DUCR]

//>> GET_[QME_DUCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_DUCR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_DUCR;
#endif
    return fapi2::getScom(i_target, QME_DUCR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_DUCR]

//>> PUT_[QME_DUCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_DUCR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return fapi2::putScom(i_target, QME_DUCR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_DUCR]


//>> SET_[QME_DUCR_FDCR_DELAY_C0]
static inline fapi2::buffer<uint64_t>& SET_QME_DUCR_FDCR_DELAY_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return o_data.insertFromRight<QME_DUCR_FDCR_DELAY_C0,
           QME_DUCR_FDCR_DELAY_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_DUCR_FDCR_DELAY_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DUCR_FDCR_DELAY_C0]

//>> SET_[QME_DUCR_FDCR_DELAY_C0]
static inline fapi2::buffer<uint64_t>& SET_QME_DUCR_FDCR_DELAY_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return o_data.insertFromRight<QME_DUCR_FDCR_DELAY_C0,
           QME_DUCR_FDCR_DELAY_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_DUCR_FDCR_DELAY_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DUCR_FDCR_DELAY_C0]

//>> GET_[QME_DUCR_FDCR_DELAY_C0]
static inline fapi2::buffer<uint64_t>& GET_QME_DUCR_FDCR_DELAY_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return i_data.extractToRight<QME_DUCR_FDCR_DELAY_C0,
           QME_DUCR_FDCR_DELAY_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_DUCR_FDCR_DELAY_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DUCR_FDCR_DELAY_C0]

//>> SET_[QME_DUCR_FDCR_DELAY_C1]
static inline fapi2::buffer<uint64_t>& SET_QME_DUCR_FDCR_DELAY_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return o_data.insertFromRight<QME_DUCR_FDCR_DELAY_C1,
           QME_DUCR_FDCR_DELAY_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_DUCR_FDCR_DELAY_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DUCR_FDCR_DELAY_C1]

//>> SET_[QME_DUCR_FDCR_DELAY_C1]
static inline fapi2::buffer<uint64_t>& SET_QME_DUCR_FDCR_DELAY_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return o_data.insertFromRight<QME_DUCR_FDCR_DELAY_C1,
           QME_DUCR_FDCR_DELAY_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_DUCR_FDCR_DELAY_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DUCR_FDCR_DELAY_C1]

//>> GET_[QME_DUCR_FDCR_DELAY_C1]
static inline fapi2::buffer<uint64_t>& GET_QME_DUCR_FDCR_DELAY_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return i_data.extractToRight<QME_DUCR_FDCR_DELAY_C1,
           QME_DUCR_FDCR_DELAY_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_DUCR_FDCR_DELAY_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DUCR_FDCR_DELAY_C1]

//>> SET_[QME_DUCR_FDCR_DELAY_C2]
static inline fapi2::buffer<uint64_t>& SET_QME_DUCR_FDCR_DELAY_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return o_data.insertFromRight<QME_DUCR_FDCR_DELAY_C2,
           QME_DUCR_FDCR_DELAY_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_DUCR_FDCR_DELAY_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DUCR_FDCR_DELAY_C2]

//>> SET_[QME_DUCR_FDCR_DELAY_C2]
static inline fapi2::buffer<uint64_t>& SET_QME_DUCR_FDCR_DELAY_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return o_data.insertFromRight<QME_DUCR_FDCR_DELAY_C2,
           QME_DUCR_FDCR_DELAY_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_DUCR_FDCR_DELAY_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DUCR_FDCR_DELAY_C2]

//>> GET_[QME_DUCR_FDCR_DELAY_C2]
static inline fapi2::buffer<uint64_t>& GET_QME_DUCR_FDCR_DELAY_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return i_data.extractToRight<QME_DUCR_FDCR_DELAY_C2,
           QME_DUCR_FDCR_DELAY_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_DUCR_FDCR_DELAY_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DUCR_FDCR_DELAY_C2]

//>> SET_[QME_DUCR_FDCR_DELAY_C3]
static inline fapi2::buffer<uint64_t>& SET_QME_DUCR_FDCR_DELAY_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return o_data.insertFromRight<QME_DUCR_FDCR_DELAY_C3,
           QME_DUCR_FDCR_DELAY_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_DUCR_FDCR_DELAY_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DUCR_FDCR_DELAY_C3]

//>> SET_[QME_DUCR_FDCR_DELAY_C3]
static inline fapi2::buffer<uint64_t>& SET_QME_DUCR_FDCR_DELAY_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return o_data.insertFromRight<QME_DUCR_FDCR_DELAY_C3,
           QME_DUCR_FDCR_DELAY_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_DUCR_FDCR_DELAY_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DUCR_FDCR_DELAY_C3]

//>> GET_[QME_DUCR_FDCR_DELAY_C3]
static inline fapi2::buffer<uint64_t>& GET_QME_DUCR_FDCR_DELAY_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return i_data.extractToRight<QME_DUCR_FDCR_DELAY_C3,
           QME_DUCR_FDCR_DELAY_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_DUCR_FDCR_DELAY_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DUCR_FDCR_DELAY_C3]

//>> SET_[QME_DUCR_FDCR_CAL_ADJUST_C0]
static inline fapi2::buffer<uint64_t>& SET_QME_DUCR_FDCR_CAL_ADJUST_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return o_data.insertFromRight<QME_DUCR_FDCR_CAL_ADJUST_C0,
           QME_DUCR_FDCR_CAL_ADJUST_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_DUCR_FDCR_CAL_ADJUST_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DUCR_FDCR_CAL_ADJUST_C0]

//>> SET_[QME_DUCR_FDCR_CAL_ADJUST_C0]
static inline fapi2::buffer<uint64_t>& SET_QME_DUCR_FDCR_CAL_ADJUST_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return o_data.insertFromRight<QME_DUCR_FDCR_CAL_ADJUST_C0,
           QME_DUCR_FDCR_CAL_ADJUST_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_DUCR_FDCR_CAL_ADJUST_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DUCR_FDCR_CAL_ADJUST_C0]

//>> GET_[QME_DUCR_FDCR_CAL_ADJUST_C0]
static inline fapi2::buffer<uint64_t>& GET_QME_DUCR_FDCR_CAL_ADJUST_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return i_data.extractToRight<QME_DUCR_FDCR_CAL_ADJUST_C0,
           QME_DUCR_FDCR_CAL_ADJUST_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_DUCR_FDCR_CAL_ADJUST_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DUCR_FDCR_CAL_ADJUST_C0]

//>> SET_[QME_DUCR_FDCR_CAL_ADJUST_C1]
static inline fapi2::buffer<uint64_t>& SET_QME_DUCR_FDCR_CAL_ADJUST_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return o_data.insertFromRight<QME_DUCR_FDCR_CAL_ADJUST_C1,
           QME_DUCR_FDCR_CAL_ADJUST_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_DUCR_FDCR_CAL_ADJUST_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DUCR_FDCR_CAL_ADJUST_C1]

//>> SET_[QME_DUCR_FDCR_CAL_ADJUST_C1]
static inline fapi2::buffer<uint64_t>& SET_QME_DUCR_FDCR_CAL_ADJUST_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return o_data.insertFromRight<QME_DUCR_FDCR_CAL_ADJUST_C1,
           QME_DUCR_FDCR_CAL_ADJUST_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_DUCR_FDCR_CAL_ADJUST_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DUCR_FDCR_CAL_ADJUST_C1]

//>> GET_[QME_DUCR_FDCR_CAL_ADJUST_C1]
static inline fapi2::buffer<uint64_t>& GET_QME_DUCR_FDCR_CAL_ADJUST_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return i_data.extractToRight<QME_DUCR_FDCR_CAL_ADJUST_C1,
           QME_DUCR_FDCR_CAL_ADJUST_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_DUCR_FDCR_CAL_ADJUST_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DUCR_FDCR_CAL_ADJUST_C1]

//>> SET_[QME_DUCR_FDCR_CAL_ADJUST_C2]
static inline fapi2::buffer<uint64_t>& SET_QME_DUCR_FDCR_CAL_ADJUST_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return o_data.insertFromRight<QME_DUCR_FDCR_CAL_ADJUST_C2,
           QME_DUCR_FDCR_CAL_ADJUST_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_DUCR_FDCR_CAL_ADJUST_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DUCR_FDCR_CAL_ADJUST_C2]

//>> SET_[QME_DUCR_FDCR_CAL_ADJUST_C2]
static inline fapi2::buffer<uint64_t>& SET_QME_DUCR_FDCR_CAL_ADJUST_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return o_data.insertFromRight<QME_DUCR_FDCR_CAL_ADJUST_C2,
           QME_DUCR_FDCR_CAL_ADJUST_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_DUCR_FDCR_CAL_ADJUST_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DUCR_FDCR_CAL_ADJUST_C2]

//>> GET_[QME_DUCR_FDCR_CAL_ADJUST_C2]
static inline fapi2::buffer<uint64_t>& GET_QME_DUCR_FDCR_CAL_ADJUST_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return i_data.extractToRight<QME_DUCR_FDCR_CAL_ADJUST_C2,
           QME_DUCR_FDCR_CAL_ADJUST_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_DUCR_FDCR_CAL_ADJUST_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DUCR_FDCR_CAL_ADJUST_C2]

//>> SET_[QME_DUCR_FDCR_CAL_ADJUST_C3]
static inline fapi2::buffer<uint64_t>& SET_QME_DUCR_FDCR_CAL_ADJUST_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return o_data.insertFromRight<QME_DUCR_FDCR_CAL_ADJUST_C3,
           QME_DUCR_FDCR_CAL_ADJUST_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_DUCR_FDCR_CAL_ADJUST_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DUCR_FDCR_CAL_ADJUST_C3]

//>> SET_[QME_DUCR_FDCR_CAL_ADJUST_C3]
static inline fapi2::buffer<uint64_t>& SET_QME_DUCR_FDCR_CAL_ADJUST_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return o_data.insertFromRight<QME_DUCR_FDCR_CAL_ADJUST_C3,
           QME_DUCR_FDCR_CAL_ADJUST_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_DUCR_FDCR_CAL_ADJUST_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DUCR_FDCR_CAL_ADJUST_C3]

//>> GET_[QME_DUCR_FDCR_CAL_ADJUST_C3]
static inline fapi2::buffer<uint64_t>& GET_QME_DUCR_FDCR_CAL_ADJUST_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return i_data.extractToRight<QME_DUCR_FDCR_CAL_ADJUST_C3,
           QME_DUCR_FDCR_CAL_ADJUST_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_DUCR_FDCR_CAL_ADJUST_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DUCR_FDCR_CAL_ADJUST_C3]

//>> SET_[QME_DUCR_CORE_UPDATE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_DUCR_CORE_UPDATE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return o_data.insertFromRight<QME_DUCR_CORE_UPDATE_ENABLE,
           QME_DUCR_CORE_UPDATE_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_DUCR_CORE_UPDATE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DUCR_CORE_UPDATE_ENABLE]

//>> SET_[QME_DUCR_CORE_UPDATE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_DUCR_CORE_UPDATE_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return o_data.insertFromRight<QME_DUCR_CORE_UPDATE_ENABLE,
           QME_DUCR_CORE_UPDATE_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_DUCR_CORE_UPDATE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DUCR_CORE_UPDATE_ENABLE]

//>> GET_[QME_DUCR_CORE_UPDATE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_DUCR_CORE_UPDATE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return i_data.extractToRight<QME_DUCR_CORE_UPDATE_ENABLE,
           QME_DUCR_CORE_UPDATE_ENABLE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_DUCR_CORE_UPDATE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DUCR_CORE_UPDATE_ENABLE]

//>> SET_[QME_DUCR_RESERVED_44_63]
static inline fapi2::buffer<uint64_t>& SET_QME_DUCR_RESERVED_44_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return o_data.insertFromRight<QME_DUCR_RESERVED_44_63,
           QME_DUCR_RESERVED_44_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_DUCR_RESERVED_44_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DUCR_RESERVED_44_63]

//>> SET_[QME_DUCR_RESERVED_44_63]
static inline fapi2::buffer<uint64_t>& SET_QME_DUCR_RESERVED_44_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return o_data.insertFromRight<QME_DUCR_RESERVED_44_63,
           QME_DUCR_RESERVED_44_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_DUCR_RESERVED_44_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DUCR_RESERVED_44_63]

//>> GET_[QME_DUCR_RESERVED_44_63]
static inline fapi2::buffer<uint64_t>& GET_QME_DUCR_RESERVED_44_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DUCR));
#endif
    return i_data.extractToRight<QME_DUCR_RESERVED_44_63,
           QME_DUCR_RESERVED_44_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_DUCR_RESERVED_44_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DUCR_RESERVED_44_63]

//>> PREP_[QME_EISR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_EISR_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EISR_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_EISR_RW]

//>> GET_[QME_EISR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_EISR_RW(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EISR_RW;
#endif
    return fapi2::getScom(i_target, QME_EISR_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_EISR_RW]

//>> PUT_[QME_EISR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_EISR_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_EISR_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_EISR_RW]

//>> PREP_[QME_EISR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_EISR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EISR_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_EISR_WO_CLEAR]

//>> GET_[QME_EISR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_EISR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EISR_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, QME_EISR_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_EISR_WO_CLEAR]

//>> PUT_[QME_EISR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_EISR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_EISR_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_EISR_WO_CLEAR]

//>> PREP_[QME_EISR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_EISR_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EISR_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_EISR_WO_OR]

//>> GET_[QME_EISR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_EISR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EISR_WO_OR;
#endif
    return fapi2::getScom(i_target, QME_EISR_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_EISR_WO_OR]

//>> PUT_[QME_EISR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_EISR_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_EISR_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_EISR_WO_OR]


//>> SET_[QME_EISR_DEBUGGER]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_DEBUGGER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_DEBUGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_DEBUGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_DEBUGGER]

//>> SET_[QME_EISR_DEBUGGER]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_DEBUGGER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_DEBUGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_DEBUGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_DEBUGGER]

//>> SET_[QME_EISR_DEBUGGER]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_DEBUGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.setBit<QME_EISR_DEBUGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_EISR_DEBUGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_DEBUGGER]

//>> CLEAR_[QME_EISR_DEBUGGER]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_EISR_DEBUGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.clearBit<QME_EISR_DEBUGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_EISR_DEBUGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_EISR_DEBUGGER]

//>> GET_[QME_EISR_DEBUGGER]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_DEBUGGER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_DEBUGGER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_DEBUGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_DEBUGGER]

//>> GET_[QME_EISR_DEBUGGER]
static inline bool GET_QME_EISR_DEBUGGER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.getBit<QME_EISR_DEBUGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_EISR_DEBUGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_DEBUGGER]

//>> SET_[QME_EISR_DEBUG_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_DEBUG_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_DEBUG_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_DEBUG_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_DEBUG_TRIGGER]

//>> SET_[QME_EISR_DEBUG_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_DEBUG_TRIGGER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_DEBUG_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_DEBUG_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_DEBUG_TRIGGER]

//>> SET_[QME_EISR_DEBUG_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_DEBUG_TRIGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.setBit<QME_EISR_DEBUG_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_EISR_DEBUG_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_DEBUG_TRIGGER]

//>> CLEAR_[QME_EISR_DEBUG_TRIGGER]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_EISR_DEBUG_TRIGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.clearBit<QME_EISR_DEBUG_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_EISR_DEBUG_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_EISR_DEBUG_TRIGGER]

//>> GET_[QME_EISR_DEBUG_TRIGGER]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_DEBUG_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_DEBUG_TRIGGER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_DEBUG_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_DEBUG_TRIGGER]

//>> GET_[QME_EISR_DEBUG_TRIGGER]
static inline bool GET_QME_EISR_DEBUG_TRIGGER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.getBit<QME_EISR_DEBUG_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_EISR_DEBUG_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_DEBUG_TRIGGER]

//>> SET_[QME_EISR_SYSTEM_CHECKSTOP]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_SYSTEM_CHECKSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_SYSTEM_CHECKSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_SYSTEM_CHECKSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_SYSTEM_CHECKSTOP]

//>> SET_[QME_EISR_SYSTEM_CHECKSTOP]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_SYSTEM_CHECKSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_SYSTEM_CHECKSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_SYSTEM_CHECKSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_SYSTEM_CHECKSTOP]

//>> SET_[QME_EISR_SYSTEM_CHECKSTOP]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_SYSTEM_CHECKSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.setBit<QME_EISR_SYSTEM_CHECKSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_EISR_SYSTEM_CHECKSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_SYSTEM_CHECKSTOP]

//>> CLEAR_[QME_EISR_SYSTEM_CHECKSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_EISR_SYSTEM_CHECKSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.clearBit<QME_EISR_SYSTEM_CHECKSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_EISR_SYSTEM_CHECKSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_EISR_SYSTEM_CHECKSTOP]

//>> GET_[QME_EISR_SYSTEM_CHECKSTOP]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_SYSTEM_CHECKSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_SYSTEM_CHECKSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_SYSTEM_CHECKSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_SYSTEM_CHECKSTOP]

//>> GET_[QME_EISR_SYSTEM_CHECKSTOP]
static inline bool GET_QME_EISR_SYSTEM_CHECKSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.getBit<QME_EISR_SYSTEM_CHECKSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_EISR_SYSTEM_CHECKSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_SYSTEM_CHECKSTOP]

//>> SET_[QME_EISR_LFIR_INDICATION]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_LFIR_INDICATION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_LFIR_INDICATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_LFIR_INDICATION chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_LFIR_INDICATION]

//>> SET_[QME_EISR_LFIR_INDICATION]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_LFIR_INDICATION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_LFIR_INDICATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_LFIR_INDICATION chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_LFIR_INDICATION]

//>> SET_[QME_EISR_LFIR_INDICATION]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_LFIR_INDICATION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.setBit<QME_EISR_LFIR_INDICATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_EISR_LFIR_INDICATION chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_LFIR_INDICATION]

//>> CLEAR_[QME_EISR_LFIR_INDICATION]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_EISR_LFIR_INDICATION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.clearBit<QME_EISR_LFIR_INDICATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_EISR_LFIR_INDICATION chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_EISR_LFIR_INDICATION]

//>> GET_[QME_EISR_LFIR_INDICATION]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_LFIR_INDICATION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_LFIR_INDICATION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_LFIR_INDICATION chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_LFIR_INDICATION]

//>> GET_[QME_EISR_LFIR_INDICATION]
static inline bool GET_QME_EISR_LFIR_INDICATION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.getBit<QME_EISR_LFIR_INDICATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_EISR_LFIR_INDICATION chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_LFIR_INDICATION]

//>> SET_[QME_EISR_QOS_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_QOS_UPDATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_QOS_UPDATE,
           QME_EISR_QOS_UPDATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_QOS_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_QOS_UPDATE]

//>> SET_[QME_EISR_QOS_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_QOS_UPDATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_QOS_UPDATE,
           QME_EISR_QOS_UPDATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_QOS_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_QOS_UPDATE]

//>> GET_[QME_EISR_QOS_UPDATE]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_QOS_UPDATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_QOS_UPDATE,
           QME_EISR_QOS_UPDATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_QOS_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_QOS_UPDATE]

//>> SET_[QME_EISR_BCE_BUSY]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_BCE_BUSY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_BCE_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_BCE_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_BCE_BUSY]

//>> SET_[QME_EISR_BCE_BUSY]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_BCE_BUSY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_BCE_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_BCE_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_BCE_BUSY]

//>> SET_[QME_EISR_BCE_BUSY]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_BCE_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.setBit<QME_EISR_BCE_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_EISR_BCE_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_BCE_BUSY]

//>> CLEAR_[QME_EISR_BCE_BUSY]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_EISR_BCE_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.clearBit<QME_EISR_BCE_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_EISR_BCE_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_EISR_BCE_BUSY]

//>> GET_[QME_EISR_BCE_BUSY]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_BCE_BUSY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_BCE_BUSY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_BCE_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_BCE_BUSY]

//>> GET_[QME_EISR_BCE_BUSY]
static inline bool GET_QME_EISR_BCE_BUSY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.getBit<QME_EISR_BCE_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_EISR_BCE_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_BCE_BUSY]

//>> SET_[QME_EISR_RS4_BUSY]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_RS4_BUSY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_RS4_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_RS4_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_RS4_BUSY]

//>> SET_[QME_EISR_RS4_BUSY]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_RS4_BUSY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_RS4_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_RS4_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_RS4_BUSY]

//>> SET_[QME_EISR_RS4_BUSY]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_RS4_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.setBit<QME_EISR_RS4_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_EISR_RS4_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_RS4_BUSY]

//>> CLEAR_[QME_EISR_RS4_BUSY]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_EISR_RS4_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.clearBit<QME_EISR_RS4_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_EISR_RS4_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_EISR_RS4_BUSY]

//>> GET_[QME_EISR_RS4_BUSY]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_RS4_BUSY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_RS4_BUSY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_RS4_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_RS4_BUSY]

//>> GET_[QME_EISR_RS4_BUSY]
static inline bool GET_QME_EISR_RS4_BUSY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.getBit<QME_EISR_RS4_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_EISR_RS4_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_RS4_BUSY]

//>> SET_[QME_EISR_RESCLK_TARGET_ASSIST]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_RESCLK_TARGET_ASSIST(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_RESCLK_TARGET_ASSIST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_RESCLK_TARGET_ASSIST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_RESCLK_TARGET_ASSIST]

//>> SET_[QME_EISR_RESCLK_TARGET_ASSIST]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_RESCLK_TARGET_ASSIST(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_RESCLK_TARGET_ASSIST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_RESCLK_TARGET_ASSIST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_RESCLK_TARGET_ASSIST]

//>> SET_[QME_EISR_RESCLK_TARGET_ASSIST]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_RESCLK_TARGET_ASSIST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.setBit<QME_EISR_RESCLK_TARGET_ASSIST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_EISR_RESCLK_TARGET_ASSIST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_RESCLK_TARGET_ASSIST]

//>> CLEAR_[QME_EISR_RESCLK_TARGET_ASSIST]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_EISR_RESCLK_TARGET_ASSIST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.clearBit<QME_EISR_RESCLK_TARGET_ASSIST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_EISR_RESCLK_TARGET_ASSIST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_EISR_RESCLK_TARGET_ASSIST]

//>> GET_[QME_EISR_RESCLK_TARGET_ASSIST]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_RESCLK_TARGET_ASSIST(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_RESCLK_TARGET_ASSIST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_RESCLK_TARGET_ASSIST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_RESCLK_TARGET_ASSIST]

//>> GET_[QME_EISR_RESCLK_TARGET_ASSIST]
static inline bool GET_QME_EISR_RESCLK_TARGET_ASSIST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.getBit<QME_EISR_RESCLK_TARGET_ASSIST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_EISR_RESCLK_TARGET_ASSIST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_RESCLK_TARGET_ASSIST]

//>> SET_[QME_EISR_RESCLK_DONE_ASSIST]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_RESCLK_DONE_ASSIST(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_RESCLK_DONE_ASSIST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_RESCLK_DONE_ASSIST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_RESCLK_DONE_ASSIST]

//>> SET_[QME_EISR_RESCLK_DONE_ASSIST]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_RESCLK_DONE_ASSIST(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_RESCLK_DONE_ASSIST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_RESCLK_DONE_ASSIST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_RESCLK_DONE_ASSIST]

//>> SET_[QME_EISR_RESCLK_DONE_ASSIST]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_RESCLK_DONE_ASSIST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.setBit<QME_EISR_RESCLK_DONE_ASSIST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_EISR_RESCLK_DONE_ASSIST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_RESCLK_DONE_ASSIST]

//>> CLEAR_[QME_EISR_RESCLK_DONE_ASSIST]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_EISR_RESCLK_DONE_ASSIST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.clearBit<QME_EISR_RESCLK_DONE_ASSIST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_EISR_RESCLK_DONE_ASSIST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_EISR_RESCLK_DONE_ASSIST]

//>> GET_[QME_EISR_RESCLK_DONE_ASSIST]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_RESCLK_DONE_ASSIST(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_RESCLK_DONE_ASSIST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_RESCLK_DONE_ASSIST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_RESCLK_DONE_ASSIST]

//>> GET_[QME_EISR_RESCLK_DONE_ASSIST]
static inline bool GET_QME_EISR_RESCLK_DONE_ASSIST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.getBit<QME_EISR_RESCLK_DONE_ASSIST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_EISR_RESCLK_DONE_ASSIST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_RESCLK_DONE_ASSIST]

//>> SET_[QME_EISR_PITCH_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_PITCH_UPDATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_PITCH_UPDATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_PITCH_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_PITCH_UPDATE]

//>> SET_[QME_EISR_PITCH_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_PITCH_UPDATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_PITCH_UPDATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_PITCH_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_PITCH_UPDATE]

//>> SET_[QME_EISR_PITCH_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_PITCH_UPDATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.setBit<QME_EISR_PITCH_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_EISR_PITCH_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_PITCH_UPDATE]

//>> CLEAR_[QME_EISR_PITCH_UPDATE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_EISR_PITCH_UPDATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.clearBit<QME_EISR_PITCH_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_EISR_PITCH_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_EISR_PITCH_UPDATE]

//>> GET_[QME_EISR_PITCH_UPDATE]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_PITCH_UPDATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_PITCH_UPDATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_PITCH_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_PITCH_UPDATE]

//>> GET_[QME_EISR_PITCH_UPDATE]
static inline bool GET_QME_EISR_PITCH_UPDATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.getBit<QME_EISR_PITCH_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_EISR_PITCH_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_PITCH_UPDATE]

//>> SET_[QME_EISR_WOCR_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_WOCR_UPDATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_WOCR_UPDATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_WOCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_WOCR_UPDATE]

//>> SET_[QME_EISR_WOCR_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_WOCR_UPDATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_WOCR_UPDATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_WOCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_WOCR_UPDATE]

//>> SET_[QME_EISR_WOCR_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_WOCR_UPDATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.setBit<QME_EISR_WOCR_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_EISR_WOCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_WOCR_UPDATE]

//>> CLEAR_[QME_EISR_WOCR_UPDATE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_EISR_WOCR_UPDATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.clearBit<QME_EISR_WOCR_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_EISR_WOCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_EISR_WOCR_UPDATE]

//>> GET_[QME_EISR_WOCR_UPDATE]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_WOCR_UPDATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_WOCR_UPDATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_WOCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_WOCR_UPDATE]

//>> GET_[QME_EISR_WOCR_UPDATE]
static inline bool GET_QME_EISR_WOCR_UPDATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.getBit<QME_EISR_WOCR_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_EISR_WOCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_WOCR_UPDATE]

//>> SET_[QME_EISR_TBR_CYCLES_ROLLED]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_TBR_CYCLES_ROLLED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_TBR_CYCLES_ROLLED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_TBR_CYCLES_ROLLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_TBR_CYCLES_ROLLED]

//>> SET_[QME_EISR_TBR_CYCLES_ROLLED]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_TBR_CYCLES_ROLLED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_TBR_CYCLES_ROLLED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_TBR_CYCLES_ROLLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_TBR_CYCLES_ROLLED]

//>> SET_[QME_EISR_TBR_CYCLES_ROLLED]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_TBR_CYCLES_ROLLED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.setBit<QME_EISR_TBR_CYCLES_ROLLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_EISR_TBR_CYCLES_ROLLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_TBR_CYCLES_ROLLED]

//>> CLEAR_[QME_EISR_TBR_CYCLES_ROLLED]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_EISR_TBR_CYCLES_ROLLED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.clearBit<QME_EISR_TBR_CYCLES_ROLLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_EISR_TBR_CYCLES_ROLLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_EISR_TBR_CYCLES_ROLLED]

//>> GET_[QME_EISR_TBR_CYCLES_ROLLED]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_TBR_CYCLES_ROLLED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_TBR_CYCLES_ROLLED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_TBR_CYCLES_ROLLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_TBR_CYCLES_ROLLED]

//>> GET_[QME_EISR_TBR_CYCLES_ROLLED]
static inline bool GET_QME_EISR_TBR_CYCLES_ROLLED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.getBit<QME_EISR_TBR_CYCLES_ROLLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_EISR_TBR_CYCLES_ROLLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_TBR_CYCLES_ROLLED]

//>> SET_[QME_EISR_TBR_TIMEBASE_ROLLED]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_TBR_TIMEBASE_ROLLED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_TBR_TIMEBASE_ROLLED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_TBR_TIMEBASE_ROLLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_TBR_TIMEBASE_ROLLED]

//>> SET_[QME_EISR_TBR_TIMEBASE_ROLLED]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_TBR_TIMEBASE_ROLLED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_TBR_TIMEBASE_ROLLED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_TBR_TIMEBASE_ROLLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_TBR_TIMEBASE_ROLLED]

//>> SET_[QME_EISR_TBR_TIMEBASE_ROLLED]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_TBR_TIMEBASE_ROLLED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.setBit<QME_EISR_TBR_TIMEBASE_ROLLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_EISR_TBR_TIMEBASE_ROLLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_TBR_TIMEBASE_ROLLED]

//>> CLEAR_[QME_EISR_TBR_TIMEBASE_ROLLED]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_EISR_TBR_TIMEBASE_ROLLED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.clearBit<QME_EISR_TBR_TIMEBASE_ROLLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_EISR_TBR_TIMEBASE_ROLLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_EISR_TBR_TIMEBASE_ROLLED]

//>> GET_[QME_EISR_TBR_TIMEBASE_ROLLED]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_TBR_TIMEBASE_ROLLED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_TBR_TIMEBASE_ROLLED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_TBR_TIMEBASE_ROLLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_TBR_TIMEBASE_ROLLED]

//>> GET_[QME_EISR_TBR_TIMEBASE_ROLLED]
static inline bool GET_QME_EISR_TBR_TIMEBASE_ROLLED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.getBit<QME_EISR_TBR_TIMEBASE_ROLLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_EISR_TBR_TIMEBASE_ROLLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_TBR_TIMEBASE_ROLLED]

//>> SET_[QME_EISR_DOORBELL_0]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_DOORBELL_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_DOORBELL_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_DOORBELL_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_DOORBELL_0]

//>> SET_[QME_EISR_DOORBELL_0]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_DOORBELL_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_DOORBELL_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_DOORBELL_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_DOORBELL_0]

//>> SET_[QME_EISR_DOORBELL_0]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_DOORBELL_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.setBit<QME_EISR_DOORBELL_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_EISR_DOORBELL_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_DOORBELL_0]

//>> CLEAR_[QME_EISR_DOORBELL_0]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_EISR_DOORBELL_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.clearBit<QME_EISR_DOORBELL_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_EISR_DOORBELL_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_EISR_DOORBELL_0]

//>> GET_[QME_EISR_DOORBELL_0]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_DOORBELL_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_DOORBELL_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_DOORBELL_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_DOORBELL_0]

//>> GET_[QME_EISR_DOORBELL_0]
static inline bool GET_QME_EISR_DOORBELL_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.getBit<QME_EISR_DOORBELL_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_EISR_DOORBELL_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_DOORBELL_0]

//>> SET_[QME_EISR_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_DOORBELL_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_DOORBELL_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_DOORBELL_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_DOORBELL_1]

//>> SET_[QME_EISR_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_DOORBELL_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_DOORBELL_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_DOORBELL_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_DOORBELL_1]

//>> SET_[QME_EISR_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_DOORBELL_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.setBit<QME_EISR_DOORBELL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_EISR_DOORBELL_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_DOORBELL_1]

//>> CLEAR_[QME_EISR_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_EISR_DOORBELL_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.clearBit<QME_EISR_DOORBELL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_EISR_DOORBELL_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_EISR_DOORBELL_1]

//>> GET_[QME_EISR_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_DOORBELL_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_DOORBELL_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_DOORBELL_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_DOORBELL_1]

//>> GET_[QME_EISR_DOORBELL_1]
static inline bool GET_QME_EISR_DOORBELL_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.getBit<QME_EISR_DOORBELL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_EISR_DOORBELL_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_DOORBELL_1]

//>> SET_[QME_EISR_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_DOORBELL_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_DOORBELL_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_DOORBELL_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_DOORBELL_2]

//>> SET_[QME_EISR_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_DOORBELL_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_DOORBELL_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_DOORBELL_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_DOORBELL_2]

//>> SET_[QME_EISR_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_DOORBELL_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.setBit<QME_EISR_DOORBELL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_EISR_DOORBELL_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_DOORBELL_2]

//>> CLEAR_[QME_EISR_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_EISR_DOORBELL_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.clearBit<QME_EISR_DOORBELL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_EISR_DOORBELL_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_EISR_DOORBELL_2]

//>> GET_[QME_EISR_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_DOORBELL_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_DOORBELL_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_DOORBELL_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_DOORBELL_2]

//>> GET_[QME_EISR_DOORBELL_2]
static inline bool GET_QME_EISR_DOORBELL_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.getBit<QME_EISR_DOORBELL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_EISR_DOORBELL_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_DOORBELL_2]

//>> SET_[QME_EISR_PMCR_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_PMCR_UPDATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_PMCR_UPDATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_PMCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_PMCR_UPDATE]

//>> SET_[QME_EISR_PMCR_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_PMCR_UPDATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_PMCR_UPDATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_PMCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_PMCR_UPDATE]

//>> SET_[QME_EISR_PMCR_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_PMCR_UPDATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.setBit<QME_EISR_PMCR_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_EISR_PMCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_PMCR_UPDATE]

//>> CLEAR_[QME_EISR_PMCR_UPDATE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_EISR_PMCR_UPDATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.clearBit<QME_EISR_PMCR_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_EISR_PMCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_EISR_PMCR_UPDATE]

//>> GET_[QME_EISR_PMCR_UPDATE]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_PMCR_UPDATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_PMCR_UPDATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_PMCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_PMCR_UPDATE]

//>> GET_[QME_EISR_PMCR_UPDATE]
static inline bool GET_QME_EISR_PMCR_UPDATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.getBit<QME_EISR_PMCR_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_EISR_PMCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_PMCR_UPDATE]

//>> SET_[QME_EISR_DOORBELL_A]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_DOORBELL_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_DOORBELL_A,
           QME_EISR_DOORBELL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_DOORBELL_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_DOORBELL_A]

//>> SET_[QME_EISR_DOORBELL_A]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_DOORBELL_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_DOORBELL_A,
           QME_EISR_DOORBELL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_DOORBELL_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_DOORBELL_A]

//>> GET_[QME_EISR_DOORBELL_A]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_DOORBELL_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_DOORBELL_A,
           QME_EISR_DOORBELL_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_DOORBELL_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_DOORBELL_A]

//>> SET_[P10_20_QME_EISR_DOORBELL_3]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_EISR_DOORBELL_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<P10_20_QME_EISR_DOORBELL_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access P10_20_QME_EISR_DOORBELL_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_EISR_DOORBELL_3]

//>> SET_[P10_20_QME_EISR_DOORBELL_3]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_EISR_DOORBELL_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<P10_20_QME_EISR_DOORBELL_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access P10_20_QME_EISR_DOORBELL_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_EISR_DOORBELL_3]

//>> SET_[P10_20_QME_EISR_DOORBELL_3]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_EISR_DOORBELL_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.setBit<P10_20_QME_EISR_DOORBELL_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access P10_20_QME_EISR_DOORBELL_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_EISR_DOORBELL_3]

//>> CLEAR_[P10_20_QME_EISR_DOORBELL_3]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_QME_EISR_DOORBELL_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.clearBit<P10_20_QME_EISR_DOORBELL_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access P10_20_QME_EISR_DOORBELL_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_QME_EISR_DOORBELL_3]

//>> GET_[P10_20_QME_EISR_DOORBELL_3]
static inline fapi2::buffer<uint64_t>& GET_P10_20_QME_EISR_DOORBELL_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<P10_20_QME_EISR_DOORBELL_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access P10_20_QME_EISR_DOORBELL_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_EISR_DOORBELL_3]

//>> GET_[P10_20_QME_EISR_DOORBELL_3]
static inline bool GET_P10_20_QME_EISR_DOORBELL_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.getBit<P10_20_QME_EISR_DOORBELL_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access P10_20_QME_EISR_DOORBELL_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_EISR_DOORBELL_3]

//>> SET_[P10_20_QME_EISR_DOORBELL_4]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_EISR_DOORBELL_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<P10_20_QME_EISR_DOORBELL_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access P10_20_QME_EISR_DOORBELL_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_EISR_DOORBELL_4]

//>> SET_[P10_20_QME_EISR_DOORBELL_4]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_EISR_DOORBELL_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<P10_20_QME_EISR_DOORBELL_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access P10_20_QME_EISR_DOORBELL_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_EISR_DOORBELL_4]

//>> SET_[P10_20_QME_EISR_DOORBELL_4]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_EISR_DOORBELL_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.setBit<P10_20_QME_EISR_DOORBELL_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access P10_20_QME_EISR_DOORBELL_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_EISR_DOORBELL_4]

//>> CLEAR_[P10_20_QME_EISR_DOORBELL_4]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_QME_EISR_DOORBELL_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.clearBit<P10_20_QME_EISR_DOORBELL_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access P10_20_QME_EISR_DOORBELL_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_QME_EISR_DOORBELL_4]

//>> GET_[P10_20_QME_EISR_DOORBELL_4]
static inline fapi2::buffer<uint64_t>& GET_P10_20_QME_EISR_DOORBELL_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<P10_20_QME_EISR_DOORBELL_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access P10_20_QME_EISR_DOORBELL_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_EISR_DOORBELL_4]

//>> GET_[P10_20_QME_EISR_DOORBELL_4]
static inline bool GET_P10_20_QME_EISR_DOORBELL_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.getBit<P10_20_QME_EISR_DOORBELL_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access P10_20_QME_EISR_DOORBELL_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_EISR_DOORBELL_4]

//>> SET_[P10_20_QME_EISR_SPAREA]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_EISR_SPAREA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<P10_20_QME_EISR_SPAREA,
           P10_20_QME_EISR_SPAREA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access P10_20_QME_EISR_SPAREA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_EISR_SPAREA]

//>> SET_[P10_20_QME_EISR_SPAREA]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_EISR_SPAREA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<P10_20_QME_EISR_SPAREA,
           P10_20_QME_EISR_SPAREA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access P10_20_QME_EISR_SPAREA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_EISR_SPAREA]

//>> GET_[P10_20_QME_EISR_SPAREA]
static inline fapi2::buffer<uint64_t>& GET_P10_20_QME_EISR_SPAREA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<P10_20_QME_EISR_SPAREA,
           P10_20_QME_EISR_SPAREA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access P10_20_QME_EISR_SPAREA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_EISR_SPAREA]

//>> SET_[QME_EISR_DOORBELL_B]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_DOORBELL_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_DOORBELL_B,
           QME_EISR_DOORBELL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_DOORBELL_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_DOORBELL_B]

//>> SET_[QME_EISR_DOORBELL_B]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_DOORBELL_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_DOORBELL_B,
           QME_EISR_DOORBELL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_DOORBELL_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_DOORBELL_B]

//>> GET_[QME_EISR_DOORBELL_B]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_DOORBELL_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_DOORBELL_B,
           QME_EISR_DOORBELL_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_DOORBELL_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_DOORBELL_B]

//>> SET_[P10_20_QME_EISR_SPAREB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_EISR_SPAREB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<P10_20_QME_EISR_SPAREB,
           P10_20_QME_EISR_SPAREB_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access P10_20_QME_EISR_SPAREB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_EISR_SPAREB]

//>> SET_[P10_20_QME_EISR_SPAREB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_EISR_SPAREB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<P10_20_QME_EISR_SPAREB,
           P10_20_QME_EISR_SPAREB_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access P10_20_QME_EISR_SPAREB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_EISR_SPAREB]

//>> GET_[P10_20_QME_EISR_SPAREB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_QME_EISR_SPAREB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<P10_20_QME_EISR_SPAREB,
           P10_20_QME_EISR_SPAREB_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access P10_20_QME_EISR_SPAREB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_EISR_SPAREB]

//>> SET_[QME_EISR_MMA_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_MMA_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_MMA_ACTIVE,
           QME_EISR_MMA_ACTIVE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_MMA_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_MMA_ACTIVE]

//>> SET_[QME_EISR_MMA_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_MMA_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_MMA_ACTIVE,
           QME_EISR_MMA_ACTIVE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_MMA_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_MMA_ACTIVE]

//>> GET_[QME_EISR_MMA_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_MMA_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_MMA_ACTIVE,
           QME_EISR_MMA_ACTIVE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_MMA_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_MMA_ACTIVE]

//>> SET_[QME_EISR_SPC_WKUP_RISE]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_SPC_WKUP_RISE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_SPC_WKUP_RISE,
           QME_EISR_SPC_WKUP_RISE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_SPC_WKUP_RISE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_SPC_WKUP_RISE]

//>> SET_[QME_EISR_SPC_WKUP_RISE]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_SPC_WKUP_RISE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_SPC_WKUP_RISE,
           QME_EISR_SPC_WKUP_RISE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_SPC_WKUP_RISE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_SPC_WKUP_RISE]

//>> GET_[QME_EISR_SPC_WKUP_RISE]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_SPC_WKUP_RISE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_SPC_WKUP_RISE,
           QME_EISR_SPC_WKUP_RISE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_SPC_WKUP_RISE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_SPC_WKUP_RISE]

//>> SET_[QME_EISR_SPC_WKUP_FALL]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_SPC_WKUP_FALL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_SPC_WKUP_FALL,
           QME_EISR_SPC_WKUP_FALL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_SPC_WKUP_FALL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_SPC_WKUP_FALL]

//>> SET_[QME_EISR_SPC_WKUP_FALL]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_SPC_WKUP_FALL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_SPC_WKUP_FALL,
           QME_EISR_SPC_WKUP_FALL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_SPC_WKUP_FALL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_SPC_WKUP_FALL]

//>> GET_[QME_EISR_SPC_WKUP_FALL]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_SPC_WKUP_FALL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_SPC_WKUP_FALL,
           QME_EISR_SPC_WKUP_FALL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_SPC_WKUP_FALL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_SPC_WKUP_FALL]

//>> SET_[QME_EISR_REG_WKUP_HIPRI]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_REG_WKUP_HIPRI(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_REG_WKUP_HIPRI,
           QME_EISR_REG_WKUP_HIPRI_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_REG_WKUP_HIPRI chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_REG_WKUP_HIPRI]

//>> SET_[QME_EISR_REG_WKUP_HIPRI]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_REG_WKUP_HIPRI(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_REG_WKUP_HIPRI,
           QME_EISR_REG_WKUP_HIPRI_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_REG_WKUP_HIPRI chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_REG_WKUP_HIPRI]

//>> GET_[QME_EISR_REG_WKUP_HIPRI]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_REG_WKUP_HIPRI(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_REG_WKUP_HIPRI,
           QME_EISR_REG_WKUP_HIPRI_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_REG_WKUP_HIPRI chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_REG_WKUP_HIPRI]

//>> SET_[QME_EISR_REG_WKUP_LOPRI]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_REG_WKUP_LOPRI(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_REG_WKUP_LOPRI,
           QME_EISR_REG_WKUP_LOPRI_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_REG_WKUP_LOPRI chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_REG_WKUP_LOPRI]

//>> SET_[QME_EISR_REG_WKUP_LOPRI]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_REG_WKUP_LOPRI(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_REG_WKUP_LOPRI,
           QME_EISR_REG_WKUP_LOPRI_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_REG_WKUP_LOPRI chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_REG_WKUP_LOPRI]

//>> GET_[QME_EISR_REG_WKUP_LOPRI]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_REG_WKUP_LOPRI(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_REG_WKUP_LOPRI,
           QME_EISR_REG_WKUP_LOPRI_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_REG_WKUP_LOPRI chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_REG_WKUP_LOPRI]

//>> SET_[QME_EISR_PM_STATE_ACTIVE_HIPRI]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_PM_STATE_ACTIVE_HIPRI(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_PM_STATE_ACTIVE_HIPRI,
           QME_EISR_PM_STATE_ACTIVE_HIPRI_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_PM_STATE_ACTIVE_HIPRI chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_PM_STATE_ACTIVE_HIPRI]

//>> SET_[QME_EISR_PM_STATE_ACTIVE_HIPRI]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_PM_STATE_ACTIVE_HIPRI(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_PM_STATE_ACTIVE_HIPRI,
           QME_EISR_PM_STATE_ACTIVE_HIPRI_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_PM_STATE_ACTIVE_HIPRI chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_PM_STATE_ACTIVE_HIPRI]

//>> GET_[QME_EISR_PM_STATE_ACTIVE_HIPRI]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_PM_STATE_ACTIVE_HIPRI(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_PM_STATE_ACTIVE_HIPRI,
           QME_EISR_PM_STATE_ACTIVE_HIPRI_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_PM_STATE_ACTIVE_HIPRI chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_PM_STATE_ACTIVE_HIPRI]

//>> SET_[QME_EISR_PM_STATE_ACTIVE_LOPRI]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_PM_STATE_ACTIVE_LOPRI(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_PM_STATE_ACTIVE_LOPRI,
           QME_EISR_PM_STATE_ACTIVE_LOPRI_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_PM_STATE_ACTIVE_LOPRI chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_PM_STATE_ACTIVE_LOPRI]

//>> SET_[QME_EISR_PM_STATE_ACTIVE_LOPRI]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_PM_STATE_ACTIVE_LOPRI(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_PM_STATE_ACTIVE_LOPRI,
           QME_EISR_PM_STATE_ACTIVE_LOPRI_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_PM_STATE_ACTIVE_LOPRI chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_PM_STATE_ACTIVE_LOPRI]

//>> GET_[QME_EISR_PM_STATE_ACTIVE_LOPRI]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_PM_STATE_ACTIVE_LOPRI(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_PM_STATE_ACTIVE_LOPRI,
           QME_EISR_PM_STATE_ACTIVE_LOPRI_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_PM_STATE_ACTIVE_LOPRI chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_PM_STATE_ACTIVE_LOPRI]

//>> SET_[QME_EISR_CPMS_INTERRUPT0]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_CPMS_INTERRUPT0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_CPMS_INTERRUPT0,
           QME_EISR_CPMS_INTERRUPT0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_CPMS_INTERRUPT0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_CPMS_INTERRUPT0]

//>> SET_[QME_EISR_CPMS_INTERRUPT0]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_CPMS_INTERRUPT0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_CPMS_INTERRUPT0,
           QME_EISR_CPMS_INTERRUPT0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_CPMS_INTERRUPT0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_CPMS_INTERRUPT0]

//>> GET_[QME_EISR_CPMS_INTERRUPT0]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_CPMS_INTERRUPT0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_CPMS_INTERRUPT0,
           QME_EISR_CPMS_INTERRUPT0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_CPMS_INTERRUPT0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_CPMS_INTERRUPT0]

//>> SET_[QME_EISR_CPMS_INTERRUPT1]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_CPMS_INTERRUPT1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_CPMS_INTERRUPT1,
           QME_EISR_CPMS_INTERRUPT1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_EISR_CPMS_INTERRUPT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_CPMS_INTERRUPT1]

//>> SET_[QME_EISR_CPMS_INTERRUPT1]
static inline fapi2::buffer<uint64_t>& SET_QME_EISR_CPMS_INTERRUPT1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EISR_CPMS_INTERRUPT1,
           QME_EISR_CPMS_INTERRUPT1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_EISR_CPMS_INTERRUPT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_EISR_CPMS_INTERRUPT1]

//>> GET_[QME_EISR_CPMS_INTERRUPT1]
static inline fapi2::buffer<uint64_t>& GET_QME_EISR_CPMS_INTERRUPT1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EISR_RW, QME_EISR_WO_CLEAR, QME_EISR_WO_OR));
#endif
    return i_data.extractToRight<QME_EISR_CPMS_INTERRUPT1,
           QME_EISR_CPMS_INTERRUPT1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_EISR_CPMS_INTERRUPT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_EISR_CPMS_INTERRUPT1]

//>> PREP_[QME_LFIRACT1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_LFIRACT1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIRACT1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_LFIRACT1]

//>> GET_[QME_LFIRACT1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_LFIRACT1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIRACT1;
#endif
    return fapi2::getScom(i_target, QME_LFIRACT1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_LFIRACT1]

//>> PUT_[QME_LFIRACT1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_LFIRACT1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_LFIRACT1));
#endif
    return fapi2::putScom(i_target, QME_LFIRACT1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_LFIRACT1]


//>> SET_[QME_LFIRACT1_FIR_ACTION1]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIRACT1_FIR_ACTION1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIRACT1));
#endif
    return o_data.insertFromRight<QME_LFIRACT1_FIR_ACTION1,
           QME_LFIRACT1_FIR_ACTION1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_LFIRACT1_FIR_ACTION1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIRACT1_FIR_ACTION1]

//>> SET_[QME_LFIRACT1_FIR_ACTION1]
static inline fapi2::buffer<uint64_t>& SET_QME_LFIRACT1_FIR_ACTION1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIRACT1));
#endif
    return o_data.insertFromRight<QME_LFIRACT1_FIR_ACTION1,
           QME_LFIRACT1_FIR_ACTION1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_LFIRACT1_FIR_ACTION1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_LFIRACT1_FIR_ACTION1]

//>> GET_[QME_LFIRACT1_FIR_ACTION1]
static inline fapi2::buffer<uint64_t>& GET_QME_LFIRACT1_FIR_ACTION1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIRACT1));
#endif
    return i_data.extractToRight<QME_LFIRACT1_FIR_ACTION1,
           QME_LFIRACT1_FIR_ACTION1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_LFIRACT1_FIR_ACTION1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_LFIRACT1_FIR_ACTION1]

//>> PREP_[QME_SCRB_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_SCRB_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCRB_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_SCRB_RW]

//>> GET_[QME_SCRB_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_SCRB_RW(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCRB_RW;
#endif
    return fapi2::getScom(i_target, QME_SCRB_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_SCRB_RW]

//>> PUT_[QME_SCRB_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_SCRB_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_SCRB_RW, QME_SCRB_WO_CLEAR, QME_SCRB_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_SCRB_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_SCRB_RW]

//>> PREP_[QME_SCRB_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_SCRB_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCRB_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_SCRB_WO_CLEAR]

//>> GET_[QME_SCRB_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_SCRB_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCRB_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, QME_SCRB_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_SCRB_WO_CLEAR]

//>> PUT_[QME_SCRB_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_SCRB_WO_CLEAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_SCRB_RW, QME_SCRB_WO_CLEAR, QME_SCRB_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_SCRB_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_SCRB_WO_CLEAR]

//>> PREP_[QME_SCRB_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_SCRB_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCRB_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_SCRB_WO_OR]

//>> GET_[QME_SCRB_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_SCRB_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCRB_WO_OR;
#endif
    return fapi2::getScom(i_target, QME_SCRB_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_SCRB_WO_OR]

//>> PUT_[QME_SCRB_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_SCRB_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_SCRB_RW, QME_SCRB_WO_CLEAR, QME_SCRB_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_SCRB_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_SCRB_WO_OR]


//>> SET_[QME_SCRB_DATA]
static inline fapi2::buffer<uint64_t>& SET_QME_SCRB_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCRB_RW, QME_SCRB_WO_CLEAR, QME_SCRB_WO_OR));
#endif
    return o_data.insertFromRight<QME_SCRB_DATA,
           QME_SCRB_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SCRB_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCRB_DATA]

//>> SET_[QME_SCRB_DATA]
static inline fapi2::buffer<uint64_t>& SET_QME_SCRB_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCRB_RW, QME_SCRB_WO_CLEAR, QME_SCRB_WO_OR));
#endif
    return o_data.insertFromRight<QME_SCRB_DATA,
           QME_SCRB_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SCRB_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCRB_DATA]

//>> GET_[QME_SCRB_DATA]
static inline fapi2::buffer<uint64_t>& GET_QME_SCRB_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCRB_RW, QME_SCRB_WO_CLEAR, QME_SCRB_WO_OR));
#endif
    return i_data.extractToRight<QME_SCRB_DATA,
           QME_SCRB_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SCRB_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCRB_DATA]

//>> PREP_[QME_THOR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_THOR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_THOR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_THOR]

//>> GET_[QME_THOR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_THOR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_THOR;
#endif
    return fapi2::getScom(i_target, QME_THOR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_THOR]

//>> PUT_[QME_THOR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_THOR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_THOR));
#endif
    return fapi2::putScom(i_target, QME_THOR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_THOR]


//>> SET_[QME_THOR_TSR_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_THOR_TSR_OVERRIDE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_THOR));
#endif
    return o_data.insertFromRight<QME_THOR_TSR_OVERRIDE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_THOR_TSR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_THOR_TSR_OVERRIDE_EN]

//>> SET_[QME_THOR_TSR_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_THOR_TSR_OVERRIDE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_THOR));
#endif
    return o_data.insertFromRight<QME_THOR_TSR_OVERRIDE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_THOR_TSR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_THOR_TSR_OVERRIDE_EN]

//>> SET_[QME_THOR_TSR_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_THOR_TSR_OVERRIDE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_THOR));
#endif
    return o_data.setBit<QME_THOR_TSR_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_THOR_TSR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_THOR_TSR_OVERRIDE_EN]

//>> CLEAR_[QME_THOR_TSR_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_THOR_TSR_OVERRIDE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_THOR));
#endif
    return o_data.clearBit<QME_THOR_TSR_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_THOR_TSR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_THOR_TSR_OVERRIDE_EN]

//>> GET_[QME_THOR_TSR_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& GET_QME_THOR_TSR_OVERRIDE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_THOR));
#endif
    return i_data.extractToRight<QME_THOR_TSR_OVERRIDE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_THOR_TSR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_THOR_TSR_OVERRIDE_EN]

//>> GET_[QME_THOR_TSR_OVERRIDE_EN]
static inline bool GET_QME_THOR_TSR_OVERRIDE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_THOR));
#endif
    return i_data.getBit<QME_THOR_TSR_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_THOR_TSR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_THOR_TSR_OVERRIDE_EN]

//>> SET_[QME_THOR_PTSR_OVERRIDE_SEL]
static inline fapi2::buffer<uint64_t>& SET_QME_THOR_PTSR_OVERRIDE_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_THOR));
#endif
    return o_data.insertFromRight<QME_THOR_PTSR_OVERRIDE_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_THOR_PTSR_OVERRIDE_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_THOR_PTSR_OVERRIDE_SEL]

//>> SET_[QME_THOR_PTSR_OVERRIDE_SEL]
static inline fapi2::buffer<uint64_t>& SET_QME_THOR_PTSR_OVERRIDE_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_THOR));
#endif
    return o_data.insertFromRight<QME_THOR_PTSR_OVERRIDE_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_THOR_PTSR_OVERRIDE_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_THOR_PTSR_OVERRIDE_SEL]

//>> SET_[QME_THOR_PTSR_OVERRIDE_SEL]
static inline fapi2::buffer<uint64_t>& SET_QME_THOR_PTSR_OVERRIDE_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_THOR));
#endif
    return o_data.setBit<QME_THOR_PTSR_OVERRIDE_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_THOR_PTSR_OVERRIDE_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_THOR_PTSR_OVERRIDE_SEL]

//>> CLEAR_[QME_THOR_PTSR_OVERRIDE_SEL]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_THOR_PTSR_OVERRIDE_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_THOR));
#endif
    return o_data.clearBit<QME_THOR_PTSR_OVERRIDE_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_THOR_PTSR_OVERRIDE_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_THOR_PTSR_OVERRIDE_SEL]

//>> GET_[QME_THOR_PTSR_OVERRIDE_SEL]
static inline fapi2::buffer<uint64_t>& GET_QME_THOR_PTSR_OVERRIDE_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_THOR));
#endif
    return i_data.extractToRight<QME_THOR_PTSR_OVERRIDE_SEL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_THOR_PTSR_OVERRIDE_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_THOR_PTSR_OVERRIDE_SEL]

//>> GET_[QME_THOR_PTSR_OVERRIDE_SEL]
static inline bool GET_QME_THOR_PTSR_OVERRIDE_SEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_THOR));
#endif
    return i_data.getBit<QME_THOR_PTSR_OVERRIDE_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_THOR_PTSR_OVERRIDE_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_THOR_PTSR_OVERRIDE_SEL]

//>> SET_[QME_THOR_TSR_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& SET_QME_THOR_TSR_OVERRIDE_VAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_THOR));
#endif
    return o_data.insertFromRight<QME_THOR_TSR_OVERRIDE_VAL,
           QME_THOR_TSR_OVERRIDE_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_THOR_TSR_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_THOR_TSR_OVERRIDE_VAL]

//>> SET_[QME_THOR_TSR_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& SET_QME_THOR_TSR_OVERRIDE_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_THOR));
#endif
    return o_data.insertFromRight<QME_THOR_TSR_OVERRIDE_VAL,
           QME_THOR_TSR_OVERRIDE_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_THOR_TSR_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_THOR_TSR_OVERRIDE_VAL]

//>> GET_[QME_THOR_TSR_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& GET_QME_THOR_TSR_OVERRIDE_VAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_THOR));
#endif
    return i_data.extractToRight<QME_THOR_TSR_OVERRIDE_VAL,
           QME_THOR_TSR_OVERRIDE_VAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_THOR_TSR_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_THOR_TSR_OVERRIDE_VAL]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
