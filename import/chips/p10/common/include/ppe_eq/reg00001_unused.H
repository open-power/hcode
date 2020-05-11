/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_eq/reg00001_unused.H $    */
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

#ifndef __PPE_EQ_REG00001_H_UNUSED__
#define __PPE_EQ_REG00001_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


//>> PREP_[QME_EIPR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_EIPR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EIPR_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_EIPR_WO_CLEAR]

//>> GET_[QME_EIPR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_EIPR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EIPR_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, QME_EIPR_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_EIPR_WO_CLEAR]

//>> PUT_[QME_EIPR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_EIPR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_EIPR_RW, QME_EIPR_WO_CLEAR, QME_EIPR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_EIPR_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_EIPR_WO_CLEAR]

//>> PREP_[QME_EIPR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_EIPR_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EIPR_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_EIPR_WO_OR]

//>> GET_[QME_EIPR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_EIPR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EIPR_WO_OR;
#endif
    return fapi2::getScom(i_target, QME_EIPR_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_EIPR_WO_OR]

//>> PUT_[QME_EIPR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_EIPR_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_EIPR_RW, QME_EIPR_WO_CLEAR, QME_EIPR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_EIPR_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_EIPR_WO_OR]


//>> PREP_[QME_LFIRMASK_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_LFIRMASK_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIRMASK_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_LFIRMASK_WO_AND]

//>> GET_[QME_LFIRMASK_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_LFIRMASK_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIRMASK_WO_AND;
#endif
    return fapi2::getScom(i_target, QME_LFIRMASK_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_LFIRMASK_WO_AND]

//>> PUT_[QME_LFIRMASK_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_LFIRMASK_WO_AND(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_LFIRMASK_RW, QME_LFIRMASK_WO_AND, QME_LFIRMASK_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_LFIRMASK_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_LFIRMASK_WO_AND]

//>> PREP_[QME_LFIRMASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_LFIRMASK_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIRMASK_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_LFIRMASK_WO_OR]

//>> GET_[QME_LFIRMASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_LFIRMASK_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIRMASK_WO_OR;
#endif
    return fapi2::getScom(i_target, QME_LFIRMASK_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_LFIRMASK_WO_OR]

//>> PUT_[QME_LFIRMASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_LFIRMASK_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_LFIRMASK_RW, QME_LFIRMASK_WO_AND, QME_LFIRMASK_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_LFIRMASK_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_LFIRMASK_WO_OR]


//>> PREP_[QME_SWHR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_SWHR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SWHR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_SWHR]

//>> GET_[QME_SWHR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_SWHR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SWHR;
#endif
    return fapi2::getScom(i_target, QME_SWHR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_SWHR]

//>> PUT_[QME_SWHR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_SWHR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return fapi2::putScom(i_target, QME_SWHR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_SWHR]


//>> SET_[QME_SWHR_SPC_WKUP_HISTORY_C0]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_SPC_WKUP_HISTORY_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_SPC_WKUP_HISTORY_C0,
           QME_SWHR_SPC_WKUP_HISTORY_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_SPC_WKUP_HISTORY_C0]

//>> SET_[QME_SWHR_SPC_WKUP_HISTORY_C0]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_SPC_WKUP_HISTORY_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_SPC_WKUP_HISTORY_C0,
           QME_SWHR_SPC_WKUP_HISTORY_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_SPC_WKUP_HISTORY_C0]

//>> GET_[QME_SWHR_SPC_WKUP_HISTORY_C0]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_SPC_WKUP_HISTORY_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_SPC_WKUP_HISTORY_C0,
           QME_SWHR_SPC_WKUP_HISTORY_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_SPC_WKUP_HISTORY_C0]

//>> SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET]

//>> SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET]

//>> GET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_SET]

//>> SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR]

//>> SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR]

//>> GET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_CLR]

//>> SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT]

//>> SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT]

//>> GET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_ACT]

//>> SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP]

//>> SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP]

//>> GET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP,
           QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SSH_SRC_SPC_WKUP_RECENT_DRP]

//>> SET_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]

//>> CLEAR_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]

//>> GET_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]

//>> GET_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]
static inline bool GET_QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SPWU_OTR_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]

//>> CLEAR_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]

//>> GET_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]

//>> GET_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]
static inline bool GET_QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SPWU_FSP_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]

//>> CLEAR_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]

//>> GET_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]

//>> GET_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]
static inline bool GET_QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SPWU_OCC_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]

//>> CLEAR_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]

//>> GET_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]

//>> GET_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]
static inline bool GET_QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_QME_SPWU_HYP_SPECIAL_WKUP_REQ]

//>> SET_[QME_SWHR_SPC_WKUP_HISTORY_C1]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_SPC_WKUP_HISTORY_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_SPC_WKUP_HISTORY_C1,
           QME_SWHR_SPC_WKUP_HISTORY_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_SPC_WKUP_HISTORY_C1]

