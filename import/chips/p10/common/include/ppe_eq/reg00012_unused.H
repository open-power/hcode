/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_eq/reg00012_unused.H $    */
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

#ifndef __PPE_EQ_REG00012_H_UNUSED__
#define __PPE_EQ_REG00012_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


//>> PREP_[QME_PPEDBG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_PPEDBG_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PPEDBG_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_PPEDBG_RW]

//>> GET_[QME_PPEDBG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_PPEDBG_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PPEDBG_RW;
#endif
    return fapi2::getScom(i_target, QME_PPEDBG_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_PPEDBG_RW]

//>> PUT_[QME_PPEDBG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_PPEDBG_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_PPEDBG_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_PPEDBG_RW]

//>> PREP_[QME_PPEDBG_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_PPEDBG_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PPEDBG_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_PPEDBG_WO_CLEAR]

//>> GET_[QME_PPEDBG_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_PPEDBG_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PPEDBG_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, QME_PPEDBG_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_PPEDBG_WO_CLEAR]

//>> PUT_[QME_PPEDBG_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_PPEDBG_WO_CLEAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_PPEDBG_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_PPEDBG_WO_CLEAR]

//>> PREP_[QME_PPEDBG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_PPEDBG_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PPEDBG_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_PPEDBG_WO_OR]

//>> GET_[QME_PPEDBG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_PPEDBG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PPEDBG_WO_OR;
#endif
    return fapi2::getScom(i_target, QME_PPEDBG_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_PPEDBG_WO_OR]

//>> PUT_[QME_PPEDBG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_PPEDBG_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_PPEDBG_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_PPEDBG_WO_OR]


//>> SET_[QME_PPEDBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_DBG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_EN_DBG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_EN_DBG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_DBG]

//>> SET_[QME_PPEDBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_DBG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_EN_DBG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_EN_DBG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_DBG]

//>> SET_[QME_PPEDBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_DBG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.setBit<QME_PPEDBG_EN_DBG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PPEDBG_EN_DBG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_DBG]

//>> CLEAR_[QME_PPEDBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PPEDBG_EN_DBG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.clearBit<QME_PPEDBG_EN_DBG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PPEDBG_EN_DBG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PPEDBG_EN_DBG]

//>> GET_[QME_PPEDBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_EN_DBG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_EN_DBG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_EN_DBG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_EN_DBG]

//>> GET_[QME_PPEDBG_EN_DBG]
static inline bool GET_QME_PPEDBG_EN_DBG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.getBit<QME_PPEDBG_EN_DBG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PPEDBG_EN_DBG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_EN_DBG]

//>> SET_[QME_PPEDBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_HALT_ON_XSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_HALT_ON_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_HALT_ON_XSTOP]

//>> SET_[QME_PPEDBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_HALT_ON_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_HALT_ON_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_HALT_ON_XSTOP]

//>> SET_[QME_PPEDBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_HALT_ON_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.setBit<QME_PPEDBG_HALT_ON_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PPEDBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_HALT_ON_XSTOP]

//>> CLEAR_[QME_PPEDBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PPEDBG_HALT_ON_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.clearBit<QME_PPEDBG_HALT_ON_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PPEDBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PPEDBG_HALT_ON_XSTOP]

//>> GET_[QME_PPEDBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_HALT_ON_XSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_HALT_ON_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_HALT_ON_XSTOP]

//>> GET_[QME_PPEDBG_HALT_ON_XSTOP]
static inline bool GET_QME_PPEDBG_HALT_ON_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.getBit<QME_PPEDBG_HALT_ON_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PPEDBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_HALT_ON_XSTOP]

//>> SET_[QME_PPEDBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_HALT_ON_TRIG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_HALT_ON_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_HALT_ON_TRIG]

//>> SET_[QME_PPEDBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_HALT_ON_TRIG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_HALT_ON_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_HALT_ON_TRIG]

//>> SET_[QME_PPEDBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_HALT_ON_TRIG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.setBit<QME_PPEDBG_HALT_ON_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PPEDBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_HALT_ON_TRIG]

