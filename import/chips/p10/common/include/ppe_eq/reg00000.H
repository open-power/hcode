/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_eq/reg00000.H $           */
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

#ifndef __PPE_EQ_REG00000_H_
#define __PPE_EQ_REG00000_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


//>> PREP_[QME_BCECSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_BCECSR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_BCECSR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_BCECSR]

//>> GET_[QME_BCECSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_BCECSR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_BCECSR;
#endif
    return fapi2::getScom(i_target, QME_BCECSR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_BCECSR]

//>> PUT_[QME_BCECSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_BCECSR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return fapi2::putScom(i_target, QME_BCECSR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_BCECSR]


//>> SET_[QME_BCECSR_BUSY]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_BUSY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_BCECSR_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_BUSY]

//>> SET_[QME_BCECSR_BUSY]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_BUSY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_BCECSR_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_BUSY]

//>> SET_[QME_BCECSR_BUSY]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.setBit<QME_BCECSR_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_BCECSR_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_BUSY]

//>> CLEAR_[QME_BCECSR_BUSY]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_BCECSR_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.clearBit<QME_BCECSR_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_BCECSR_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_BCECSR_BUSY]

//>> GET_[QME_BCECSR_BUSY]
static inline fapi2::buffer<uint64_t>& GET_QME_BCECSR_BUSY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return i_data.extractToRight<QME_BCECSR_BUSY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_BCECSR_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCECSR_BUSY]

//>> GET_[QME_BCECSR_BUSY]
static inline bool GET_QME_BCECSR_BUSY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return i_data.getBit<QME_BCECSR_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_BCECSR_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCECSR_BUSY]

//>> SET_[QME_BCECSR_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_BCECSR_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_ERROR]

//>> SET_[QME_BCECSR_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_BCECSR_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_ERROR]

//>> SET_[QME_BCECSR_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.setBit<QME_BCECSR_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_BCECSR_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_ERROR]

//>> CLEAR_[QME_BCECSR_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_BCECSR_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.clearBit<QME_BCECSR_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_BCECSR_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_BCECSR_ERROR]

//>> GET_[QME_BCECSR_ERROR]
static inline fapi2::buffer<uint64_t>& GET_QME_BCECSR_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return i_data.extractToRight<QME_BCECSR_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_BCECSR_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCECSR_ERROR]

//>> GET_[QME_BCECSR_ERROR]
static inline bool GET_QME_BCECSR_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return i_data.getBit<QME_BCECSR_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_BCECSR_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCECSR_ERROR]

//>> SET_[QME_BCECSR_START]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_START(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_START,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_BCECSR_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_START]

//>> SET_[QME_BCECSR_START]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_START(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_START,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_BCECSR_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_START]

//>> SET_[QME_BCECSR_START]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_START(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.setBit<QME_BCECSR_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_BCECSR_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_START]

//>> CLEAR_[QME_BCECSR_START]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_BCECSR_START(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.clearBit<QME_BCECSR_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_BCECSR_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_BCECSR_START]

//>> GET_[QME_BCECSR_START]
static inline fapi2::buffer<uint64_t>& GET_QME_BCECSR_START(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return i_data.extractToRight<QME_BCECSR_START,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_BCECSR_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCECSR_START]

//>> GET_[QME_BCECSR_START]
static inline bool GET_QME_BCECSR_START(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return i_data.getBit<QME_BCECSR_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_BCECSR_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCECSR_START]

//>> SET_[QME_BCECSR_STOP]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_BCECSR_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_STOP]

//>> SET_[QME_BCECSR_STOP]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_BCECSR_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_STOP]

//>> SET_[QME_BCECSR_STOP]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.setBit<QME_BCECSR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_BCECSR_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_STOP]

//>> CLEAR_[QME_BCECSR_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_BCECSR_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.clearBit<QME_BCECSR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_BCECSR_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_BCECSR_STOP]

