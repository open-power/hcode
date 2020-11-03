/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_eq/reg00011.H $           */
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

#ifndef __PPE_EQ_REG00011_H_
#define __PPE_EQ_REG00011_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


//>> PREP_[QME_PCBQBI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_PCBQBI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PCBQBI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_PCBQBI]

//>> GET_[QME_PCBQBI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_PCBQBI(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PCBQBI;
#endif
    return fapi2::getScom(i_target, QME_PCBQBI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_PCBQBI]

//>> PUT_[QME_PCBQBI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_PCBQBI(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return fapi2::putScom(i_target, QME_PCBQBI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_PCBQBI]


//>> SET_[QME_PCBQBI_ENTRY_VALID]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBQBI_ENTRY_VALID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return o_data.insertFromRight<QME_PCBQBI_ENTRY_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PCBQBI_ENTRY_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBQBI_ENTRY_VALID]

//>> SET_[QME_PCBQBI_ENTRY_VALID]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBQBI_ENTRY_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return o_data.insertFromRight<QME_PCBQBI_ENTRY_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PCBQBI_ENTRY_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBQBI_ENTRY_VALID]

//>> SET_[QME_PCBQBI_ENTRY_VALID]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBQBI_ENTRY_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return o_data.setBit<QME_PCBQBI_ENTRY_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PCBQBI_ENTRY_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBQBI_ENTRY_VALID]

//>> CLEAR_[QME_PCBQBI_ENTRY_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PCBQBI_ENTRY_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return o_data.clearBit<QME_PCBQBI_ENTRY_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PCBQBI_ENTRY_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PCBQBI_ENTRY_VALID]

//>> GET_[QME_PCBQBI_ENTRY_VALID]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBQBI_ENTRY_VALID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return i_data.extractToRight<QME_PCBQBI_ENTRY_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PCBQBI_ENTRY_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBQBI_ENTRY_VALID]

//>> GET_[QME_PCBQBI_ENTRY_VALID]
static inline bool GET_QME_PCBQBI_ENTRY_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return i_data.getBit<QME_PCBQBI_ENTRY_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PCBQBI_ENTRY_VALID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBQBI_ENTRY_VALID]

//>> SET_[QME_PCBQBI_MERGING_SCHEME]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBQBI_MERGING_SCHEME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return o_data.insertFromRight<QME_PCBQBI_MERGING_SCHEME,
           QME_PCBQBI_MERGING_SCHEME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PCBQBI_MERGING_SCHEME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBQBI_MERGING_SCHEME]

//>> SET_[QME_PCBQBI_MERGING_SCHEME]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBQBI_MERGING_SCHEME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return o_data.insertFromRight<QME_PCBQBI_MERGING_SCHEME,
           QME_PCBQBI_MERGING_SCHEME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PCBQBI_MERGING_SCHEME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBQBI_MERGING_SCHEME]

//>> GET_[QME_PCBQBI_MERGING_SCHEME]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBQBI_MERGING_SCHEME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return i_data.extractToRight<QME_PCBQBI_MERGING_SCHEME,
           QME_PCBQBI_MERGING_SCHEME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PCBQBI_MERGING_SCHEME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBQBI_MERGING_SCHEME]

//>> SET_[QME_PCBQBI_R_NW]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBQBI_R_NW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return o_data.insertFromRight<QME_PCBQBI_R_NW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PCBQBI_R_NW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBQBI_R_NW]

//>> SET_[QME_PCBQBI_R_NW]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBQBI_R_NW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return o_data.insertFromRight<QME_PCBQBI_R_NW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PCBQBI_R_NW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBQBI_R_NW]

//>> SET_[QME_PCBQBI_R_NW]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBQBI_R_NW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return o_data.setBit<QME_PCBQBI_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PCBQBI_R_NW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBQBI_R_NW]

//>> CLEAR_[QME_PCBQBI_R_NW]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PCBQBI_R_NW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return o_data.clearBit<QME_PCBQBI_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PCBQBI_R_NW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PCBQBI_R_NW]

//>> GET_[QME_PCBQBI_R_NW]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBQBI_R_NW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return i_data.extractToRight<QME_PCBQBI_R_NW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PCBQBI_R_NW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBQBI_R_NW]

//>> GET_[QME_PCBQBI_R_NW]
static inline bool GET_QME_PCBQBI_R_NW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return i_data.getBit<QME_PCBQBI_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PCBQBI_R_NW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBQBI_R_NW]

//>> SET_[QME_PCBQBI_PORT]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBQBI_PORT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return o_data.insertFromRight<QME_PCBQBI_PORT,
           QME_PCBQBI_PORT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PCBQBI_PORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBQBI_PORT]