//>> CLEAR_[QME_PPEDBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PPEDBG_HALT_ON_TRIG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.clearBit<QME_PPEDBG_HALT_ON_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PPEDBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PPEDBG_HALT_ON_TRIG]

//>> GET_[QME_PPEDBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_HALT_ON_TRIG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_HALT_ON_TRIG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_HALT_ON_TRIG]

//>> GET_[QME_PPEDBG_HALT_ON_TRIG]
static inline bool GET_QME_PPEDBG_HALT_ON_TRIG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.getBit<QME_PPEDBG_HALT_ON_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PPEDBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_HALT_ON_TRIG]

//>> SET_[QME_PPEDBG_EN_COVERAGE_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_COVERAGE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_EN_COVERAGE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_EN_COVERAGE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_COVERAGE_MODE]

//>> SET_[QME_PPEDBG_EN_COVERAGE_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_COVERAGE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_EN_COVERAGE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_EN_COVERAGE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_COVERAGE_MODE]

//>> SET_[QME_PPEDBG_EN_COVERAGE_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_COVERAGE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.setBit<QME_PPEDBG_EN_COVERAGE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PPEDBG_EN_COVERAGE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_COVERAGE_MODE]

//>> CLEAR_[QME_PPEDBG_EN_COVERAGE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PPEDBG_EN_COVERAGE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.clearBit<QME_PPEDBG_EN_COVERAGE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PPEDBG_EN_COVERAGE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PPEDBG_EN_COVERAGE_MODE]

//>> GET_[QME_PPEDBG_EN_COVERAGE_MODE]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_EN_COVERAGE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_EN_COVERAGE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_EN_COVERAGE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_EN_COVERAGE_MODE]

//>> GET_[QME_PPEDBG_EN_COVERAGE_MODE]
static inline bool GET_QME_PPEDBG_EN_COVERAGE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.getBit<QME_PPEDBG_EN_COVERAGE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PPEDBG_EN_COVERAGE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_EN_COVERAGE_MODE]

//>> SET_[QME_PPEDBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_INTR_ADDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_EN_INTR_ADDR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_INTR_ADDR]

//>> SET_[QME_PPEDBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_INTR_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_EN_INTR_ADDR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_INTR_ADDR]

//>> SET_[QME_PPEDBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_INTR_ADDR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.setBit<QME_PPEDBG_EN_INTR_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PPEDBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_INTR_ADDR]

//>> CLEAR_[QME_PPEDBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PPEDBG_EN_INTR_ADDR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.clearBit<QME_PPEDBG_EN_INTR_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PPEDBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PPEDBG_EN_INTR_ADDR]

//>> GET_[QME_PPEDBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_EN_INTR_ADDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_EN_INTR_ADDR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_EN_INTR_ADDR]

//>> GET_[QME_PPEDBG_EN_INTR_ADDR]
static inline bool GET_QME_PPEDBG_EN_INTR_ADDR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.getBit<QME_PPEDBG_EN_INTR_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PPEDBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_EN_INTR_ADDR]

//>> SET_[QME_PPEDBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_TRACE_EXTRA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_EN_TRACE_EXTRA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_TRACE_EXTRA]

//>> SET_[QME_PPEDBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_TRACE_EXTRA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_EN_TRACE_EXTRA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_TRACE_EXTRA]

//>> SET_[QME_PPEDBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_TRACE_EXTRA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.setBit<QME_PPEDBG_EN_TRACE_EXTRA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PPEDBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_TRACE_EXTRA]

//>> CLEAR_[QME_PPEDBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PPEDBG_EN_TRACE_EXTRA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.clearBit<QME_PPEDBG_EN_TRACE_EXTRA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PPEDBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PPEDBG_EN_TRACE_EXTRA]

//>> GET_[QME_PPEDBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_EN_TRACE_EXTRA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_EN_TRACE_EXTRA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_EN_TRACE_EXTRA]