//>> GET_[QME_BCECSR_STOP]
static inline fapi2::buffer<uint64_t>& GET_QME_BCECSR_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return i_data.extractToRight<QME_BCECSR_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_BCECSR_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCECSR_STOP]

//>> GET_[QME_BCECSR_STOP]
static inline bool GET_QME_BCECSR_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return i_data.getBit<QME_BCECSR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_BCECSR_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCECSR_STOP]

//>> SET_[QME_BCECSR_RNW]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_RNW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_RNW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_BCECSR_RNW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_RNW]

//>> SET_[QME_BCECSR_RNW]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_RNW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_RNW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_BCECSR_RNW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_RNW]

//>> SET_[QME_BCECSR_RNW]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_RNW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.setBit<QME_BCECSR_RNW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_BCECSR_RNW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_RNW]

//>> CLEAR_[QME_BCECSR_RNW]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_BCECSR_RNW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.clearBit<QME_BCECSR_RNW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_BCECSR_RNW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_BCECSR_RNW]

//>> GET_[QME_BCECSR_RNW]
static inline fapi2::buffer<uint64_t>& GET_QME_BCECSR_RNW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return i_data.extractToRight<QME_BCECSR_RNW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_BCECSR_RNW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCECSR_RNW]

//>> GET_[QME_BCECSR_RNW]
static inline bool GET_QME_BCECSR_RNW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return i_data.getBit<QME_BCECSR_RNW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_BCECSR_RNW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCECSR_RNW]

//>> SET_[QME_BCECSR_BARSEL]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_BARSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_BARSEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_BCECSR_BARSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_BARSEL]

//>> SET_[QME_BCECSR_BARSEL]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_BARSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_BARSEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_BCECSR_BARSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_BARSEL]

//>> SET_[QME_BCECSR_BARSEL]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_BARSEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.setBit<QME_BCECSR_BARSEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_BCECSR_BARSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_BARSEL]

//>> CLEAR_[QME_BCECSR_BARSEL]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_BCECSR_BARSEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.clearBit<QME_BCECSR_BARSEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_BCECSR_BARSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_BCECSR_BARSEL]

//>> GET_[QME_BCECSR_BARSEL]
static inline fapi2::buffer<uint64_t>& GET_QME_BCECSR_BARSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return i_data.extractToRight<QME_BCECSR_BARSEL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_BCECSR_BARSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCECSR_BARSEL]

//>> GET_[QME_BCECSR_BARSEL]
static inline bool GET_QME_BCECSR_BARSEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return i_data.getBit<QME_BCECSR_BARSEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_BCECSR_BARSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCECSR_BARSEL]

//>> SET_[QME_BCECSR_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_PRIORITY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_PRIORITY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_BCECSR_PRIORITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_PRIORITY]

//>> SET_[QME_BCECSR_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_PRIORITY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_PRIORITY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_BCECSR_PRIORITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_PRIORITY]

//>> SET_[QME_BCECSR_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_PRIORITY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.setBit<QME_BCECSR_PRIORITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_BCECSR_PRIORITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_PRIORITY]

//>> CLEAR_[QME_BCECSR_PRIORITY]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_BCECSR_PRIORITY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.clearBit<QME_BCECSR_PRIORITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_BCECSR_PRIORITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_BCECSR_PRIORITY]

//>> GET_[QME_BCECSR_PRIORITY]
static inline fapi2::buffer<uint64_t>& GET_QME_BCECSR_PRIORITY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return i_data.extractToRight<QME_BCECSR_PRIORITY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_BCECSR_PRIORITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCECSR_PRIORITY]

//>> GET_[QME_BCECSR_PRIORITY]
static inline bool GET_QME_BCECSR_PRIORITY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return i_data.getBit<QME_BCECSR_PRIORITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_BCECSR_PRIORITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCECSR_PRIORITY]

//>> SET_[QME_BCECSR_INJECT_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_INJECT_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_INJECT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_BCECSR_INJECT_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_INJECT_ERR]

