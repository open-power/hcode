/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_eq/reg00014_unused.H $    */
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

#ifndef __PPE_EQ_REG00014_H_UNUSED__
#define __PPE_EQ_REG00014_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


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