//>> GET_[QME_PPEDBG_EN_TRACE_EXTRA]
static inline bool GET_QME_PPEDBG_EN_TRACE_EXTRA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.getBit<QME_PPEDBG_EN_TRACE_EXTRA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PPEDBG_EN_TRACE_EXTRA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_EN_TRACE_EXTRA]

//>> SET_[QME_PPEDBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_TRACE_STALL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_EN_TRACE_STALL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_TRACE_STALL]

//>> SET_[QME_PPEDBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_TRACE_STALL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_EN_TRACE_STALL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_TRACE_STALL]

//>> SET_[QME_PPEDBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_TRACE_STALL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.setBit<QME_PPEDBG_EN_TRACE_STALL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PPEDBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_TRACE_STALL]

//>> CLEAR_[QME_PPEDBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PPEDBG_EN_TRACE_STALL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.clearBit<QME_PPEDBG_EN_TRACE_STALL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PPEDBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PPEDBG_EN_TRACE_STALL]

//>> GET_[QME_PPEDBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_EN_TRACE_STALL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_EN_TRACE_STALL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_EN_TRACE_STALL]

//>> GET_[QME_PPEDBG_EN_TRACE_STALL]
static inline bool GET_QME_PPEDBG_EN_TRACE_STALL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.getBit<QME_PPEDBG_EN_TRACE_STALL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PPEDBG_EN_TRACE_STALL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_EN_TRACE_STALL]

//>> SET_[QME_PPEDBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_WAIT_CYCLES(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_EN_WAIT_CYCLES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_WAIT_CYCLES]

//>> SET_[QME_PPEDBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_WAIT_CYCLES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_EN_WAIT_CYCLES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_WAIT_CYCLES]

//>> SET_[QME_PPEDBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_WAIT_CYCLES(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.setBit<QME_PPEDBG_EN_WAIT_CYCLES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PPEDBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_WAIT_CYCLES]

//>> CLEAR_[QME_PPEDBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PPEDBG_EN_WAIT_CYCLES(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.clearBit<QME_PPEDBG_EN_WAIT_CYCLES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PPEDBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PPEDBG_EN_WAIT_CYCLES]

//>> GET_[QME_PPEDBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_EN_WAIT_CYCLES(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_EN_WAIT_CYCLES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_EN_WAIT_CYCLES]

//>> GET_[QME_PPEDBG_EN_WAIT_CYCLES]
static inline bool GET_QME_PPEDBG_EN_WAIT_CYCLES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.getBit<QME_PPEDBG_EN_WAIT_CYCLES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PPEDBG_EN_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_EN_WAIT_CYCLES]

//>> SET_[QME_PPEDBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_FULL_SPEED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_EN_FULL_SPEED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_FULL_SPEED]

//>> SET_[QME_PPEDBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_FULL_SPEED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_EN_FULL_SPEED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_FULL_SPEED]

//>> SET_[QME_PPEDBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_FULL_SPEED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.setBit<QME_PPEDBG_EN_FULL_SPEED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PPEDBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_FULL_SPEED]

//>> CLEAR_[QME_PPEDBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PPEDBG_EN_FULL_SPEED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.clearBit<QME_PPEDBG_EN_FULL_SPEED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PPEDBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PPEDBG_EN_FULL_SPEED]

//>> GET_[QME_PPEDBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_EN_FULL_SPEED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_EN_FULL_SPEED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_EN_FULL_SPEED]

//>> GET_[QME_PPEDBG_EN_FULL_SPEED]
static inline bool GET_QME_PPEDBG_EN_FULL_SPEED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.getBit<QME_PPEDBG_EN_FULL_SPEED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PPEDBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_EN_FULL_SPEED]

//>> SET_[QME_PPEDBG_DIS_FLOW_CHANGE]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_DIS_FLOW_CHANGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_DIS_FLOW_CHANGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_DIS_FLOW_CHANGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_DIS_FLOW_CHANGE]