//>> SET_[QME_BCECSR_INJECT_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_INJECT_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_INJECT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_BCECSR_INJECT_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_INJECT_ERR]

//>> SET_[QME_BCECSR_INJECT_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_INJECT_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.setBit<QME_BCECSR_INJECT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_BCECSR_INJECT_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_INJECT_ERR]

//>> CLEAR_[QME_BCECSR_INJECT_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_BCECSR_INJECT_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.clearBit<QME_BCECSR_INJECT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_BCECSR_INJECT_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_BCECSR_INJECT_ERR]

//>> GET_[QME_BCECSR_INJECT_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_BCECSR_INJECT_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return i_data.extractToRight<QME_BCECSR_INJECT_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_BCECSR_INJECT_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCECSR_INJECT_ERR]

//>> GET_[QME_BCECSR_INJECT_ERR]
static inline bool GET_QME_BCECSR_INJECT_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return i_data.getBit<QME_BCECSR_INJECT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_BCECSR_INJECT_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCECSR_INJECT_ERR]

//>> SET_[QME_BCECSR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_TYPE,
           QME_BCECSR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_BCECSR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_TYPE]

//>> SET_[QME_BCECSR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_TYPE,
           QME_BCECSR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_BCECSR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_TYPE]

//>> GET_[QME_BCECSR_TYPE]
static inline fapi2::buffer<uint64_t>& GET_QME_BCECSR_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return i_data.extractToRight<QME_BCECSR_TYPE,
           QME_BCECSR_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_BCECSR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCECSR_TYPE]

//>> SET_[QME_BCECSR_NUM_BLOCKS]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_NUM_BLOCKS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_NUM_BLOCKS,
           QME_BCECSR_NUM_BLOCKS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_BCECSR_NUM_BLOCKS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_NUM_BLOCKS]

//>> SET_[QME_BCECSR_NUM_BLOCKS]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_NUM_BLOCKS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_NUM_BLOCKS,
           QME_BCECSR_NUM_BLOCKS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_BCECSR_NUM_BLOCKS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_NUM_BLOCKS]

//>> GET_[QME_BCECSR_NUM_BLOCKS]
static inline fapi2::buffer<uint64_t>& GET_QME_BCECSR_NUM_BLOCKS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return i_data.extractToRight<QME_BCECSR_NUM_BLOCKS,
           QME_BCECSR_NUM_BLOCKS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_BCECSR_NUM_BLOCKS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCECSR_NUM_BLOCKS]

//>> SET_[QME_BCECSR_SBASE]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_SBASE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_SBASE,
           QME_BCECSR_SBASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_BCECSR_SBASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_SBASE]

//>> SET_[QME_BCECSR_SBASE]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_SBASE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_SBASE,
           QME_BCECSR_SBASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_BCECSR_SBASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_SBASE]

//>> GET_[QME_BCECSR_SBASE]
static inline fapi2::buffer<uint64_t>& GET_QME_BCECSR_SBASE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return i_data.extractToRight<QME_BCECSR_SBASE,
           QME_BCECSR_SBASE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_BCECSR_SBASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCECSR_SBASE]

//>> SET_[QME_BCECSR_MBASE]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_MBASE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_MBASE,
           QME_BCECSR_MBASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_BCECSR_MBASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_MBASE]

//>> SET_[QME_BCECSR_MBASE]
static inline fapi2::buffer<uint64_t>& SET_QME_BCECSR_MBASE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return o_data.insertFromRight<QME_BCECSR_MBASE,
           QME_BCECSR_MBASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_BCECSR_MBASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_BCECSR_MBASE]

//>> GET_[QME_BCECSR_MBASE]
static inline fapi2::buffer<uint64_t>& GET_QME_BCECSR_MBASE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_BCECSR));
#endif
    return i_data.extractToRight<QME_BCECSR_MBASE,
           QME_BCECSR_MBASE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_BCECSR_MBASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_BCECSR_MBASE]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