//>> SET_[QME_PCBQBI_PORT]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBQBI_PORT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return o_data.insertFromRight<QME_PCBQBI_PORT,
           QME_PCBQBI_PORT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PCBQBI_PORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBQBI_PORT]

//>> GET_[QME_PCBQBI_PORT]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBQBI_PORT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return i_data.extractToRight<QME_PCBQBI_PORT,
           QME_PCBQBI_PORT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PCBQBI_PORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBQBI_PORT]

//>> SET_[QME_PCBQBI_ADDR]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBQBI_ADDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return o_data.insertFromRight<QME_PCBQBI_ADDR,
           QME_PCBQBI_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PCBQBI_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBQBI_ADDR]

//>> SET_[QME_PCBQBI_ADDR]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBQBI_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return o_data.insertFromRight<QME_PCBQBI_ADDR,
           QME_PCBQBI_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PCBQBI_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBQBI_ADDR]

//>> GET_[QME_PCBQBI_ADDR]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBQBI_ADDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBQBI));
#endif
    return i_data.extractToRight<QME_PCBQBI_ADDR,
           QME_PCBQBI_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PCBQBI_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBQBI_ADDR]

//>> PREP_[QME_QHTLAST]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_QHTLAST(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QHTLAST;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_QHTLAST]

//>> GET_[QME_QHTLAST]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_QHTLAST(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QHTLAST;
#endif
    return fapi2::getScom(i_target, QME_QHTLAST, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_QHTLAST]

//>> PUT_[QME_QHTLAST]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_QHTLAST(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_QHTLAST));
#endif
    return fapi2::putScom(i_target, QME_QHTLAST, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_QHTLAST]


//>> SET_[QME_QHTLAST_HTM_BUFFER_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_QME_QHTLAST_HTM_BUFFER_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QHTLAST));
#endif
    return o_data.insertFromRight<QME_QHTLAST_HTM_BUFFER_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QHTLAST_HTM_BUFFER_OVERFLOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHTLAST_HTM_BUFFER_OVERFLOW]

//>> SET_[QME_QHTLAST_HTM_BUFFER_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_QME_QHTLAST_HTM_BUFFER_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QHTLAST));
#endif
    return o_data.insertFromRight<QME_QHTLAST_HTM_BUFFER_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QHTLAST_HTM_BUFFER_OVERFLOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHTLAST_HTM_BUFFER_OVERFLOW]

//>> SET_[QME_QHTLAST_HTM_BUFFER_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_QME_QHTLAST_HTM_BUFFER_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QHTLAST));
#endif
    return o_data.setBit<QME_QHTLAST_HTM_BUFFER_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QHTLAST_HTM_BUFFER_OVERFLOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHTLAST_HTM_BUFFER_OVERFLOW]

//>> CLEAR_[QME_QHTLAST_HTM_BUFFER_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QHTLAST_HTM_BUFFER_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QHTLAST));
#endif
    return o_data.clearBit<QME_QHTLAST_HTM_BUFFER_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QHTLAST_HTM_BUFFER_OVERFLOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QHTLAST_HTM_BUFFER_OVERFLOW]

//>> GET_[QME_QHTLAST_HTM_BUFFER_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_QME_QHTLAST_HTM_BUFFER_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QHTLAST));
#endif
    return i_data.extractToRight<QME_QHTLAST_HTM_BUFFER_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QHTLAST_HTM_BUFFER_OVERFLOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QHTLAST_HTM_BUFFER_OVERFLOW]

//>> GET_[QME_QHTLAST_HTM_BUFFER_OVERFLOW]
static inline bool GET_QME_QHTLAST_HTM_BUFFER_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QHTLAST));
#endif
    return i_data.getBit<QME_QHTLAST_HTM_BUFFER_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QHTLAST_HTM_BUFFER_OVERFLOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QHTLAST_HTM_BUFFER_OVERFLOW]

//>> SET_[QME_QHTLAST_LAST_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_QME_QHTLAST_LAST_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTLAST));
#endif
    return o_data.insertFromRight<QME_QHTLAST_LAST_ADDRESS,
           QME_QHTLAST_LAST_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QHTLAST_LAST_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHTLAST_LAST_ADDRESS]

//>> SET_[QME_QHTLAST_LAST_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_QME_QHTLAST_LAST_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTLAST));
#endif
    return o_data.insertFromRight<QME_QHTLAST_LAST_ADDRESS,
           QME_QHTLAST_LAST_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QHTLAST_LAST_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHTLAST_LAST_ADDRESS]

//>> GET_[QME_QHTLAST_LAST_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_QME_QHTLAST_LAST_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTLAST));
#endif
    return i_data.extractToRight<QME_QHTLAST_LAST_ADDRESS,
           QME_QHTLAST_LAST_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QHTLAST_LAST_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QHTLAST_LAST_ADDRESS]