//>> SET_[QME_PPEDBG_DIS_FLOW_CHANGE]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_DIS_FLOW_CHANGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_DIS_FLOW_CHANGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_DIS_FLOW_CHANGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_DIS_FLOW_CHANGE]

//>> SET_[QME_PPEDBG_DIS_FLOW_CHANGE]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_DIS_FLOW_CHANGE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.setBit<QME_PPEDBG_DIS_FLOW_CHANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PPEDBG_DIS_FLOW_CHANGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_DIS_FLOW_CHANGE]

//>> CLEAR_[QME_PPEDBG_DIS_FLOW_CHANGE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PPEDBG_DIS_FLOW_CHANGE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.clearBit<QME_PPEDBG_DIS_FLOW_CHANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PPEDBG_DIS_FLOW_CHANGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PPEDBG_DIS_FLOW_CHANGE]

//>> GET_[QME_PPEDBG_DIS_FLOW_CHANGE]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_DIS_FLOW_CHANGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_DIS_FLOW_CHANGE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_DIS_FLOW_CHANGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_DIS_FLOW_CHANGE]

//>> GET_[QME_PPEDBG_DIS_FLOW_CHANGE]
static inline bool GET_QME_PPEDBG_DIS_FLOW_CHANGE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.getBit<QME_PPEDBG_DIS_FLOW_CHANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PPEDBG_DIS_FLOW_CHANGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_DIS_FLOW_CHANGE]

//>> SET_[QME_PPEDBG_TRACE_MODE_SEL]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_TRACE_MODE_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_TRACE_MODE_SEL,
           QME_PPEDBG_TRACE_MODE_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_TRACE_MODE_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_TRACE_MODE_SEL]

//>> SET_[QME_PPEDBG_TRACE_MODE_SEL]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_TRACE_MODE_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_TRACE_MODE_SEL,
           QME_PPEDBG_TRACE_MODE_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_TRACE_MODE_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_TRACE_MODE_SEL]

//>> GET_[QME_PPEDBG_TRACE_MODE_SEL]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_TRACE_MODE_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_TRACE_MODE_SEL,
           QME_PPEDBG_TRACE_MODE_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_TRACE_MODE_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_TRACE_MODE_SEL]

//>> SET_[QME_PPEDBG_EN_MARK_TRACE]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_MARK_TRACE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_EN_MARK_TRACE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_EN_MARK_TRACE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_MARK_TRACE]

//>> SET_[QME_PPEDBG_EN_MARK_TRACE]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_MARK_TRACE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_EN_MARK_TRACE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_EN_MARK_TRACE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_MARK_TRACE]

//>> SET_[QME_PPEDBG_EN_MARK_TRACE]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_MARK_TRACE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.setBit<QME_PPEDBG_EN_MARK_TRACE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PPEDBG_EN_MARK_TRACE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_MARK_TRACE]

//>> CLEAR_[QME_PPEDBG_EN_MARK_TRACE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PPEDBG_EN_MARK_TRACE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.clearBit<QME_PPEDBG_EN_MARK_TRACE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PPEDBG_EN_MARK_TRACE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PPEDBG_EN_MARK_TRACE]

//>> GET_[QME_PPEDBG_EN_MARK_TRACE]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_EN_MARK_TRACE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_EN_MARK_TRACE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_EN_MARK_TRACE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_EN_MARK_TRACE]

//>> GET_[QME_PPEDBG_EN_MARK_TRACE]
static inline bool GET_QME_PPEDBG_EN_MARK_TRACE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.getBit<QME_PPEDBG_EN_MARK_TRACE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PPEDBG_EN_MARK_TRACE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_EN_MARK_TRACE]

//>> SET_[QME_PPEDBG_EN_EE_TRACE]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_EE_TRACE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_EN_EE_TRACE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_EN_EE_TRACE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_EE_TRACE]

//>> SET_[QME_PPEDBG_EN_EE_TRACE]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_EE_TRACE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_EN_EE_TRACE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_EN_EE_TRACE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_EE_TRACE]