//>> SET_[QME_SWHR_SPC_WKUP_HISTORY_C1]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_SPC_WKUP_HISTORY_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_SPC_WKUP_HISTORY_C1,
           QME_SWHR_SPC_WKUP_HISTORY_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_SPC_WKUP_HISTORY_C1]

//>> GET_[QME_SWHR_SPC_WKUP_HISTORY_C1]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_SPC_WKUP_HISTORY_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_SPC_WKUP_HISTORY_C1,
           QME_SWHR_SPC_WKUP_HISTORY_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_SPC_WKUP_HISTORY_C1]

//>> SET_[QME_SWHR_SPC_WKUP_HISTORY_C2]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_SPC_WKUP_HISTORY_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_SPC_WKUP_HISTORY_C2,
           QME_SWHR_SPC_WKUP_HISTORY_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_SPC_WKUP_HISTORY_C2]

//>> SET_[QME_SWHR_SPC_WKUP_HISTORY_C2]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_SPC_WKUP_HISTORY_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_SPC_WKUP_HISTORY_C2,
           QME_SWHR_SPC_WKUP_HISTORY_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_SPC_WKUP_HISTORY_C2]

//>> GET_[QME_SWHR_SPC_WKUP_HISTORY_C2]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_SPC_WKUP_HISTORY_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_SPC_WKUP_HISTORY_C2,
           QME_SWHR_SPC_WKUP_HISTORY_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_SPC_WKUP_HISTORY_C2]

//>> SET_[QME_SWHR_SPC_WKUP_HISTORY_C3]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_SPC_WKUP_HISTORY_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_SPC_WKUP_HISTORY_C3,
           QME_SWHR_SPC_WKUP_HISTORY_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_SPC_WKUP_HISTORY_C3]

//>> SET_[QME_SWHR_SPC_WKUP_HISTORY_C3]
static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_SPC_WKUP_HISTORY_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_SPC_WKUP_HISTORY_C3,
           QME_SWHR_SPC_WKUP_HISTORY_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWHR_SPC_WKUP_HISTORY_C3]

//>> GET_[QME_SWHR_SPC_WKUP_HISTORY_C3]
static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_SPC_WKUP_HISTORY_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_SPC_WKUP_HISTORY_C3,
           QME_SWHR_SPC_WKUP_HISTORY_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWHR_SPC_WKUP_HISTORY_C3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWHR_SPC_WKUP_HISTORY_C3]

//>> PREP_[QME_SWPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_SWPR0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SWPR0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_SWPR0]

//>> GET_[QME_SWPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_SWPR0(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SWPR0;
#endif
    return fapi2::getScom(i_target, QME_SWPR0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_SWPR0]

//>> PUT_[QME_SWPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_SWPR0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_SWPR0));
#endif
    return fapi2::putScom(i_target, QME_SWPR0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_SWPR0]


//>> SET_[QME_SWPR0_BAR]
static inline fapi2::buffer<uint64_t>& SET_QME_SWPR0_BAR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWPR0));
#endif
    return o_data.insertFromRight<QME_SWPR0_BAR,
           QME_SWPR0_BAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWPR0_BAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWPR0_BAR]

//>> SET_[QME_SWPR0_BAR]
static inline fapi2::buffer<uint64_t>& SET_QME_SWPR0_BAR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWPR0));
#endif
    return o_data.insertFromRight<QME_SWPR0_BAR,
           QME_SWPR0_BAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWPR0_BAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWPR0_BAR]

//>> GET_[QME_SWPR0_BAR]
static inline fapi2::buffer<uint64_t>& GET_QME_SWPR0_BAR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWPR0));
#endif
    return i_data.extractToRight<QME_SWPR0_BAR,
           QME_SWPR0_BAR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWPR0_BAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWPR0_BAR]

//>> SET_[QME_SWPR0_SIZE]
static inline fapi2::buffer<uint64_t>& SET_QME_SWPR0_SIZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWPR0));
#endif
    return o_data.insertFromRight<QME_SWPR0_SIZE,
           QME_SWPR0_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWPR0_SIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWPR0_SIZE]

//>> SET_[QME_SWPR0_SIZE]
static inline fapi2::buffer<uint64_t>& SET_QME_SWPR0_SIZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWPR0));
#endif
    return o_data.insertFromRight<QME_SWPR0_SIZE,
           QME_SWPR0_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWPR0_SIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWPR0_SIZE]

//>> GET_[QME_SWPR0_SIZE]
static inline fapi2::buffer<uint64_t>& GET_QME_SWPR0_SIZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWPR0));
#endif
    return i_data.extractToRight<QME_SWPR0_SIZE,
           QME_SWPR0_SIZE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWPR0_SIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWPR0_SIZE]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