//>> PREP_[QME_RCPTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_RCPTR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_RCPTR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_RCPTR]

//>> GET_[QME_RCPTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_RCPTR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_RCPTR;
#endif
    return fapi2::getScom(i_target, QME_RCPTR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_RCPTR]

//>> PUT_[QME_RCPTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_RCPTR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return fapi2::putScom(i_target, QME_RCPTR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_RCPTR]


//>> SET_[QME_RCPTR_TARGET_PSTATE]
static inline fapi2::buffer<uint64_t>& SET_QME_RCPTR_TARGET_PSTATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return o_data.insertFromRight<QME_RCPTR_TARGET_PSTATE,
           QME_RCPTR_TARGET_PSTATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCPTR_TARGET_PSTATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCPTR_TARGET_PSTATE]

//>> SET_[QME_RCPTR_TARGET_PSTATE]
static inline fapi2::buffer<uint64_t>& SET_QME_RCPTR_TARGET_PSTATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return o_data.insertFromRight<QME_RCPTR_TARGET_PSTATE,
           QME_RCPTR_TARGET_PSTATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCPTR_TARGET_PSTATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCPTR_TARGET_PSTATE]

//>> GET_[QME_RCPTR_TARGET_PSTATE]
static inline fapi2::buffer<uint64_t>& GET_QME_RCPTR_TARGET_PSTATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return i_data.extractToRight<QME_RCPTR_TARGET_PSTATE,
           QME_RCPTR_TARGET_PSTATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCPTR_TARGET_PSTATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCPTR_TARGET_PSTATE]

//>> SET_[QME_RCPTR_PSTATE_CHANGE_PENDING]
static inline fapi2::buffer<uint64_t>& SET_QME_RCPTR_PSTATE_CHANGE_PENDING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return o_data.insertFromRight<QME_RCPTR_PSTATE_CHANGE_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCPTR_PSTATE_CHANGE_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCPTR_PSTATE_CHANGE_PENDING]

//>> SET_[QME_RCPTR_PSTATE_CHANGE_PENDING]
static inline fapi2::buffer<uint64_t>& SET_QME_RCPTR_PSTATE_CHANGE_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return o_data.insertFromRight<QME_RCPTR_PSTATE_CHANGE_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCPTR_PSTATE_CHANGE_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCPTR_PSTATE_CHANGE_PENDING]

//>> SET_[QME_RCPTR_PSTATE_CHANGE_PENDING]
static inline fapi2::buffer<uint64_t>& SET_QME_RCPTR_PSTATE_CHANGE_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return o_data.setBit<QME_RCPTR_PSTATE_CHANGE_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_RCPTR_PSTATE_CHANGE_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCPTR_PSTATE_CHANGE_PENDING]

//>> CLEAR_[QME_RCPTR_PSTATE_CHANGE_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_RCPTR_PSTATE_CHANGE_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return o_data.clearBit<QME_RCPTR_PSTATE_CHANGE_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_RCPTR_PSTATE_CHANGE_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_RCPTR_PSTATE_CHANGE_PENDING]

//>> GET_[QME_RCPTR_PSTATE_CHANGE_PENDING]
static inline fapi2::buffer<uint64_t>& GET_QME_RCPTR_PSTATE_CHANGE_PENDING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return i_data.extractToRight<QME_RCPTR_PSTATE_CHANGE_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCPTR_PSTATE_CHANGE_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCPTR_PSTATE_CHANGE_PENDING]

//>> GET_[QME_RCPTR_PSTATE_CHANGE_PENDING]
static inline bool GET_QME_RCPTR_PSTATE_CHANGE_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return i_data.getBit<QME_RCPTR_PSTATE_CHANGE_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_RCPTR_PSTATE_CHANGE_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCPTR_PSTATE_CHANGE_PENDING]

//>> SET_[QME_RCPTR_TARGET_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_RCPTR_TARGET_INDEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return o_data.insertFromRight<QME_RCPTR_TARGET_INDEX,
           QME_RCPTR_TARGET_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_RCPTR_TARGET_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCPTR_TARGET_INDEX]

//>> SET_[QME_RCPTR_TARGET_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_RCPTR_TARGET_INDEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return o_data.insertFromRight<QME_RCPTR_TARGET_INDEX,
           QME_RCPTR_TARGET_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_RCPTR_TARGET_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_RCPTR_TARGET_INDEX]

//>> GET_[QME_RCPTR_TARGET_INDEX]
static inline fapi2::buffer<uint64_t>& GET_QME_RCPTR_TARGET_INDEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_RCPTR));
#endif
    return i_data.extractToRight<QME_RCPTR_TARGET_INDEX,
           QME_RCPTR_TARGET_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_RCPTR_TARGET_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_RCPTR_TARGET_INDEX]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