//>> SET_[QME_PPEDBG_EN_EE_TRACE]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_EN_EE_TRACE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.setBit<QME_PPEDBG_EN_EE_TRACE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PPEDBG_EN_EE_TRACE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_EN_EE_TRACE]

//>> CLEAR_[QME_PPEDBG_EN_EE_TRACE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PPEDBG_EN_EE_TRACE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.clearBit<QME_PPEDBG_EN_EE_TRACE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PPEDBG_EN_EE_TRACE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PPEDBG_EN_EE_TRACE]

//>> GET_[QME_PPEDBG_EN_EE_TRACE]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_EN_EE_TRACE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_EN_EE_TRACE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_EN_EE_TRACE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_EN_EE_TRACE]

//>> GET_[QME_PPEDBG_EN_EE_TRACE]
static inline bool GET_QME_PPEDBG_EN_EE_TRACE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.getBit<QME_PPEDBG_EN_EE_TRACE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PPEDBG_EN_EE_TRACE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_EN_EE_TRACE]

//>> SET_[QME_PPEDBG_TRACE_LOWER_SEL1]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_TRACE_LOWER_SEL1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_TRACE_LOWER_SEL1,
           QME_PPEDBG_TRACE_LOWER_SEL1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_TRACE_LOWER_SEL1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_TRACE_LOWER_SEL1]

//>> SET_[QME_PPEDBG_TRACE_LOWER_SEL1]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_TRACE_LOWER_SEL1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_TRACE_LOWER_SEL1,
           QME_PPEDBG_TRACE_LOWER_SEL1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_TRACE_LOWER_SEL1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_TRACE_LOWER_SEL1]

//>> GET_[QME_PPEDBG_TRACE_LOWER_SEL1]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_TRACE_LOWER_SEL1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_TRACE_LOWER_SEL1,
           QME_PPEDBG_TRACE_LOWER_SEL1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_TRACE_LOWER_SEL1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_TRACE_LOWER_SEL1]

//>> SET_[QME_PPEDBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_FIR_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_FIR_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_FIR_TRIGGER]

//>> SET_[QME_PPEDBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_FIR_TRIGGER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_FIR_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_FIR_TRIGGER]

//>> SET_[QME_PPEDBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_FIR_TRIGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.setBit<QME_PPEDBG_FIR_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PPEDBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_FIR_TRIGGER]

//>> CLEAR_[QME_PPEDBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PPEDBG_FIR_TRIGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.clearBit<QME_PPEDBG_FIR_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PPEDBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PPEDBG_FIR_TRIGGER]

//>> GET_[QME_PPEDBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_FIR_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_FIR_TRIGGER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_FIR_TRIGGER]

//>> GET_[QME_PPEDBG_FIR_TRIGGER]
static inline bool GET_QME_PPEDBG_FIR_TRIGGER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.getBit<QME_PPEDBG_FIR_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PPEDBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_FIR_TRIGGER]

//>> SET_[QME_PPEDBG_MIB_GPIO]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_MIB_GPIO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_MIB_GPIO,
           QME_PPEDBG_MIB_GPIO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_MIB_GPIO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_MIB_GPIO]

//>> SET_[QME_PPEDBG_MIB_GPIO]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_MIB_GPIO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_MIB_GPIO,
           QME_PPEDBG_MIB_GPIO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_MIB_GPIO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_MIB_GPIO]

//>> GET_[QME_PPEDBG_MIB_GPIO]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_MIB_GPIO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_MIB_GPIO,
           QME_PPEDBG_MIB_GPIO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_MIB_GPIO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_MIB_GPIO]

//>> SET_[QME_PPEDBG_TRACE_DATA_SEL]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_TRACE_DATA_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_TRACE_DATA_SEL,
           QME_PPEDBG_TRACE_DATA_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_TRACE_DATA_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_TRACE_DATA_SEL]

//>> SET_[QME_PPEDBG_TRACE_DATA_SEL]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_TRACE_DATA_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_TRACE_DATA_SEL,
           QME_PPEDBG_TRACE_DATA_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_TRACE_DATA_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_TRACE_DATA_SEL]

