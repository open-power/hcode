/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_eq/reg00003_unused.H $    */
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

#ifndef __PPE_EQ_REG00003_H_UNUSED__
#define __PPE_EQ_REG00003_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


//>> PREP_[QME_PCBSID]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_PCBSID(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PCBSID;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_PCBSID]

//>> GET_[QME_PCBSID]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_PCBSID(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PCBSID;
#endif
    return fapi2::getScom(i_target, QME_PCBSID, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_PCBSID]

//>> PUT_[QME_PCBSID]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_PCBSID(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return fapi2::putScom(i_target, QME_PCBSID, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_PCBSID]


//>> SET_[QME_PCBSID_EQ_VLD]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_VLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PCBSID_EQ_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_VLD]

//>> SET_[QME_PCBSID_EQ_VLD]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_VLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PCBSID_EQ_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_VLD]

//>> SET_[QME_PCBSID_EQ_VLD]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.setBit<QME_PCBSID_EQ_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PCBSID_EQ_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_VLD]

//>> CLEAR_[QME_PCBSID_EQ_VLD]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PCBSID_EQ_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.clearBit<QME_PCBSID_EQ_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PCBSID_EQ_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PCBSID_EQ_VLD]

//>> GET_[QME_PCBSID_EQ_VLD]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSID_EQ_VLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.extractToRight<QME_PCBSID_EQ_VLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PCBSID_EQ_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_VLD]

//>> GET_[QME_PCBSID_EQ_VLD]
static inline bool GET_QME_PCBSID_EQ_VLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.getBit<QME_PCBSID_EQ_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PCBSID_EQ_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_VLD]

//>> SET_[QME_PCBSID_EQ_MERGING_SCHEME]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_MERGING_SCHEME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_MERGING_SCHEME,
           QME_PCBSID_EQ_MERGING_SCHEME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PCBSID_EQ_MERGING_SCHEME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_MERGING_SCHEME]

//>> SET_[QME_PCBSID_EQ_MERGING_SCHEME]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_MERGING_SCHEME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_MERGING_SCHEME,
           QME_PCBSID_EQ_MERGING_SCHEME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PCBSID_EQ_MERGING_SCHEME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_MERGING_SCHEME]

//>> GET_[QME_PCBSID_EQ_MERGING_SCHEME]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSID_EQ_MERGING_SCHEME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.extractToRight<QME_PCBSID_EQ_MERGING_SCHEME,
           QME_PCBSID_EQ_MERGING_SCHEME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PCBSID_EQ_MERGING_SCHEME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_MERGING_SCHEME]

//>> SET_[QME_PCBSID_SP_ACK]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_SP_ACK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_SP_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PCBSID_SP_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_SP_ACK]

//>> SET_[QME_PCBSID_SP_ACK]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_SP_ACK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_SP_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PCBSID_SP_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_SP_ACK]

//>> SET_[QME_PCBSID_SP_ACK]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_SP_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.setBit<QME_PCBSID_SP_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PCBSID_SP_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_SP_ACK]

//>> CLEAR_[QME_PCBSID_SP_ACK]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PCBSID_SP_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.clearBit<QME_PCBSID_SP_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PCBSID_SP_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PCBSID_SP_ACK]

//>> GET_[QME_PCBSID_SP_ACK]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSID_SP_ACK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.extractToRight<QME_PCBSID_SP_ACK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PCBSID_SP_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_SP_ACK]

//>> GET_[QME_PCBSID_SP_ACK]
static inline bool GET_QME_PCBSID_SP_ACK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.getBit<QME_PCBSID_SP_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PCBSID_SP_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_SP_ACK]

//>> SET_[QME_PCBSID_EQ_RD_NOT_WR]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_RD_NOT_WR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_RD_NOT_WR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PCBSID_EQ_RD_NOT_WR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_RD_NOT_WR]

//>> SET_[QME_PCBSID_EQ_RD_NOT_WR]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_RD_NOT_WR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_RD_NOT_WR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PCBSID_EQ_RD_NOT_WR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_RD_NOT_WR]

//>> SET_[QME_PCBSID_EQ_RD_NOT_WR]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_RD_NOT_WR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.setBit<QME_PCBSID_EQ_RD_NOT_WR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PCBSID_EQ_RD_NOT_WR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_RD_NOT_WR]

//>> CLEAR_[QME_PCBSID_EQ_RD_NOT_WR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PCBSID_EQ_RD_NOT_WR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.clearBit<QME_PCBSID_EQ_RD_NOT_WR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PCBSID_EQ_RD_NOT_WR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PCBSID_EQ_RD_NOT_WR]

//>> GET_[QME_PCBSID_EQ_RD_NOT_WR]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSID_EQ_RD_NOT_WR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.extractToRight<QME_PCBSID_EQ_RD_NOT_WR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PCBSID_EQ_RD_NOT_WR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_RD_NOT_WR]

