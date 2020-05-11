/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_eq/reg00009_unused.H $    */
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

#ifndef __PPE_EQ_REG00009_H_UNUSED__
#define __PPE_EQ_REG00009_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


//>> PREP_[QME_DB2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_DB2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_DB2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_DB2]

//>> GET_[QME_DB2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_DB2(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_DB2;
#endif
    return fapi2::getScom(i_target, QME_DB2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_DB2]

//>> PUT_[QME_DB2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_DB2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_DB2));
#endif
    return fapi2::putScom(i_target, QME_DB2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_DB2]


//>> SET_[QME_DB2_MESSAGE_NUMBER]
static inline fapi2::buffer<uint64_t>& SET_QME_DB2_MESSAGE_NUMBER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DB2));
#endif
    return o_data.insertFromRight<QME_DB2_MESSAGE_NUMBER,
           QME_DB2_MESSAGE_NUMBER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_DB2_MESSAGE_NUMBER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DB2_MESSAGE_NUMBER]

//>> SET_[QME_DB2_MESSAGE_NUMBER]
static inline fapi2::buffer<uint64_t>& SET_QME_DB2_MESSAGE_NUMBER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DB2));
#endif
    return o_data.insertFromRight<QME_DB2_MESSAGE_NUMBER,
           QME_DB2_MESSAGE_NUMBER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_DB2_MESSAGE_NUMBER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DB2_MESSAGE_NUMBER]

//>> GET_[QME_DB2_MESSAGE_NUMBER]
static inline fapi2::buffer<uint64_t>& GET_QME_DB2_MESSAGE_NUMBER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DB2));
#endif
    return i_data.extractToRight<QME_DB2_MESSAGE_NUMBER,
           QME_DB2_MESSAGE_NUMBER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_DB2_MESSAGE_NUMBER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DB2_MESSAGE_NUMBER]

//>> PREP_[QME_PSSUM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_PSSUM(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PSSUM;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_PSSUM]

//>> GET_[QME_PSSUM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_PSSUM(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PSSUM;
#endif
    return fapi2::getScom(i_target, QME_PSSUM, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_PSSUM]

//>> PUT_[QME_PSSUM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_PSSUM(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return fapi2::putScom(i_target, QME_PSSUM, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_PSSUM]


//>> SET_[QME_PSSUM_PSTATE_REQ_C0]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_PSTATE_REQ_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.insertFromRight<QME_PSSUM_PSTATE_REQ_C0,
           QME_PSSUM_PSTATE_REQ_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PSSUM_PSTATE_REQ_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_PSTATE_REQ_C0]

//>> SET_[QME_PSSUM_PSTATE_REQ_C0]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_PSTATE_REQ_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.insertFromRight<QME_PSSUM_PSTATE_REQ_C0,
           QME_PSSUM_PSTATE_REQ_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PSSUM_PSTATE_REQ_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_PSTATE_REQ_C0]

//>> GET_[QME_PSSUM_PSTATE_REQ_C0]
static inline fapi2::buffer<uint64_t>& GET_QME_PSSUM_PSTATE_REQ_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return i_data.extractToRight<QME_PSSUM_PSTATE_REQ_C0,
           QME_PSSUM_PSTATE_REQ_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PSSUM_PSTATE_REQ_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSSUM_PSTATE_REQ_C0]

//>> SET_[QME_PSSUM_PSTATE_REQ_C1]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_PSTATE_REQ_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.insertFromRight<QME_PSSUM_PSTATE_REQ_C1,
           QME_PSSUM_PSTATE_REQ_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PSSUM_PSTATE_REQ_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_PSTATE_REQ_C1]

//>> SET_[QME_PSSUM_PSTATE_REQ_C1]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_PSTATE_REQ_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.insertFromRight<QME_PSSUM_PSTATE_REQ_C1,
           QME_PSSUM_PSTATE_REQ_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PSSUM_PSTATE_REQ_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_PSTATE_REQ_C1]

//>> GET_[QME_PSSUM_PSTATE_REQ_C1]
static inline fapi2::buffer<uint64_t>& GET_QME_PSSUM_PSTATE_REQ_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return i_data.extractToRight<QME_PSSUM_PSTATE_REQ_C1,
           QME_PSSUM_PSTATE_REQ_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PSSUM_PSTATE_REQ_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSSUM_PSTATE_REQ_C1]