//>> GET_[QME_PPEDBG_TRACE_DATA_SEL]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_TRACE_DATA_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_TRACE_DATA_SEL,
           QME_PPEDBG_TRACE_DATA_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_TRACE_DATA_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_TRACE_DATA_SEL]

//>> SET_[QME_PPEDBG_QHTM_TRACE_SEL]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_QHTM_TRACE_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_QHTM_TRACE_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_QHTM_TRACE_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_QHTM_TRACE_SEL]

//>> SET_[QME_PPEDBG_QHTM_TRACE_SEL]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_QHTM_TRACE_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_QHTM_TRACE_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_QHTM_TRACE_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_QHTM_TRACE_SEL]

//>> SET_[QME_PPEDBG_QHTM_TRACE_SEL]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_QHTM_TRACE_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.setBit<QME_PPEDBG_QHTM_TRACE_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PPEDBG_QHTM_TRACE_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_QHTM_TRACE_SEL]

//>> CLEAR_[QME_PPEDBG_QHTM_TRACE_SEL]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PPEDBG_QHTM_TRACE_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.clearBit<QME_PPEDBG_QHTM_TRACE_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PPEDBG_QHTM_TRACE_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PPEDBG_QHTM_TRACE_SEL]

//>> GET_[QME_PPEDBG_QHTM_TRACE_SEL]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_QHTM_TRACE_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_QHTM_TRACE_SEL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_QHTM_TRACE_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_QHTM_TRACE_SEL]

//>> GET_[QME_PPEDBG_QHTM_TRACE_SEL]
static inline bool GET_QME_PPEDBG_QHTM_TRACE_SEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.getBit<QME_PPEDBG_QHTM_TRACE_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PPEDBG_QHTM_TRACE_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_QHTM_TRACE_SEL]

//>> SET_[QME_PPEDBG_TRACE_EXT_SEL0]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_TRACE_EXT_SEL0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_TRACE_EXT_SEL0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_TRACE_EXT_SEL0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_TRACE_EXT_SEL0]

//>> SET_[QME_PPEDBG_TRACE_EXT_SEL0]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_TRACE_EXT_SEL0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_TRACE_EXT_SEL0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_TRACE_EXT_SEL0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_TRACE_EXT_SEL0]

//>> SET_[QME_PPEDBG_TRACE_EXT_SEL0]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_TRACE_EXT_SEL0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.setBit<QME_PPEDBG_TRACE_EXT_SEL0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PPEDBG_TRACE_EXT_SEL0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_TRACE_EXT_SEL0]

//>> CLEAR_[QME_PPEDBG_TRACE_EXT_SEL0]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PPEDBG_TRACE_EXT_SEL0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.clearBit<QME_PPEDBG_TRACE_EXT_SEL0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PPEDBG_TRACE_EXT_SEL0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PPEDBG_TRACE_EXT_SEL0]

//>> GET_[QME_PPEDBG_TRACE_EXT_SEL0]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_TRACE_EXT_SEL0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_TRACE_EXT_SEL0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_TRACE_EXT_SEL0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_TRACE_EXT_SEL0]

//>> GET_[QME_PPEDBG_TRACE_EXT_SEL0]
static inline bool GET_QME_PPEDBG_TRACE_EXT_SEL0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.getBit<QME_PPEDBG_TRACE_EXT_SEL0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PPEDBG_TRACE_EXT_SEL0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_TRACE_EXT_SEL0]

//>> SET_[QME_PPEDBG_TRACE_MODE_SEL1]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_TRACE_MODE_SEL1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_TRACE_MODE_SEL1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_TRACE_MODE_SEL1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_TRACE_MODE_SEL1]

//>> SET_[QME_PPEDBG_TRACE_MODE_SEL1]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_TRACE_MODE_SEL1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_TRACE_MODE_SEL1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_TRACE_MODE_SEL1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_TRACE_MODE_SEL1]