//>> GET_[QME_PCBSID_EQ_RD_NOT_WR]
static inline bool GET_QME_PCBSID_EQ_RD_NOT_WR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.getBit<QME_PCBSID_EQ_RD_NOT_WR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PCBSID_EQ_RD_NOT_WR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_RD_NOT_WR]

//>> SET_[QME_PCBSID_EQ_P]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_P(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_P,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PCBSID_EQ_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_P]

//>> SET_[QME_PCBSID_EQ_P]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_P(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_P,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PCBSID_EQ_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_P]

//>> SET_[QME_PCBSID_EQ_P]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_P(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.setBit<QME_PCBSID_EQ_P>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PCBSID_EQ_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_P]

//>> CLEAR_[QME_PCBSID_EQ_P]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PCBSID_EQ_P(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.clearBit<QME_PCBSID_EQ_P>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PCBSID_EQ_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PCBSID_EQ_P]

//>> GET_[QME_PCBSID_EQ_P]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSID_EQ_P(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.extractToRight<QME_PCBSID_EQ_P,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PCBSID_EQ_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_P]

//>> GET_[QME_PCBSID_EQ_P]
static inline bool GET_QME_PCBSID_EQ_P(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.getBit<QME_PCBSID_EQ_P>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PCBSID_EQ_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_P]

//>> SET_[QME_PCBSID_EQ_LOCAL_ADDR_P]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_LOCAL_ADDR_P(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_LOCAL_ADDR_P,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PCBSID_EQ_LOCAL_ADDR_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_LOCAL_ADDR_P]

//>> SET_[QME_PCBSID_EQ_LOCAL_ADDR_P]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_LOCAL_ADDR_P(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_LOCAL_ADDR_P,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PCBSID_EQ_LOCAL_ADDR_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_LOCAL_ADDR_P]

//>> SET_[QME_PCBSID_EQ_LOCAL_ADDR_P]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_LOCAL_ADDR_P(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.setBit<QME_PCBSID_EQ_LOCAL_ADDR_P>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_PCBSID_EQ_LOCAL_ADDR_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_LOCAL_ADDR_P]

//>> CLEAR_[QME_PCBSID_EQ_LOCAL_ADDR_P]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PCBSID_EQ_LOCAL_ADDR_P(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.clearBit<QME_PCBSID_EQ_LOCAL_ADDR_P>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_PCBSID_EQ_LOCAL_ADDR_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PCBSID_EQ_LOCAL_ADDR_P]

//>> GET_[QME_PCBSID_EQ_LOCAL_ADDR_P]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSID_EQ_LOCAL_ADDR_P(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.extractToRight<QME_PCBSID_EQ_LOCAL_ADDR_P,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PCBSID_EQ_LOCAL_ADDR_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_LOCAL_ADDR_P]

//>> GET_[QME_PCBSID_EQ_LOCAL_ADDR_P]
static inline bool GET_QME_PCBSID_EQ_LOCAL_ADDR_P(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.getBit<QME_PCBSID_EQ_LOCAL_ADDR_P>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_PCBSID_EQ_LOCAL_ADDR_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_LOCAL_ADDR_P]

//>> SET_[QME_PCBSID_EQ_PORT]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_PORT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_PORT,
           QME_PCBSID_EQ_PORT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PCBSID_EQ_PORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_PORT]

//>> SET_[QME_PCBSID_EQ_PORT]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_PORT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_PORT,
           QME_PCBSID_EQ_PORT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PCBSID_EQ_PORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_PORT]

//>> GET_[QME_PCBSID_EQ_PORT]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSID_EQ_PORT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.extractToRight<QME_PCBSID_EQ_PORT,
           QME_PCBSID_EQ_PORT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PCBSID_EQ_PORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_PORT]

//>> SET_[QME_PCBSID_EQ_LOCAL_ADDR]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_LOCAL_ADDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_LOCAL_ADDR,
           QME_PCBSID_EQ_LOCAL_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_PCBSID_EQ_LOCAL_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_LOCAL_ADDR]

//>> SET_[QME_PCBSID_EQ_LOCAL_ADDR]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_LOCAL_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_LOCAL_ADDR,
           QME_PCBSID_EQ_LOCAL_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_PCBSID_EQ_LOCAL_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_LOCAL_ADDR]

//>> GET_[QME_PCBSID_EQ_LOCAL_ADDR]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSID_EQ_LOCAL_ADDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.extractToRight<QME_PCBSID_EQ_LOCAL_ADDR,
           QME_PCBSID_EQ_LOCAL_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_PCBSID_EQ_LOCAL_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_LOCAL_ADDR]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
