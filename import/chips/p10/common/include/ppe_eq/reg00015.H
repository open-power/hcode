/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_eq/reg00015.H $           */
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

#ifndef __PPE_EQ_REG00015_H_
#define __PPE_EQ_REG00015_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


//>> PREP_[QME_QSAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_QSAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QSAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_QSAR]

//>> GET_[QME_QSAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_QSAR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QSAR;
#endif
    return fapi2::getScom(i_target, QME_QSAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_QSAR]

//>> PUT_[QME_QSAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_QSAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_QSAR));
#endif
    return fapi2::putScom(i_target, QME_QSAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_QSAR]


//>> SET_[QME_QSAR_SRAM_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_QME_QSAR_SRAM_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSAR));
#endif
    return o_data.insertFromRight<QME_QSAR_SRAM_ADDRESS,
           QME_QSAR_SRAM_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QSAR_SRAM_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSAR_SRAM_ADDRESS]

//>> SET_[QME_QSAR_SRAM_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_QME_QSAR_SRAM_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSAR));
#endif
    return o_data.insertFromRight<QME_QSAR_SRAM_ADDRESS,
           QME_QSAR_SRAM_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QSAR_SRAM_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSAR_SRAM_ADDRESS]

//>> GET_[QME_QSAR_SRAM_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_QME_QSAR_SRAM_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSAR));
#endif
    return i_data.extractToRight<QME_QSAR_SRAM_ADDRESS,
           QME_QSAR_SRAM_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QSAR_SRAM_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QSAR_SRAM_ADDRESS]

//>> SET_[QME_QSAR_AUTO_INCR_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QSAR_AUTO_INCR_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSAR));
#endif
    return o_data.insertFromRight<QME_QSAR_AUTO_INCR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QSAR_AUTO_INCR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSAR_AUTO_INCR_MODE]

//>> SET_[QME_QSAR_AUTO_INCR_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QSAR_AUTO_INCR_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSAR));
#endif
    return o_data.insertFromRight<QME_QSAR_AUTO_INCR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QSAR_AUTO_INCR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSAR_AUTO_INCR_MODE]

//>> SET_[QME_QSAR_AUTO_INCR_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QSAR_AUTO_INCR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSAR));
#endif
    return o_data.setBit<QME_QSAR_AUTO_INCR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QSAR_AUTO_INCR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QSAR_AUTO_INCR_MODE]

//>> CLEAR_[QME_QSAR_AUTO_INCR_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QSAR_AUTO_INCR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSAR));
#endif
    return o_data.clearBit<QME_QSAR_AUTO_INCR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QSAR_AUTO_INCR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QSAR_AUTO_INCR_MODE]

//>> GET_[QME_QSAR_AUTO_INCR_MODE]
static inline fapi2::buffer<uint64_t>& GET_QME_QSAR_AUTO_INCR_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSAR));
#endif
    return i_data.extractToRight<QME_QSAR_AUTO_INCR_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QSAR_AUTO_INCR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QSAR_AUTO_INCR_MODE]

//>> GET_[QME_QSAR_AUTO_INCR_MODE]
static inline bool GET_QME_QSAR_AUTO_INCR_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QSAR));
#endif
    return i_data.getBit<QME_QSAR_AUTO_INCR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QSAR_AUTO_INCR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QSAR_AUTO_INCR_MODE]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