//>> SET_[QME_PSSUM_PSTATE_REQ_C2]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_PSTATE_REQ_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.insertFromRight<QME_PSSUM_PSTATE_REQ_C2,
           QME_PSSUM_PSTATE_REQ_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PSSUM_PSTATE_REQ_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_PSTATE_REQ_C2]

//>> SET_[QME_PSSUM_PSTATE_REQ_C2]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_PSTATE_REQ_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.insertFromRight<QME_PSSUM_PSTATE_REQ_C2,
           QME_PSSUM_PSTATE_REQ_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PSSUM_PSTATE_REQ_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_PSTATE_REQ_C2]

//>> GET_[QME_PSSUM_PSTATE_REQ_C2]
static inline fapi2::buffer<uint64_t>& GET_QME_PSSUM_PSTATE_REQ_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return i_data.extractToRight<QME_PSSUM_PSTATE_REQ_C2,
           QME_PSSUM_PSTATE_REQ_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PSSUM_PSTATE_REQ_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSSUM_PSTATE_REQ_C2]

//>> SET_[QME_PSSUM_PSTATE_REQ_C3]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_PSTATE_REQ_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.insertFromRight<QME_PSSUM_PSTATE_REQ_C3,
           QME_PSSUM_PSTATE_REQ_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PSSUM_PSTATE_REQ_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_PSTATE_REQ_C3]

//>> SET_[QME_PSSUM_PSTATE_REQ_C3]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_PSTATE_REQ_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.insertFromRight<QME_PSSUM_PSTATE_REQ_C3,
           QME_PSSUM_PSTATE_REQ_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PSSUM_PSTATE_REQ_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_PSTATE_REQ_C3]

//>> GET_[QME_PSSUM_PSTATE_REQ_C3]
static inline fapi2::buffer<uint64_t>& GET_QME_PSSUM_PSTATE_REQ_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return i_data.extractToRight<QME_PSSUM_PSTATE_REQ_C3,
           QME_PSSUM_PSTATE_REQ_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PSSUM_PSTATE_REQ_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSSUM_PSTATE_REQ_C3]

//>> SET_[QME_PSSUM_PSTATE_REQ_QUAD]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_PSTATE_REQ_QUAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.insertFromRight<QME_PSSUM_PSTATE_REQ_QUAD,
           QME_PSSUM_PSTATE_REQ_QUAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PSSUM_PSTATE_REQ_QUAD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_PSTATE_REQ_QUAD]

//>> SET_[QME_PSSUM_PSTATE_REQ_QUAD]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_PSTATE_REQ_QUAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.insertFromRight<QME_PSSUM_PSTATE_REQ_QUAD,
           QME_PSSUM_PSTATE_REQ_QUAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PSSUM_PSTATE_REQ_QUAD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_PSTATE_REQ_QUAD]

//>> GET_[QME_PSSUM_PSTATE_REQ_QUAD]
static inline fapi2::buffer<uint64_t>& GET_QME_PSSUM_PSTATE_REQ_QUAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return i_data.extractToRight<QME_PSSUM_PSTATE_REQ_QUAD,
           QME_PSSUM_PSTATE_REQ_QUAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PSSUM_PSTATE_REQ_QUAD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSSUM_PSTATE_REQ_QUAD]

//>> SET_[QME_PSSUM_RECENT_CORE_NUM]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_RECENT_CORE_NUM(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.insertFromRight<QME_PSSUM_RECENT_CORE_NUM,
           QME_PSSUM_RECENT_CORE_NUM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PSSUM_RECENT_CORE_NUM chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_RECENT_CORE_NUM]

//>> SET_[QME_PSSUM_RECENT_CORE_NUM]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_RECENT_CORE_NUM(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.insertFromRight<QME_PSSUM_RECENT_CORE_NUM,
           QME_PSSUM_RECENT_CORE_NUM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PSSUM_RECENT_CORE_NUM chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_RECENT_CORE_NUM]

//>> GET_[QME_PSSUM_RECENT_CORE_NUM]
static inline fapi2::buffer<uint64_t>& GET_QME_PSSUM_RECENT_CORE_NUM(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return i_data.extractToRight<QME_PSSUM_RECENT_CORE_NUM,
           QME_PSSUM_RECENT_CORE_NUM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PSSUM_RECENT_CORE_NUM chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSSUM_RECENT_CORE_NUM]

