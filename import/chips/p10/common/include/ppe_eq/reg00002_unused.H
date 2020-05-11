/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_eq/reg00002_unused.H $    */
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

#ifndef __PPE_EQ_REG00002_H_UNUSED__
#define __PPE_EQ_REG00002_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


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