//>> SET_[QME_PPEDBG_TRACE_MODE_SEL1]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_TRACE_MODE_SEL1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.setBit<QME_PPEDBG_TRACE_MODE_SEL1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PPEDBG_TRACE_MODE_SEL1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_TRACE_MODE_SEL1]

//>> CLEAR_[QME_PPEDBG_TRACE_MODE_SEL1]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PPEDBG_TRACE_MODE_SEL1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.clearBit<QME_PPEDBG_TRACE_MODE_SEL1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PPEDBG_TRACE_MODE_SEL1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PPEDBG_TRACE_MODE_SEL1]

//>> GET_[QME_PPEDBG_TRACE_MODE_SEL1]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_TRACE_MODE_SEL1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_TRACE_MODE_SEL1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_TRACE_MODE_SEL1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_TRACE_MODE_SEL1]

//>> GET_[QME_PPEDBG_TRACE_MODE_SEL1]
static inline bool GET_QME_PPEDBG_TRACE_MODE_SEL1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.getBit<QME_PPEDBG_TRACE_MODE_SEL1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PPEDBG_TRACE_MODE_SEL1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_TRACE_MODE_SEL1]

//>> SET_[QME_PPEDBG_TRACE_DATA_SEL1]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_TRACE_DATA_SEL1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_TRACE_DATA_SEL1,
           QME_PPEDBG_TRACE_DATA_SEL1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PPEDBG_TRACE_DATA_SEL1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_TRACE_DATA_SEL1]

//>> SET_[QME_PPEDBG_TRACE_DATA_SEL1]
static inline fapi2::buffer<uint64_t>& SET_QME_PPEDBG_TRACE_DATA_SEL1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return o_data.insertFromRight<QME_PPEDBG_TRACE_DATA_SEL1,
           QME_PPEDBG_TRACE_DATA_SEL1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PPEDBG_TRACE_DATA_SEL1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PPEDBG_TRACE_DATA_SEL1]

//>> GET_[QME_PPEDBG_TRACE_DATA_SEL1]
static inline fapi2::buffer<uint64_t>& GET_QME_PPEDBG_TRACE_DATA_SEL1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PPEDBG_RW, QME_PPEDBG_WO_CLEAR, QME_PPEDBG_WO_OR));
#endif
    return i_data.extractToRight<QME_PPEDBG_TRACE_DATA_SEL1,
           QME_PPEDBG_TRACE_DATA_SEL1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PPEDBG_TRACE_DATA_SEL1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PPEDBG_TRACE_DATA_SEL1]

//>> PREP_[QME_RCTAR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_RCTAR1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_RCTAR1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_RCTAR1]

//>> GET_[QME_RCTAR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_RCTAR1(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_RCTAR1;
#endif
    return fapi2::getScom(i_target, QME_RCTAR1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_RCTAR1]

//>> PUT_[QME_RCTAR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_RCTAR1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_RCTAR1));
#endif
    return fapi2::putScom(i_target, QME_RCTAR1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_RCTAR1]


//>> SET_[QME_RCTAR1_DATA]
static inline fapi2::buffer<uint64_t>& SET_QME_RCTAR1_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCTAR1));
#endif
    return o_data.insertFromRight<QME_RCTAR1_DATA,
           QME_RCTAR1_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCTAR1_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCTAR1_DATA]

//>> SET_[QME_RCTAR1_DATA]
static inline fapi2::buffer<uint64_t>& SET_QME_RCTAR1_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCTAR1));
#endif
    return o_data.insertFromRight<QME_RCTAR1_DATA,
           QME_RCTAR1_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCTAR1_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCTAR1_DATA]

//>> GET_[QME_RCTAR1_DATA]
static inline fapi2::buffer<uint64_t>& GET_QME_RCTAR1_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCTAR1));
#endif
    return i_data.extractToRight<QME_RCTAR1_DATA,
           QME_RCTAR1_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCTAR1_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCTAR1_DATA]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