//>> SET_[QME_PSSUM_QME_QMCR_CORE_PARTIAL_GOOD]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_QME_QMCR_CORE_PARTIAL_GOOD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.insertFromRight<QME_PSSUM_QME_QMCR_CORE_PARTIAL_GOOD,
           QME_PSSUM_QME_QMCR_CORE_PARTIAL_GOOD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PSSUM_QME_QMCR_CORE_PARTIAL_GOOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_QME_QMCR_CORE_PARTIAL_GOOD]

//>> SET_[QME_PSSUM_QME_QMCR_CORE_PARTIAL_GOOD]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_QME_QMCR_CORE_PARTIAL_GOOD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.insertFromRight<QME_PSSUM_QME_QMCR_CORE_PARTIAL_GOOD,
           QME_PSSUM_QME_QMCR_CORE_PARTIAL_GOOD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PSSUM_QME_QMCR_CORE_PARTIAL_GOOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_QME_QMCR_CORE_PARTIAL_GOOD]

//>> GET_[QME_PSSUM_QME_QMCR_CORE_PARTIAL_GOOD]
static inline fapi2::buffer<uint64_t>& GET_QME_PSSUM_QME_QMCR_CORE_PARTIAL_GOOD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return i_data.extractToRight<QME_PSSUM_QME_QMCR_CORE_PARTIAL_GOOD,
           QME_PSSUM_QME_QMCR_CORE_PARTIAL_GOOD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PSSUM_QME_QMCR_CORE_PARTIAL_GOOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSSUM_QME_QMCR_CORE_PARTIAL_GOOD]

//>> SET_[QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.insertFromRight<QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE]

//>> SET_[QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.insertFromRight<QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE]

//>> SET_[QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.setBit<QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE]

//>> CLEAR_[QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.clearBit<QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE]

//>> GET_[QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return i_data.extractToRight<QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE]

//>> GET_[QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE]
static inline bool GET_QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return i_data.getBit<QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSSUM_QME_QMCR_AUTO_PMCR_UPDATE]

//>> SET_[QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.insertFromRight<QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE]

//>> SET_[QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.insertFromRight<QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE]

//>> SET_[QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.setBit<QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE]

//>> CLEAR_[QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.clearBit<QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE]

//>> GET_[QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return i_data.extractToRight<QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE]

//>> GET_[QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE]
static inline bool GET_QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return i_data.getBit<QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSSUM_QME_QMCR_PMCR_RECENT_MODE]

//>> SET_[QME_PSSUM_PMCR_PIG_PENDING]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_PMCR_PIG_PENDING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.insertFromRight<QME_PSSUM_PMCR_PIG_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PSSUM_PMCR_PIG_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_PMCR_PIG_PENDING]

//>> SET_[QME_PSSUM_PMCR_PIG_PENDING]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_PMCR_PIG_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.insertFromRight<QME_PSSUM_PMCR_PIG_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PSSUM_PMCR_PIG_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_PMCR_PIG_PENDING]

//>> SET_[QME_PSSUM_PMCR_PIG_PENDING]
static inline fapi2::buffer<uint64_t>& SET_QME_PSSUM_PMCR_PIG_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.setBit<QME_PSSUM_PMCR_PIG_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PSSUM_PMCR_PIG_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSSUM_PMCR_PIG_PENDING]

//>> CLEAR_[QME_PSSUM_PMCR_PIG_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSSUM_PMCR_PIG_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return o_data.clearBit<QME_PSSUM_PMCR_PIG_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PSSUM_PMCR_PIG_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSSUM_PMCR_PIG_PENDING]

//>> GET_[QME_PSSUM_PMCR_PIG_PENDING]
static inline fapi2::buffer<uint64_t>& GET_QME_PSSUM_PMCR_PIG_PENDING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return i_data.extractToRight<QME_PSSUM_PMCR_PIG_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PSSUM_PMCR_PIG_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSSUM_PMCR_PIG_PENDING]

//>> GET_[QME_PSSUM_PMCR_PIG_PENDING]
static inline bool GET_QME_PSSUM_PMCR_PIG_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSSUM));
#endif
    return i_data.getBit<QME_PSSUM_PMCR_PIG_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PSSUM_PMCR_PIG_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSSUM_PMCR_PIG_PENDING]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
