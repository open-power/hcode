/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_eq/reg00007.H $           */
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

#ifndef __PPE_EQ_REG00007_H_
#define __PPE_EQ_REG00007_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


//>> PREP_[QME_ERR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_ERR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_ERR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_ERR]

//>> GET_[QME_ERR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_ERR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_ERR;
#endif
    return fapi2::getScom(i_target, QME_ERR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_ERR]

//>> PUT_[QME_ERR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_ERR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return fapi2::putScom(i_target, QME_ERR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_ERR]


//>> SET_[QME_ERR_PPE_INTERNAL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PPE_INTERNAL_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_PPE_INTERNAL_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_ERR_PPE_INTERNAL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PPE_INTERNAL_ERROR]

//>> SET_[QME_ERR_PPE_INTERNAL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PPE_INTERNAL_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_PPE_INTERNAL_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_ERR_PPE_INTERNAL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PPE_INTERNAL_ERROR]

//>> SET_[QME_ERR_PPE_INTERNAL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PPE_INTERNAL_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.setBit<QME_ERR_PPE_INTERNAL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_ERR_PPE_INTERNAL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PPE_INTERNAL_ERROR]

//>> CLEAR_[QME_ERR_PPE_INTERNAL_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_ERR_PPE_INTERNAL_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.clearBit<QME_ERR_PPE_INTERNAL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_ERR_PPE_INTERNAL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_ERR_PPE_INTERNAL_ERROR]

//>> GET_[QME_ERR_PPE_INTERNAL_ERROR]
static inline fapi2::buffer<uint64_t>& GET_QME_ERR_PPE_INTERNAL_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.extractToRight<QME_ERR_PPE_INTERNAL_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_ERR_PPE_INTERNAL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_PPE_INTERNAL_ERROR]

//>> GET_[QME_ERR_PPE_INTERNAL_ERROR]
static inline bool GET_QME_ERR_PPE_INTERNAL_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.getBit<QME_ERR_PPE_INTERNAL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_ERR_PPE_INTERNAL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_PPE_INTERNAL_ERROR]

//>> SET_[QME_ERR_PPE_EXTERNAL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PPE_EXTERNAL_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_PPE_EXTERNAL_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_ERR_PPE_EXTERNAL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PPE_EXTERNAL_ERROR]

//>> SET_[QME_ERR_PPE_EXTERNAL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PPE_EXTERNAL_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_PPE_EXTERNAL_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_ERR_PPE_EXTERNAL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PPE_EXTERNAL_ERROR]

//>> SET_[QME_ERR_PPE_EXTERNAL_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PPE_EXTERNAL_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.setBit<QME_ERR_PPE_EXTERNAL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_ERR_PPE_EXTERNAL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PPE_EXTERNAL_ERROR]

//>> CLEAR_[QME_ERR_PPE_EXTERNAL_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_ERR_PPE_EXTERNAL_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.clearBit<QME_ERR_PPE_EXTERNAL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_ERR_PPE_EXTERNAL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_ERR_PPE_EXTERNAL_ERROR]

//>> GET_[QME_ERR_PPE_EXTERNAL_ERROR]
static inline fapi2::buffer<uint64_t>& GET_QME_ERR_PPE_EXTERNAL_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.extractToRight<QME_ERR_PPE_EXTERNAL_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_ERR_PPE_EXTERNAL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_PPE_EXTERNAL_ERROR]

//>> GET_[QME_ERR_PPE_EXTERNAL_ERROR]
static inline bool GET_QME_ERR_PPE_EXTERNAL_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.getBit<QME_ERR_PPE_EXTERNAL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_ERR_PPE_EXTERNAL_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_PPE_EXTERNAL_ERROR]

//>> SET_[QME_ERR_PPE_PROGRESS_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PPE_PROGRESS_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_PPE_PROGRESS_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_ERR_PPE_PROGRESS_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PPE_PROGRESS_ERROR]

//>> SET_[QME_ERR_PPE_PROGRESS_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PPE_PROGRESS_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_PPE_PROGRESS_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_ERR_PPE_PROGRESS_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PPE_PROGRESS_ERROR]

//>> SET_[QME_ERR_PPE_PROGRESS_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PPE_PROGRESS_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.setBit<QME_ERR_PPE_PROGRESS_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_ERR_PPE_PROGRESS_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PPE_PROGRESS_ERROR]

//>> CLEAR_[QME_ERR_PPE_PROGRESS_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_ERR_PPE_PROGRESS_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.clearBit<QME_ERR_PPE_PROGRESS_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_ERR_PPE_PROGRESS_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_ERR_PPE_PROGRESS_ERROR]

//>> GET_[QME_ERR_PPE_PROGRESS_ERROR]
static inline fapi2::buffer<uint64_t>& GET_QME_ERR_PPE_PROGRESS_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.extractToRight<QME_ERR_PPE_PROGRESS_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_ERR_PPE_PROGRESS_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_PPE_PROGRESS_ERROR]

//>> GET_[QME_ERR_PPE_PROGRESS_ERROR]
static inline bool GET_QME_ERR_PPE_PROGRESS_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.getBit<QME_ERR_PPE_PROGRESS_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_ERR_PPE_PROGRESS_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_PPE_PROGRESS_ERROR]

//>> SET_[QME_ERR_PPE_BREAKPOINT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PPE_BREAKPOINT_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_PPE_BREAKPOINT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_ERR_PPE_BREAKPOINT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PPE_BREAKPOINT_ERROR]

//>> SET_[QME_ERR_PPE_BREAKPOINT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PPE_BREAKPOINT_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_PPE_BREAKPOINT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_ERR_PPE_BREAKPOINT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PPE_BREAKPOINT_ERROR]

//>> SET_[QME_ERR_PPE_BREAKPOINT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PPE_BREAKPOINT_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.setBit<QME_ERR_PPE_BREAKPOINT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_ERR_PPE_BREAKPOINT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PPE_BREAKPOINT_ERROR]

//>> CLEAR_[QME_ERR_PPE_BREAKPOINT_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_ERR_PPE_BREAKPOINT_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.clearBit<QME_ERR_PPE_BREAKPOINT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_ERR_PPE_BREAKPOINT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_ERR_PPE_BREAKPOINT_ERROR]

//>> GET_[QME_ERR_PPE_BREAKPOINT_ERROR]
static inline fapi2::buffer<uint64_t>& GET_QME_ERR_PPE_BREAKPOINT_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.extractToRight<QME_ERR_PPE_BREAKPOINT_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_ERR_PPE_BREAKPOINT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_PPE_BREAKPOINT_ERROR]

//>> GET_[QME_ERR_PPE_BREAKPOINT_ERROR]
static inline bool GET_QME_ERR_PPE_BREAKPOINT_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.getBit<QME_ERR_PPE_BREAKPOINT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_ERR_PPE_BREAKPOINT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_PPE_BREAKPOINT_ERROR]

//>> SET_[QME_ERR_RESCLK_FREEZE]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_RESCLK_FREEZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_RESCLK_FREEZE,
           QME_ERR_RESCLK_FREEZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_ERR_RESCLK_FREEZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_RESCLK_FREEZE]

//>> SET_[QME_ERR_RESCLK_FREEZE]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_RESCLK_FREEZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_RESCLK_FREEZE,
           QME_ERR_RESCLK_FREEZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_ERR_RESCLK_FREEZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_RESCLK_FREEZE]

//>> GET_[QME_ERR_RESCLK_FREEZE]
static inline fapi2::buffer<uint64_t>& GET_QME_ERR_RESCLK_FREEZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.extractToRight<QME_ERR_RESCLK_FREEZE,
           QME_ERR_RESCLK_FREEZE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_ERR_RESCLK_FREEZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_RESCLK_FREEZE]

//>> SET_[QME_ERR_SPECIAL_WKUP_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_SPECIAL_WKUP_PROTOCOL_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_SPECIAL_WKUP_PROTOCOL_ERR,
           QME_ERR_SPECIAL_WKUP_PROTOCOL_ERR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_ERR_SPECIAL_WKUP_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_SPECIAL_WKUP_PROTOCOL_ERR]

//>> SET_[QME_ERR_SPECIAL_WKUP_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_SPECIAL_WKUP_PROTOCOL_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_SPECIAL_WKUP_PROTOCOL_ERR,
           QME_ERR_SPECIAL_WKUP_PROTOCOL_ERR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_ERR_SPECIAL_WKUP_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_SPECIAL_WKUP_PROTOCOL_ERR]

//>> GET_[QME_ERR_SPECIAL_WKUP_PROTOCOL_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_ERR_SPECIAL_WKUP_PROTOCOL_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.extractToRight<QME_ERR_SPECIAL_WKUP_PROTOCOL_ERR,
           QME_ERR_SPECIAL_WKUP_PROTOCOL_ERR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_ERR_SPECIAL_WKUP_PROTOCOL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_SPECIAL_WKUP_PROTOCOL_ERR]

//>> SET_[QME_ERR_SPECIAL_WKUP_DONE_WINDOW]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_SPECIAL_WKUP_DONE_WINDOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_SPECIAL_WKUP_DONE_WINDOW,
           QME_ERR_SPECIAL_WKUP_DONE_WINDOW_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_ERR_SPECIAL_WKUP_DONE_WINDOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_SPECIAL_WKUP_DONE_WINDOW]

//>> SET_[QME_ERR_SPECIAL_WKUP_DONE_WINDOW]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_SPECIAL_WKUP_DONE_WINDOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_SPECIAL_WKUP_DONE_WINDOW,
           QME_ERR_SPECIAL_WKUP_DONE_WINDOW_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_ERR_SPECIAL_WKUP_DONE_WINDOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_SPECIAL_WKUP_DONE_WINDOW]

//>> GET_[QME_ERR_SPECIAL_WKUP_DONE_WINDOW]
static inline fapi2::buffer<uint64_t>& GET_QME_ERR_SPECIAL_WKUP_DONE_WINDOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.extractToRight<QME_ERR_SPECIAL_WKUP_DONE_WINDOW,
           QME_ERR_SPECIAL_WKUP_DONE_WINDOW_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_ERR_SPECIAL_WKUP_DONE_WINDOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_SPECIAL_WKUP_DONE_WINDOW]

//>> SET_[QME_ERR_DISABLED_INTR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_DISABLED_INTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_DISABLED_INTR,
           QME_ERR_DISABLED_INTR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_ERR_DISABLED_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_DISABLED_INTR]

//>> SET_[QME_ERR_DISABLED_INTR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_DISABLED_INTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_DISABLED_INTR,
           QME_ERR_DISABLED_INTR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_ERR_DISABLED_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_DISABLED_INTR]

//>> GET_[QME_ERR_DISABLED_INTR]
static inline fapi2::buffer<uint64_t>& GET_QME_ERR_DISABLED_INTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.extractToRight<QME_ERR_DISABLED_INTR,
           QME_ERR_DISABLED_INTR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_ERR_DISABLED_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_DISABLED_INTR]

//>> SET_[QME_ERR_DECONFIGURED_INTR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_DECONFIGURED_INTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_DECONFIGURED_INTR,
           QME_ERR_DECONFIGURED_INTR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_ERR_DECONFIGURED_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_DECONFIGURED_INTR]

//>> SET_[QME_ERR_DECONFIGURED_INTR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_DECONFIGURED_INTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_DECONFIGURED_INTR,
           QME_ERR_DECONFIGURED_INTR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_ERR_DECONFIGURED_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_DECONFIGURED_INTR]

//>> GET_[QME_ERR_DECONFIGURED_INTR]
static inline fapi2::buffer<uint64_t>& GET_QME_ERR_DECONFIGURED_INTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.extractToRight<QME_ERR_DECONFIGURED_INTR,
           QME_ERR_DECONFIGURED_INTR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_ERR_DECONFIGURED_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_DECONFIGURED_INTR]

//>> SET_[QME_ERR_CTFS_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_CTFS_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_CTFS_ERR,
           QME_ERR_CTFS_ERR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_ERR_CTFS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_CTFS_ERR]

//>> SET_[QME_ERR_CTFS_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_CTFS_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_CTFS_ERR,
           QME_ERR_CTFS_ERR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_ERR_CTFS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_CTFS_ERR]

//>> GET_[QME_ERR_CTFS_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_ERR_CTFS_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.extractToRight<QME_ERR_CTFS_ERR,
           QME_ERR_CTFS_ERR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_ERR_CTFS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_CTFS_ERR]

//>> SET_[QME_ERR_CPMS_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_CPMS_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_CPMS_ERR,
           QME_ERR_CPMS_ERR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_ERR_CPMS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_CPMS_ERR]

//>> SET_[QME_ERR_CPMS_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_CPMS_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_CPMS_ERR,
           QME_ERR_CPMS_ERR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_ERR_CPMS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_CPMS_ERR]

//>> GET_[QME_ERR_CPMS_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_ERR_CPMS_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.extractToRight<QME_ERR_CPMS_ERR,
           QME_ERR_CPMS_ERR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_ERR_CPMS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_CPMS_ERR]

//>> SET_[QME_ERR_PCB_ENDPOINT_RESET]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PCB_ENDPOINT_RESET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_PCB_ENDPOINT_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_ERR_PCB_ENDPOINT_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PCB_ENDPOINT_RESET]

//>> SET_[QME_ERR_PCB_ENDPOINT_RESET]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PCB_ENDPOINT_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_PCB_ENDPOINT_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_ERR_PCB_ENDPOINT_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PCB_ENDPOINT_RESET]

//>> SET_[QME_ERR_PCB_ENDPOINT_RESET]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PCB_ENDPOINT_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.setBit<QME_ERR_PCB_ENDPOINT_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_ERR_PCB_ENDPOINT_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PCB_ENDPOINT_RESET]

//>> CLEAR_[QME_ERR_PCB_ENDPOINT_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_ERR_PCB_ENDPOINT_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.clearBit<QME_ERR_PCB_ENDPOINT_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_ERR_PCB_ENDPOINT_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_ERR_PCB_ENDPOINT_RESET]

//>> GET_[QME_ERR_PCB_ENDPOINT_RESET]
static inline fapi2::buffer<uint64_t>& GET_QME_ERR_PCB_ENDPOINT_RESET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.extractToRight<QME_ERR_PCB_ENDPOINT_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_ERR_PCB_ENDPOINT_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_PCB_ENDPOINT_RESET]

//>> GET_[QME_ERR_PCB_ENDPOINT_RESET]
static inline bool GET_QME_ERR_PCB_ENDPOINT_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.getBit<QME_ERR_PCB_ENDPOINT_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_ERR_PCB_ENDPOINT_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_PCB_ENDPOINT_RESET]

//>> SET_[QME_ERR_PCB_NETWORK_RESET]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PCB_NETWORK_RESET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_PCB_NETWORK_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_ERR_PCB_NETWORK_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PCB_NETWORK_RESET]

//>> SET_[QME_ERR_PCB_NETWORK_RESET]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PCB_NETWORK_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_PCB_NETWORK_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_ERR_PCB_NETWORK_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PCB_NETWORK_RESET]

//>> SET_[QME_ERR_PCB_NETWORK_RESET]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PCB_NETWORK_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.setBit<QME_ERR_PCB_NETWORK_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_ERR_PCB_NETWORK_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PCB_NETWORK_RESET]

//>> CLEAR_[QME_ERR_PCB_NETWORK_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_ERR_PCB_NETWORK_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.clearBit<QME_ERR_PCB_NETWORK_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_ERR_PCB_NETWORK_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_ERR_PCB_NETWORK_RESET]

//>> GET_[QME_ERR_PCB_NETWORK_RESET]
static inline fapi2::buffer<uint64_t>& GET_QME_ERR_PCB_NETWORK_RESET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.extractToRight<QME_ERR_PCB_NETWORK_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_ERR_PCB_NETWORK_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_PCB_NETWORK_RESET]

//>> GET_[QME_ERR_PCB_NETWORK_RESET]
static inline bool GET_QME_ERR_PCB_NETWORK_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.getBit<QME_ERR_PCB_NETWORK_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_ERR_PCB_NETWORK_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_PCB_NETWORK_RESET]

//>> SET_[QME_ERR_PIG_PENDING_SOURCE_LOST]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PIG_PENDING_SOURCE_LOST(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_PIG_PENDING_SOURCE_LOST,
           QME_ERR_PIG_PENDING_SOURCE_LOST_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_ERR_PIG_PENDING_SOURCE_LOST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PIG_PENDING_SOURCE_LOST]

//>> SET_[QME_ERR_PIG_PENDING_SOURCE_LOST]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PIG_PENDING_SOURCE_LOST(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_PIG_PENDING_SOURCE_LOST,
           QME_ERR_PIG_PENDING_SOURCE_LOST_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_ERR_PIG_PENDING_SOURCE_LOST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PIG_PENDING_SOURCE_LOST]

//>> GET_[QME_ERR_PIG_PENDING_SOURCE_LOST]
static inline fapi2::buffer<uint64_t>& GET_QME_ERR_PIG_PENDING_SOURCE_LOST(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.extractToRight<QME_ERR_PIG_PENDING_SOURCE_LOST,
           QME_ERR_PIG_PENDING_SOURCE_LOST_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_ERR_PIG_PENDING_SOURCE_LOST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_PIG_PENDING_SOURCE_LOST]

//>> SET_[QME_ERR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_SPARE,
           QME_ERR_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_ERR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_SPARE]

//>> SET_[QME_ERR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_SPARE,
           QME_ERR_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_ERR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_SPARE]

//>> GET_[QME_ERR_SPARE]
static inline fapi2::buffer<uint64_t>& GET_QME_ERR_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.extractToRight<QME_ERR_SPARE,
           QME_ERR_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_ERR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_SPARE]

//>> SET_[QME_ERR_PCB_NETWORK_RESET_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PCB_NETWORK_RESET_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_PCB_NETWORK_RESET_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_ERR_PCB_NETWORK_RESET_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PCB_NETWORK_RESET_REQ]

//>> SET_[QME_ERR_PCB_NETWORK_RESET_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PCB_NETWORK_RESET_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_PCB_NETWORK_RESET_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_ERR_PCB_NETWORK_RESET_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PCB_NETWORK_RESET_REQ]

//>> SET_[QME_ERR_PCB_NETWORK_RESET_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PCB_NETWORK_RESET_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.setBit<QME_ERR_PCB_NETWORK_RESET_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_ERR_PCB_NETWORK_RESET_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PCB_NETWORK_RESET_REQ]

//>> CLEAR_[QME_ERR_PCB_NETWORK_RESET_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_ERR_PCB_NETWORK_RESET_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.clearBit<QME_ERR_PCB_NETWORK_RESET_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_ERR_PCB_NETWORK_RESET_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_ERR_PCB_NETWORK_RESET_REQ]

//>> GET_[QME_ERR_PCB_NETWORK_RESET_REQ]
static inline fapi2::buffer<uint64_t>& GET_QME_ERR_PCB_NETWORK_RESET_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.extractToRight<QME_ERR_PCB_NETWORK_RESET_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_ERR_PCB_NETWORK_RESET_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_PCB_NETWORK_RESET_REQ]

//>> GET_[QME_ERR_PCB_NETWORK_RESET_REQ]
static inline bool GET_QME_ERR_PCB_NETWORK_RESET_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.getBit<QME_ERR_PCB_NETWORK_RESET_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_ERR_PCB_NETWORK_RESET_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_PCB_NETWORK_RESET_REQ]

//>> SET_[QME_ERR_PCB_NETWORK_RESET_PIG_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PCB_NETWORK_RESET_PIG_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_PCB_NETWORK_RESET_PIG_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_ERR_PCB_NETWORK_RESET_PIG_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PCB_NETWORK_RESET_PIG_REQ]

//>> SET_[QME_ERR_PCB_NETWORK_RESET_PIG_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PCB_NETWORK_RESET_PIG_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_PCB_NETWORK_RESET_PIG_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_ERR_PCB_NETWORK_RESET_PIG_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PCB_NETWORK_RESET_PIG_REQ]

//>> SET_[QME_ERR_PCB_NETWORK_RESET_PIG_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_PCB_NETWORK_RESET_PIG_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.setBit<QME_ERR_PCB_NETWORK_RESET_PIG_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_ERR_PCB_NETWORK_RESET_PIG_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_PCB_NETWORK_RESET_PIG_REQ]

//>> CLEAR_[QME_ERR_PCB_NETWORK_RESET_PIG_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_ERR_PCB_NETWORK_RESET_PIG_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.clearBit<QME_ERR_PCB_NETWORK_RESET_PIG_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_ERR_PCB_NETWORK_RESET_PIG_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_ERR_PCB_NETWORK_RESET_PIG_REQ]

//>> GET_[QME_ERR_PCB_NETWORK_RESET_PIG_REQ]
static inline fapi2::buffer<uint64_t>& GET_QME_ERR_PCB_NETWORK_RESET_PIG_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.extractToRight<QME_ERR_PCB_NETWORK_RESET_PIG_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_ERR_PCB_NETWORK_RESET_PIG_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_PCB_NETWORK_RESET_PIG_REQ]

//>> GET_[QME_ERR_PCB_NETWORK_RESET_PIG_REQ]
static inline bool GET_QME_ERR_PCB_NETWORK_RESET_PIG_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.getBit<QME_ERR_PCB_NETWORK_RESET_PIG_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_ERR_PCB_NETWORK_RESET_PIG_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_PCB_NETWORK_RESET_PIG_REQ]

//>> SET_[QME_ERR_LOCAL_ACCESS_PROTECT_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_LOCAL_ACCESS_PROTECT_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_LOCAL_ACCESS_PROTECT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_ERR_LOCAL_ACCESS_PROTECT_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_LOCAL_ACCESS_PROTECT_ERR]

//>> SET_[QME_ERR_LOCAL_ACCESS_PROTECT_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_LOCAL_ACCESS_PROTECT_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_LOCAL_ACCESS_PROTECT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_ERR_LOCAL_ACCESS_PROTECT_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_LOCAL_ACCESS_PROTECT_ERR]

//>> SET_[QME_ERR_LOCAL_ACCESS_PROTECT_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_LOCAL_ACCESS_PROTECT_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.setBit<QME_ERR_LOCAL_ACCESS_PROTECT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_ERR_LOCAL_ACCESS_PROTECT_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_LOCAL_ACCESS_PROTECT_ERR]

//>> CLEAR_[QME_ERR_LOCAL_ACCESS_PROTECT_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_ERR_LOCAL_ACCESS_PROTECT_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.clearBit<QME_ERR_LOCAL_ACCESS_PROTECT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_ERR_LOCAL_ACCESS_PROTECT_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_ERR_LOCAL_ACCESS_PROTECT_ERR]

//>> GET_[QME_ERR_LOCAL_ACCESS_PROTECT_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_ERR_LOCAL_ACCESS_PROTECT_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.extractToRight<QME_ERR_LOCAL_ACCESS_PROTECT_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_ERR_LOCAL_ACCESS_PROTECT_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_LOCAL_ACCESS_PROTECT_ERR]

//>> GET_[QME_ERR_LOCAL_ACCESS_PROTECT_ERR]
static inline bool GET_QME_ERR_LOCAL_ACCESS_PROTECT_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.getBit<QME_ERR_LOCAL_ACCESS_PROTECT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_ERR_LOCAL_ACCESS_PROTECT_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_LOCAL_ACCESS_PROTECT_ERR]

//>> SET_[QME_ERR_LOCAL_ACCESS_REGION_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_LOCAL_ACCESS_REGION_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_LOCAL_ACCESS_REGION_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_ERR_LOCAL_ACCESS_REGION_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_LOCAL_ACCESS_REGION_ERR]

//>> SET_[QME_ERR_LOCAL_ACCESS_REGION_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_LOCAL_ACCESS_REGION_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_LOCAL_ACCESS_REGION_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_ERR_LOCAL_ACCESS_REGION_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_LOCAL_ACCESS_REGION_ERR]

//>> SET_[QME_ERR_LOCAL_ACCESS_REGION_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_LOCAL_ACCESS_REGION_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.setBit<QME_ERR_LOCAL_ACCESS_REGION_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_ERR_LOCAL_ACCESS_REGION_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_LOCAL_ACCESS_REGION_ERR]

//>> CLEAR_[QME_ERR_LOCAL_ACCESS_REGION_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_ERR_LOCAL_ACCESS_REGION_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.clearBit<QME_ERR_LOCAL_ACCESS_REGION_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_ERR_LOCAL_ACCESS_REGION_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_ERR_LOCAL_ACCESS_REGION_ERR]

//>> GET_[QME_ERR_LOCAL_ACCESS_REGION_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_ERR_LOCAL_ACCESS_REGION_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.extractToRight<QME_ERR_LOCAL_ACCESS_REGION_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_ERR_LOCAL_ACCESS_REGION_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_LOCAL_ACCESS_REGION_ERR]

//>> GET_[QME_ERR_LOCAL_ACCESS_REGION_ERR]
static inline bool GET_QME_ERR_LOCAL_ACCESS_REGION_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.getBit<QME_ERR_LOCAL_ACCESS_REGION_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_ERR_LOCAL_ACCESS_REGION_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_LOCAL_ACCESS_REGION_ERR]

//>> SET_[QME_ERR_LOCAL_ACCESS_PARTIAL_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_LOCAL_ACCESS_PARTIAL_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_LOCAL_ACCESS_PARTIAL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_ERR_LOCAL_ACCESS_PARTIAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_LOCAL_ACCESS_PARTIAL_ERR]

//>> SET_[QME_ERR_LOCAL_ACCESS_PARTIAL_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_LOCAL_ACCESS_PARTIAL_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.insertFromRight<QME_ERR_LOCAL_ACCESS_PARTIAL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_ERR_LOCAL_ACCESS_PARTIAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_LOCAL_ACCESS_PARTIAL_ERR]

//>> SET_[QME_ERR_LOCAL_ACCESS_PARTIAL_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_ERR_LOCAL_ACCESS_PARTIAL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.setBit<QME_ERR_LOCAL_ACCESS_PARTIAL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_ERR_LOCAL_ACCESS_PARTIAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_ERR_LOCAL_ACCESS_PARTIAL_ERR]

//>> CLEAR_[QME_ERR_LOCAL_ACCESS_PARTIAL_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_ERR_LOCAL_ACCESS_PARTIAL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return o_data.clearBit<QME_ERR_LOCAL_ACCESS_PARTIAL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_ERR_LOCAL_ACCESS_PARTIAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_ERR_LOCAL_ACCESS_PARTIAL_ERR]

//>> GET_[QME_ERR_LOCAL_ACCESS_PARTIAL_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_ERR_LOCAL_ACCESS_PARTIAL_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.extractToRight<QME_ERR_LOCAL_ACCESS_PARTIAL_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_ERR_LOCAL_ACCESS_PARTIAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_LOCAL_ACCESS_PARTIAL_ERR]

//>> GET_[QME_ERR_LOCAL_ACCESS_PARTIAL_ERR]
static inline bool GET_QME_ERR_LOCAL_ACCESS_PARTIAL_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_ERR));
#endif
    return i_data.getBit<QME_ERR_LOCAL_ACCESS_PARTIAL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_ERR_LOCAL_ACCESS_PARTIAL_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_ERR_LOCAL_ACCESS_PARTIAL_ERR]

//>> PREP_[QME_QHTTRIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_QHTTRIG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QHTTRIG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_QHTTRIG]

//>> GET_[QME_QHTTRIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_QHTTRIG(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QHTTRIG;
#endif
    return fapi2::getScom(i_target, QME_QHTTRIG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_QHTTRIG]

//>> PUT_[QME_QHTTRIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_QHTTRIG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_QHTTRIG));
#endif
    return fapi2::putScom(i_target, QME_QHTTRIG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_QHTTRIG]


//>> SET_[QME_QHTTRIG_START]
static inline fapi2::buffer<uint64_t>& SET_QME_QHTTRIG_START(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTTRIG));
#endif
    return o_data.insertFromRight<QME_QHTTRIG_START,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QHTTRIG_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHTTRIG_START]

//>> SET_[QME_QHTTRIG_START]
static inline fapi2::buffer<uint64_t>& SET_QME_QHTTRIG_START(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTTRIG));
#endif
    return o_data.insertFromRight<QME_QHTTRIG_START,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QHTTRIG_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHTTRIG_START]

//>> SET_[QME_QHTTRIG_START]
static inline fapi2::buffer<uint64_t>& SET_QME_QHTTRIG_START(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTTRIG));
#endif
    return o_data.setBit<QME_QHTTRIG_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QHTTRIG_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHTTRIG_START]

//>> CLEAR_[QME_QHTTRIG_START]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QHTTRIG_START(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTTRIG));
#endif
    return o_data.clearBit<QME_QHTTRIG_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QHTTRIG_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QHTTRIG_START]

//>> GET_[QME_QHTTRIG_START]
static inline fapi2::buffer<uint64_t>& GET_QME_QHTTRIG_START(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTTRIG));
#endif
    return i_data.extractToRight<QME_QHTTRIG_START,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QHTTRIG_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QHTTRIG_START]

//>> GET_[QME_QHTTRIG_START]
static inline bool GET_QME_QHTTRIG_START(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTTRIG));
#endif
    return i_data.getBit<QME_QHTTRIG_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QHTTRIG_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QHTTRIG_START]

//>> SET_[QME_QHTTRIG_STOP]
static inline fapi2::buffer<uint64_t>& SET_QME_QHTTRIG_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTTRIG));
#endif
    return o_data.insertFromRight<QME_QHTTRIG_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QHTTRIG_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHTTRIG_STOP]

//>> SET_[QME_QHTTRIG_STOP]
static inline fapi2::buffer<uint64_t>& SET_QME_QHTTRIG_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTTRIG));
#endif
    return o_data.insertFromRight<QME_QHTTRIG_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QHTTRIG_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHTTRIG_STOP]

//>> SET_[QME_QHTTRIG_STOP]
static inline fapi2::buffer<uint64_t>& SET_QME_QHTTRIG_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTTRIG));
#endif
    return o_data.setBit<QME_QHTTRIG_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QHTTRIG_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHTTRIG_STOP]

//>> CLEAR_[QME_QHTTRIG_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QHTTRIG_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTTRIG));
#endif
    return o_data.clearBit<QME_QHTTRIG_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QHTTRIG_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QHTTRIG_STOP]

//>> GET_[QME_QHTTRIG_STOP]
static inline fapi2::buffer<uint64_t>& GET_QME_QHTTRIG_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTTRIG));
#endif
    return i_data.extractToRight<QME_QHTTRIG_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QHTTRIG_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QHTTRIG_STOP]

//>> GET_[QME_QHTTRIG_STOP]
static inline bool GET_QME_QHTTRIG_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTTRIG));
#endif
    return i_data.getBit<QME_QHTTRIG_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QHTTRIG_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QHTTRIG_STOP]

//>> SET_[QME_QHTTRIG_PAUSE]
static inline fapi2::buffer<uint64_t>& SET_QME_QHTTRIG_PAUSE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTTRIG));
#endif
    return o_data.insertFromRight<QME_QHTTRIG_PAUSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QHTTRIG_PAUSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHTTRIG_PAUSE]

//>> SET_[QME_QHTTRIG_PAUSE]
static inline fapi2::buffer<uint64_t>& SET_QME_QHTTRIG_PAUSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTTRIG));
#endif
    return o_data.insertFromRight<QME_QHTTRIG_PAUSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QHTTRIG_PAUSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHTTRIG_PAUSE]

//>> SET_[QME_QHTTRIG_PAUSE]
static inline fapi2::buffer<uint64_t>& SET_QME_QHTTRIG_PAUSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTTRIG));
#endif
    return o_data.setBit<QME_QHTTRIG_PAUSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QHTTRIG_PAUSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QHTTRIG_PAUSE]

//>> CLEAR_[QME_QHTTRIG_PAUSE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QHTTRIG_PAUSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTTRIG));
#endif
    return o_data.clearBit<QME_QHTTRIG_PAUSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QHTTRIG_PAUSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QHTTRIG_PAUSE]

//>> GET_[QME_QHTTRIG_PAUSE]
static inline fapi2::buffer<uint64_t>& GET_QME_QHTTRIG_PAUSE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTTRIG));
#endif
    return i_data.extractToRight<QME_QHTTRIG_PAUSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QHTTRIG_PAUSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QHTTRIG_PAUSE]

//>> GET_[QME_QHTTRIG_PAUSE]
static inline bool GET_QME_QHTTRIG_PAUSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QHTTRIG));
#endif
    return i_data.getBit<QME_QHTTRIG_PAUSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QHTTRIG_PAUSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QHTTRIG_PAUSE]

//>> PREP_[QME_QMCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_QMCR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QMCR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_QMCR]

//>> GET_[QME_QMCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_QMCR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QMCR;
#endif
    return fapi2::getScom(i_target, QME_QMCR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_QMCR]

//>> PUT_[QME_QMCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_QMCR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, QME_QMCR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_QMCR]

//>> PREP_[QME_QMCR_PPE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_QMCR_PPE2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QMCR_PPE2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_QMCR_PPE2]

//>> GET_[QME_QMCR_PPE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_QMCR_PPE2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QMCR_PPE2;
#endif
    return fapi2::getScom(i_target, QME_QMCR_PPE2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_QMCR_PPE2]

//>> PUT_[QME_QMCR_PPE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_QMCR_PPE2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, QME_QMCR_PPE2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_QMCR_PPE2]

//>> PREP_[QME_QMCR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_QMCR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QMCR_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_QMCR_WO_CLEAR]

//>> GET_[QME_QMCR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_QMCR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QMCR_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, QME_QMCR_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_QMCR_WO_CLEAR]

//>> PUT_[QME_QMCR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_QMCR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, QME_QMCR_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_QMCR_WO_CLEAR]


//>> SET_[QME_QMCR_PMCR_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_PMCR_OVERRIDE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_PMCR_OVERRIDE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_PMCR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_PMCR_OVERRIDE_EN]

//>> SET_[QME_QMCR_PMCR_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_PMCR_OVERRIDE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_PMCR_OVERRIDE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_PMCR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_PMCR_OVERRIDE_EN]

//>> SET_[QME_QMCR_PMCR_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_PMCR_OVERRIDE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_PMCR_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_PMCR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_PMCR_OVERRIDE_EN]

//>> CLEAR_[QME_QMCR_PMCR_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_PMCR_OVERRIDE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_PMCR_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_PMCR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_PMCR_OVERRIDE_EN]

//>> GET_[QME_QMCR_PMCR_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_PMCR_OVERRIDE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_PMCR_OVERRIDE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_PMCR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_PMCR_OVERRIDE_EN]

//>> GET_[QME_QMCR_PMCR_OVERRIDE_EN]
static inline bool GET_QME_QMCR_PMCR_OVERRIDE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_PMCR_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_PMCR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_PMCR_OVERRIDE_EN]

//>> SET_[QME_QMCR_PSCR_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_PSCR_OVERRIDE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_PSCR_OVERRIDE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_PSCR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_PSCR_OVERRIDE_EN]

//>> SET_[QME_QMCR_PSCR_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_PSCR_OVERRIDE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_PSCR_OVERRIDE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_PSCR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_PSCR_OVERRIDE_EN]

//>> SET_[QME_QMCR_PSCR_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_PSCR_OVERRIDE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_PSCR_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_PSCR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_PSCR_OVERRIDE_EN]

//>> CLEAR_[QME_QMCR_PSCR_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_PSCR_OVERRIDE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_PSCR_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_PSCR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_PSCR_OVERRIDE_EN]

//>> GET_[QME_QMCR_PSCR_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_PSCR_OVERRIDE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_PSCR_OVERRIDE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_PSCR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_PSCR_OVERRIDE_EN]

//>> GET_[QME_QMCR_PSCR_OVERRIDE_EN]
static inline bool GET_QME_QMCR_PSCR_OVERRIDE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_PSCR_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_PSCR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_PSCR_OVERRIDE_EN]

//>> SET_[QME_QMCR_CHAR_REGS_READ_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_CHAR_REGS_READ_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_CHAR_REGS_READ_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_CHAR_REGS_READ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_CHAR_REGS_READ_ENABLE]

//>> SET_[QME_QMCR_CHAR_REGS_READ_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_CHAR_REGS_READ_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_CHAR_REGS_READ_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_CHAR_REGS_READ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_CHAR_REGS_READ_ENABLE]

//>> SET_[QME_QMCR_CHAR_REGS_READ_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_CHAR_REGS_READ_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_CHAR_REGS_READ_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_CHAR_REGS_READ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_CHAR_REGS_READ_ENABLE]

//>> CLEAR_[QME_QMCR_CHAR_REGS_READ_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_CHAR_REGS_READ_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_CHAR_REGS_READ_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_CHAR_REGS_READ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_CHAR_REGS_READ_ENABLE]

//>> GET_[QME_QMCR_CHAR_REGS_READ_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_CHAR_REGS_READ_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_CHAR_REGS_READ_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_CHAR_REGS_READ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_CHAR_REGS_READ_ENABLE]

//>> GET_[QME_QMCR_CHAR_REGS_READ_ENABLE]
static inline bool GET_QME_QMCR_CHAR_REGS_READ_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_CHAR_REGS_READ_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_CHAR_REGS_READ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_CHAR_REGS_READ_ENABLE]

//>> SET_[QME_QMCR_BCECSR_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_BCECSR_OVERRIDE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_BCECSR_OVERRIDE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_BCECSR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_BCECSR_OVERRIDE_EN]

//>> SET_[QME_QMCR_BCECSR_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_BCECSR_OVERRIDE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_BCECSR_OVERRIDE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_BCECSR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_BCECSR_OVERRIDE_EN]

//>> SET_[QME_QMCR_BCECSR_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_BCECSR_OVERRIDE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_BCECSR_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_BCECSR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_BCECSR_OVERRIDE_EN]

//>> CLEAR_[QME_QMCR_BCECSR_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_BCECSR_OVERRIDE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_BCECSR_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_BCECSR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_BCECSR_OVERRIDE_EN]

//>> GET_[QME_QMCR_BCECSR_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_BCECSR_OVERRIDE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_BCECSR_OVERRIDE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_BCECSR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_BCECSR_OVERRIDE_EN]

//>> GET_[QME_QMCR_BCECSR_OVERRIDE_EN]
static inline bool GET_QME_QMCR_BCECSR_OVERRIDE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_BCECSR_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_BCECSR_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_BCECSR_OVERRIDE_EN]

//>> SET_[QME_QMCR_PSREQ_SCOM_READ_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_PSREQ_SCOM_READ_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_PSREQ_SCOM_READ_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_PSREQ_SCOM_READ_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_PSREQ_SCOM_READ_EN]

//>> SET_[QME_QMCR_PSREQ_SCOM_READ_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_PSREQ_SCOM_READ_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_PSREQ_SCOM_READ_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_PSREQ_SCOM_READ_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_PSREQ_SCOM_READ_EN]

//>> SET_[QME_QMCR_PSREQ_SCOM_READ_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_PSREQ_SCOM_READ_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_PSREQ_SCOM_READ_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_PSREQ_SCOM_READ_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_PSREQ_SCOM_READ_EN]

//>> CLEAR_[QME_QMCR_PSREQ_SCOM_READ_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_PSREQ_SCOM_READ_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_PSREQ_SCOM_READ_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_PSREQ_SCOM_READ_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_PSREQ_SCOM_READ_EN]

//>> GET_[QME_QMCR_PSREQ_SCOM_READ_EN]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_PSREQ_SCOM_READ_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_PSREQ_SCOM_READ_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_PSREQ_SCOM_READ_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_PSREQ_SCOM_READ_EN]

//>> GET_[QME_QMCR_PSREQ_SCOM_READ_EN]
static inline bool GET_QME_QMCR_PSREQ_SCOM_READ_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_PSREQ_SCOM_READ_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_PSREQ_SCOM_READ_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_PSREQ_SCOM_READ_EN]

//>> SET_[QME_QMCR_LOCK_QUEUE_ON_PCB_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_LOCK_QUEUE_ON_PCB_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_LOCK_QUEUE_ON_PCB_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_LOCK_QUEUE_ON_PCB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_LOCK_QUEUE_ON_PCB_ERR]

//>> SET_[QME_QMCR_LOCK_QUEUE_ON_PCB_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_LOCK_QUEUE_ON_PCB_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_LOCK_QUEUE_ON_PCB_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_LOCK_QUEUE_ON_PCB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_LOCK_QUEUE_ON_PCB_ERR]

//>> SET_[QME_QMCR_LOCK_QUEUE_ON_PCB_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_LOCK_QUEUE_ON_PCB_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_LOCK_QUEUE_ON_PCB_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_LOCK_QUEUE_ON_PCB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_LOCK_QUEUE_ON_PCB_ERR]

//>> CLEAR_[QME_QMCR_LOCK_QUEUE_ON_PCB_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_LOCK_QUEUE_ON_PCB_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_LOCK_QUEUE_ON_PCB_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_LOCK_QUEUE_ON_PCB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_LOCK_QUEUE_ON_PCB_ERR]

//>> GET_[QME_QMCR_LOCK_QUEUE_ON_PCB_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_LOCK_QUEUE_ON_PCB_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_LOCK_QUEUE_ON_PCB_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_LOCK_QUEUE_ON_PCB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_LOCK_QUEUE_ON_PCB_ERR]

//>> GET_[QME_QMCR_LOCK_QUEUE_ON_PCB_ERR]
static inline bool GET_QME_QMCR_LOCK_QUEUE_ON_PCB_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_LOCK_QUEUE_ON_PCB_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_LOCK_QUEUE_ON_PCB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_LOCK_QUEUE_ON_PCB_ERR]

//>> SET_[QME_QMCR_STOP_OVERRIDE_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_STOP_OVERRIDE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_STOP_OVERRIDE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_STOP_OVERRIDE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_STOP_OVERRIDE_MODE]

//>> SET_[QME_QMCR_STOP_OVERRIDE_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_STOP_OVERRIDE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_STOP_OVERRIDE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_STOP_OVERRIDE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_STOP_OVERRIDE_MODE]

//>> SET_[QME_QMCR_STOP_OVERRIDE_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_STOP_OVERRIDE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_STOP_OVERRIDE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_STOP_OVERRIDE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_STOP_OVERRIDE_MODE]

//>> CLEAR_[QME_QMCR_STOP_OVERRIDE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_STOP_OVERRIDE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_STOP_OVERRIDE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_STOP_OVERRIDE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_STOP_OVERRIDE_MODE]

//>> GET_[QME_QMCR_STOP_OVERRIDE_MODE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_STOP_OVERRIDE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_STOP_OVERRIDE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_STOP_OVERRIDE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_STOP_OVERRIDE_MODE]

//>> GET_[QME_QMCR_STOP_OVERRIDE_MODE]
static inline bool GET_QME_QMCR_STOP_OVERRIDE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_STOP_OVERRIDE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_STOP_OVERRIDE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_STOP_OVERRIDE_MODE]

//>> SET_[QME_QMCR_STOP_ACTIVE_MASK]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_STOP_ACTIVE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_STOP_ACTIVE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_STOP_ACTIVE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_STOP_ACTIVE_MASK]

//>> SET_[QME_QMCR_STOP_ACTIVE_MASK]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_STOP_ACTIVE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_STOP_ACTIVE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_STOP_ACTIVE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_STOP_ACTIVE_MASK]

//>> SET_[QME_QMCR_STOP_ACTIVE_MASK]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_STOP_ACTIVE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_STOP_ACTIVE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_STOP_ACTIVE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_STOP_ACTIVE_MASK]

//>> CLEAR_[QME_QMCR_STOP_ACTIVE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_STOP_ACTIVE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_STOP_ACTIVE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_STOP_ACTIVE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_STOP_ACTIVE_MASK]

//>> GET_[QME_QMCR_STOP_ACTIVE_MASK]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_STOP_ACTIVE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_STOP_ACTIVE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_STOP_ACTIVE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_STOP_ACTIVE_MASK]

//>> GET_[QME_QMCR_STOP_ACTIVE_MASK]
static inline bool GET_QME_QMCR_STOP_ACTIVE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_STOP_ACTIVE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_STOP_ACTIVE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_STOP_ACTIVE_MASK]

//>> SET_[QME_QMCR_AUTO_PMCR_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_AUTO_PMCR_UPDATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_AUTO_PMCR_UPDATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_AUTO_PMCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_AUTO_PMCR_UPDATE]

//>> SET_[QME_QMCR_AUTO_PMCR_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_AUTO_PMCR_UPDATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_AUTO_PMCR_UPDATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_AUTO_PMCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_AUTO_PMCR_UPDATE]

//>> SET_[QME_QMCR_AUTO_PMCR_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_AUTO_PMCR_UPDATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_AUTO_PMCR_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_AUTO_PMCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_AUTO_PMCR_UPDATE]

//>> CLEAR_[QME_QMCR_AUTO_PMCR_UPDATE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_AUTO_PMCR_UPDATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_AUTO_PMCR_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_AUTO_PMCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_AUTO_PMCR_UPDATE]

//>> GET_[QME_QMCR_AUTO_PMCR_UPDATE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_AUTO_PMCR_UPDATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_AUTO_PMCR_UPDATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_AUTO_PMCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_AUTO_PMCR_UPDATE]

//>> GET_[QME_QMCR_AUTO_PMCR_UPDATE]
static inline bool GET_QME_QMCR_AUTO_PMCR_UPDATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_AUTO_PMCR_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_AUTO_PMCR_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_AUTO_PMCR_UPDATE]

//>> SET_[QME_QMCR_PMCR_RECENT_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_PMCR_RECENT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_PMCR_RECENT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_PMCR_RECENT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_PMCR_RECENT_MODE]

//>> SET_[QME_QMCR_PMCR_RECENT_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_PMCR_RECENT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_PMCR_RECENT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_PMCR_RECENT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_PMCR_RECENT_MODE]

//>> SET_[QME_QMCR_PMCR_RECENT_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_PMCR_RECENT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_PMCR_RECENT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_PMCR_RECENT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_PMCR_RECENT_MODE]

//>> CLEAR_[QME_QMCR_PMCR_RECENT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_PMCR_RECENT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_PMCR_RECENT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_PMCR_RECENT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_PMCR_RECENT_MODE]

//>> GET_[QME_QMCR_PMCR_RECENT_MODE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_PMCR_RECENT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_PMCR_RECENT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_PMCR_RECENT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_PMCR_RECENT_MODE]

//>> GET_[QME_QMCR_PMCR_RECENT_MODE]
static inline bool GET_QME_QMCR_PMCR_RECENT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_PMCR_RECENT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_PMCR_RECENT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_PMCR_RECENT_MODE]

//>> SET_[QME_QMCR_FUSED_CORE_PAIR_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_FUSED_CORE_PAIR_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_FUSED_CORE_PAIR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_FUSED_CORE_PAIR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_FUSED_CORE_PAIR_MODE]

//>> SET_[QME_QMCR_FUSED_CORE_PAIR_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_FUSED_CORE_PAIR_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_FUSED_CORE_PAIR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_FUSED_CORE_PAIR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_FUSED_CORE_PAIR_MODE]

//>> SET_[QME_QMCR_FUSED_CORE_PAIR_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_FUSED_CORE_PAIR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_FUSED_CORE_PAIR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_FUSED_CORE_PAIR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_FUSED_CORE_PAIR_MODE]

//>> CLEAR_[QME_QMCR_FUSED_CORE_PAIR_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_FUSED_CORE_PAIR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_FUSED_CORE_PAIR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_FUSED_CORE_PAIR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_FUSED_CORE_PAIR_MODE]

//>> GET_[QME_QMCR_FUSED_CORE_PAIR_MODE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_FUSED_CORE_PAIR_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_FUSED_CORE_PAIR_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_FUSED_CORE_PAIR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_FUSED_CORE_PAIR_MODE]

//>> GET_[QME_QMCR_FUSED_CORE_PAIR_MODE]
static inline bool GET_QME_QMCR_FUSED_CORE_PAIR_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_FUSED_CORE_PAIR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_FUSED_CORE_PAIR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_FUSED_CORE_PAIR_MODE]

//>> SET_[QME_QMCR_CYCLE_REPRO_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_CYCLE_REPRO_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_CYCLE_REPRO_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_CYCLE_REPRO_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_CYCLE_REPRO_MODE]

//>> SET_[QME_QMCR_CYCLE_REPRO_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_CYCLE_REPRO_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_CYCLE_REPRO_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_CYCLE_REPRO_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_CYCLE_REPRO_MODE]

//>> SET_[QME_QMCR_CYCLE_REPRO_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_CYCLE_REPRO_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_CYCLE_REPRO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_CYCLE_REPRO_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_CYCLE_REPRO_MODE]

//>> CLEAR_[QME_QMCR_CYCLE_REPRO_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_CYCLE_REPRO_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_CYCLE_REPRO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_CYCLE_REPRO_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_CYCLE_REPRO_MODE]

//>> GET_[QME_QMCR_CYCLE_REPRO_MODE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_CYCLE_REPRO_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_CYCLE_REPRO_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_CYCLE_REPRO_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_CYCLE_REPRO_MODE]

//>> GET_[QME_QMCR_CYCLE_REPRO_MODE]
static inline bool GET_QME_QMCR_CYCLE_REPRO_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_CYCLE_REPRO_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_CYCLE_REPRO_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_CYCLE_REPRO_MODE]

//>> SET_[QME_QMCR_QUEUED_WR_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_QUEUED_WR_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_QUEUED_WR_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_QUEUED_WR_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_QUEUED_WR_EN]

//>> SET_[QME_QMCR_QUEUED_WR_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_QUEUED_WR_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_QUEUED_WR_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_QUEUED_WR_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_QUEUED_WR_EN]

//>> SET_[QME_QMCR_QUEUED_WR_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_QUEUED_WR_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_QUEUED_WR_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_QUEUED_WR_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_QUEUED_WR_EN]

//>> CLEAR_[QME_QMCR_QUEUED_WR_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_QUEUED_WR_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_QUEUED_WR_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_QUEUED_WR_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_QUEUED_WR_EN]

//>> GET_[QME_QMCR_QUEUED_WR_EN]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_QUEUED_WR_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_QUEUED_WR_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_QUEUED_WR_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_QUEUED_WR_EN]

//>> GET_[QME_QMCR_QUEUED_WR_EN]
static inline bool GET_QME_QMCR_QUEUED_WR_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_QUEUED_WR_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_QUEUED_WR_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_QUEUED_WR_EN]

//>> SET_[QME_QMCR_QUEUED_RD_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_QUEUED_RD_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_QUEUED_RD_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_QUEUED_RD_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_QUEUED_RD_EN]

//>> SET_[QME_QMCR_QUEUED_RD_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_QUEUED_RD_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_QUEUED_RD_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_QUEUED_RD_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_QUEUED_RD_EN]

//>> SET_[QME_QMCR_QUEUED_RD_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_QUEUED_RD_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_QUEUED_RD_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_QUEUED_RD_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_QUEUED_RD_EN]

//>> CLEAR_[QME_QMCR_QUEUED_RD_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_QUEUED_RD_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_QUEUED_RD_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_QUEUED_RD_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_QUEUED_RD_EN]

//>> GET_[QME_QMCR_QUEUED_RD_EN]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_QUEUED_RD_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_QUEUED_RD_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_QUEUED_RD_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_QUEUED_RD_EN]

//>> GET_[QME_QMCR_QUEUED_RD_EN]
static inline bool GET_QME_QMCR_QUEUED_RD_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_QUEUED_RD_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_QUEUED_RD_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_QUEUED_RD_EN]

//>> SET_[QME_QMCR_RESET_IMPRECISE_QERR]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_RESET_IMPRECISE_QERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_RESET_IMPRECISE_QERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_RESET_IMPRECISE_QERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_RESET_IMPRECISE_QERR]

//>> SET_[QME_QMCR_RESET_IMPRECISE_QERR]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_RESET_IMPRECISE_QERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_RESET_IMPRECISE_QERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_RESET_IMPRECISE_QERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_RESET_IMPRECISE_QERR]

//>> SET_[QME_QMCR_RESET_IMPRECISE_QERR]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_RESET_IMPRECISE_QERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_RESET_IMPRECISE_QERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_RESET_IMPRECISE_QERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_RESET_IMPRECISE_QERR]

//>> CLEAR_[QME_QMCR_RESET_IMPRECISE_QERR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_RESET_IMPRECISE_QERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_RESET_IMPRECISE_QERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_RESET_IMPRECISE_QERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_RESET_IMPRECISE_QERR]

//>> GET_[QME_QMCR_RESET_IMPRECISE_QERR]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_RESET_IMPRECISE_QERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_RESET_IMPRECISE_QERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_RESET_IMPRECISE_QERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_RESET_IMPRECISE_QERR]

//>> GET_[QME_QMCR_RESET_IMPRECISE_QERR]
static inline bool GET_QME_QMCR_RESET_IMPRECISE_QERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_RESET_IMPRECISE_QERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_RESET_IMPRECISE_QERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_RESET_IMPRECISE_QERR]

//>> SET_[QME_QMCR_RESET_PB_RAMP]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_RESET_PB_RAMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_RESET_PB_RAMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_RESET_PB_RAMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_RESET_PB_RAMP]

//>> SET_[QME_QMCR_RESET_PB_RAMP]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_RESET_PB_RAMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_RESET_PB_RAMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_RESET_PB_RAMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_RESET_PB_RAMP]

//>> SET_[QME_QMCR_RESET_PB_RAMP]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_RESET_PB_RAMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_RESET_PB_RAMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_RESET_PB_RAMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_RESET_PB_RAMP]

//>> CLEAR_[QME_QMCR_RESET_PB_RAMP]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_RESET_PB_RAMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_RESET_PB_RAMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_RESET_PB_RAMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_RESET_PB_RAMP]

//>> GET_[QME_QMCR_RESET_PB_RAMP]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_RESET_PB_RAMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_RESET_PB_RAMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_RESET_PB_RAMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_RESET_PB_RAMP]

//>> GET_[QME_QMCR_RESET_PB_RAMP]
static inline bool GET_QME_QMCR_RESET_PB_RAMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_RESET_PB_RAMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_RESET_PB_RAMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_RESET_PB_RAMP]

//>> SET_[QME_QMCR_LOPRI_STOP_WKUP_SEL]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_LOPRI_STOP_WKUP_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_LOPRI_STOP_WKUP_SEL,
           QME_QMCR_LOPRI_STOP_WKUP_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_LOPRI_STOP_WKUP_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_LOPRI_STOP_WKUP_SEL]

//>> SET_[QME_QMCR_LOPRI_STOP_WKUP_SEL]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_LOPRI_STOP_WKUP_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_LOPRI_STOP_WKUP_SEL,
           QME_QMCR_LOPRI_STOP_WKUP_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_LOPRI_STOP_WKUP_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_LOPRI_STOP_WKUP_SEL]

//>> GET_[QME_QMCR_LOPRI_STOP_WKUP_SEL]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_LOPRI_STOP_WKUP_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_LOPRI_STOP_WKUP_SEL,
           QME_QMCR_LOPRI_STOP_WKUP_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_LOPRI_STOP_WKUP_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_LOPRI_STOP_WKUP_SEL]

//>> SET_[QME_QMCR_LOPRI_STOP_ENTRY_SEL]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_LOPRI_STOP_ENTRY_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_LOPRI_STOP_ENTRY_SEL,
           QME_QMCR_LOPRI_STOP_ENTRY_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_LOPRI_STOP_ENTRY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_LOPRI_STOP_ENTRY_SEL]

//>> SET_[QME_QMCR_LOPRI_STOP_ENTRY_SEL]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_LOPRI_STOP_ENTRY_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_LOPRI_STOP_ENTRY_SEL,
           QME_QMCR_LOPRI_STOP_ENTRY_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_LOPRI_STOP_ENTRY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_LOPRI_STOP_ENTRY_SEL]

//>> GET_[QME_QMCR_LOPRI_STOP_ENTRY_SEL]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_LOPRI_STOP_ENTRY_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_LOPRI_STOP_ENTRY_SEL,
           QME_QMCR_LOPRI_STOP_ENTRY_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_LOPRI_STOP_ENTRY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_LOPRI_STOP_ENTRY_SEL]

//>> SET_[QME_QMCR_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_WRITE_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_WRITE_PROTECT_ENABLE]

//>> SET_[QME_QMCR_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_WRITE_PROTECT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_WRITE_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_WRITE_PROTECT_ENABLE]

//>> SET_[QME_QMCR_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_WRITE_PROTECT_ENABLE]

//>> CLEAR_[QME_QMCR_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_WRITE_PROTECT_ENABLE]

//>> GET_[QME_QMCR_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_WRITE_PROTECT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_WRITE_PROTECT_ENABLE]

//>> GET_[QME_QMCR_WRITE_PROTECT_ENABLE]
static inline bool GET_QME_QMCR_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_WRITE_PROTECT_ENABLE]

//>> SET_[QME_QMCR_TTSR_READ_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_TTSR_READ_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_TTSR_READ_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_TTSR_READ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_TTSR_READ_ENABLE]

//>> SET_[QME_QMCR_TTSR_READ_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_TTSR_READ_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_TTSR_READ_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_TTSR_READ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_TTSR_READ_ENABLE]

//>> SET_[QME_QMCR_TTSR_READ_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_TTSR_READ_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_TTSR_READ_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_TTSR_READ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_TTSR_READ_ENABLE]

//>> CLEAR_[QME_QMCR_TTSR_READ_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_TTSR_READ_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_TTSR_READ_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_TTSR_READ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_TTSR_READ_ENABLE]

//>> GET_[QME_QMCR_TTSR_READ_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_TTSR_READ_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_TTSR_READ_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_TTSR_READ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_TTSR_READ_ENABLE]

//>> GET_[QME_QMCR_TTSR_READ_ENABLE]
static inline bool GET_QME_QMCR_TTSR_READ_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_TTSR_READ_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_TTSR_READ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_TTSR_READ_ENABLE]

//>> SET_[QME_QMCR_PTSR_READ_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_PTSR_READ_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_PTSR_READ_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_PTSR_READ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_PTSR_READ_ENABLE]

//>> SET_[QME_QMCR_PTSR_READ_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_PTSR_READ_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_PTSR_READ_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_PTSR_READ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_PTSR_READ_ENABLE]

//>> SET_[QME_QMCR_PTSR_READ_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_PTSR_READ_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_PTSR_READ_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_PTSR_READ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_PTSR_READ_ENABLE]

//>> CLEAR_[QME_QMCR_PTSR_READ_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_PTSR_READ_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_PTSR_READ_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_PTSR_READ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_PTSR_READ_ENABLE]

//>> GET_[QME_QMCR_PTSR_READ_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_PTSR_READ_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_PTSR_READ_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_PTSR_READ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_PTSR_READ_ENABLE]

//>> GET_[QME_QMCR_PTSR_READ_ENABLE]
static inline bool GET_QME_QMCR_PTSR_READ_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_PTSR_READ_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_PTSR_READ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_PTSR_READ_ENABLE]

//>> SET_[QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE]

//>> SET_[QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE]

//>> SET_[QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE]

//>> CLEAR_[QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE]

//>> GET_[QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE]

//>> GET_[QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE]
static inline bool GET_QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_RESET_QME_PCB_MASTER_INTERFACE]

//>> SET_[QME_QMCR_OCP_REQUEST_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_OCP_REQUEST_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_OCP_REQUEST_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_OCP_REQUEST_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_OCP_REQUEST_ENABLE]

//>> SET_[QME_QMCR_OCP_REQUEST_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_OCP_REQUEST_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_OCP_REQUEST_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_OCP_REQUEST_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_OCP_REQUEST_ENABLE]

//>> SET_[QME_QMCR_OCP_REQUEST_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_OCP_REQUEST_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_OCP_REQUEST_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_OCP_REQUEST_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_OCP_REQUEST_ENABLE]

//>> CLEAR_[QME_QMCR_OCP_REQUEST_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_OCP_REQUEST_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_OCP_REQUEST_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_OCP_REQUEST_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_OCP_REQUEST_ENABLE]

//>> GET_[QME_QMCR_OCP_REQUEST_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_OCP_REQUEST_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_OCP_REQUEST_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_OCP_REQUEST_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_OCP_REQUEST_ENABLE]

//>> GET_[QME_QMCR_OCP_REQUEST_ENABLE]
static inline bool GET_QME_QMCR_OCP_REQUEST_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_OCP_REQUEST_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_OCP_REQUEST_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_OCP_REQUEST_ENABLE]

//>> SET_[QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN]

//>> SET_[QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN]

//>> SET_[QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN]

//>> CLEAR_[QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN]

//>> GET_[QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN]

//>> GET_[QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN]
static inline bool GET_QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_STOP_SHIFTREG_OVERRIDE_EN]

//>> SET_[QME_QMCR_CPMS_PG_CLKOFF_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_CPMS_PG_CLKOFF_DISABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_CPMS_PG_CLKOFF_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_CPMS_PG_CLKOFF_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_CPMS_PG_CLKOFF_DISABLE]

//>> SET_[QME_QMCR_CPMS_PG_CLKOFF_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_CPMS_PG_CLKOFF_DISABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_CPMS_PG_CLKOFF_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_CPMS_PG_CLKOFF_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_CPMS_PG_CLKOFF_DISABLE]

//>> SET_[QME_QMCR_CPMS_PG_CLKOFF_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_CPMS_PG_CLKOFF_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_CPMS_PG_CLKOFF_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_CPMS_PG_CLKOFF_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_CPMS_PG_CLKOFF_DISABLE]

//>> CLEAR_[QME_QMCR_CPMS_PG_CLKOFF_DISABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_CPMS_PG_CLKOFF_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_CPMS_PG_CLKOFF_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_CPMS_PG_CLKOFF_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_CPMS_PG_CLKOFF_DISABLE]

//>> GET_[QME_QMCR_CPMS_PG_CLKOFF_DISABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_CPMS_PG_CLKOFF_DISABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_CPMS_PG_CLKOFF_DISABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_CPMS_PG_CLKOFF_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_CPMS_PG_CLKOFF_DISABLE]

//>> GET_[QME_QMCR_CPMS_PG_CLKOFF_DISABLE]
static inline bool GET_QME_QMCR_CPMS_PG_CLKOFF_DISABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_CPMS_PG_CLKOFF_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_CPMS_PG_CLKOFF_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_CPMS_PG_CLKOFF_DISABLE]

//>> SET_[QME_QMCR_CTFS_PG_CLKOFF_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_CTFS_PG_CLKOFF_DISABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_CTFS_PG_CLKOFF_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_CTFS_PG_CLKOFF_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_CTFS_PG_CLKOFF_DISABLE]

//>> SET_[QME_QMCR_CTFS_PG_CLKOFF_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_CTFS_PG_CLKOFF_DISABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_CTFS_PG_CLKOFF_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_CTFS_PG_CLKOFF_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_CTFS_PG_CLKOFF_DISABLE]

//>> SET_[QME_QMCR_CTFS_PG_CLKOFF_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_CTFS_PG_CLKOFF_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_CTFS_PG_CLKOFF_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_CTFS_PG_CLKOFF_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_CTFS_PG_CLKOFF_DISABLE]

//>> CLEAR_[QME_QMCR_CTFS_PG_CLKOFF_DISABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_CTFS_PG_CLKOFF_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_CTFS_PG_CLKOFF_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_CTFS_PG_CLKOFF_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_CTFS_PG_CLKOFF_DISABLE]

//>> GET_[QME_QMCR_CTFS_PG_CLKOFF_DISABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_CTFS_PG_CLKOFF_DISABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_CTFS_PG_CLKOFF_DISABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_CTFS_PG_CLKOFF_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_CTFS_PG_CLKOFF_DISABLE]

//>> GET_[QME_QMCR_CTFS_PG_CLKOFF_DISABLE]
static inline bool GET_QME_QMCR_CTFS_PG_CLKOFF_DISABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_CTFS_PG_CLKOFF_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_CTFS_PG_CLKOFF_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_CTFS_PG_CLKOFF_DISABLE]

//>> SET_[QME_QMCR_DTC_SEQUENCER_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_DTC_SEQUENCER_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_DTC_SEQUENCER_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_DTC_SEQUENCER_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_DTC_SEQUENCER_ENABLE]

//>> SET_[QME_QMCR_DTC_SEQUENCER_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_DTC_SEQUENCER_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_DTC_SEQUENCER_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_DTC_SEQUENCER_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_DTC_SEQUENCER_ENABLE]

//>> SET_[QME_QMCR_DTC_SEQUENCER_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_DTC_SEQUENCER_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_DTC_SEQUENCER_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_DTC_SEQUENCER_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_DTC_SEQUENCER_ENABLE]

//>> CLEAR_[QME_QMCR_DTC_SEQUENCER_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_DTC_SEQUENCER_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_DTC_SEQUENCER_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_DTC_SEQUENCER_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_DTC_SEQUENCER_ENABLE]

//>> GET_[QME_QMCR_DTC_SEQUENCER_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_DTC_SEQUENCER_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_DTC_SEQUENCER_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_DTC_SEQUENCER_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_DTC_SEQUENCER_ENABLE]

//>> GET_[QME_QMCR_DTC_SEQUENCER_ENABLE]
static inline bool GET_QME_QMCR_DTC_SEQUENCER_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_DTC_SEQUENCER_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_DTC_SEQUENCER_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_DTC_SEQUENCER_ENABLE]

//>> SET_[QME_QMCR_WOF_AUTO_SEQ_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_WOF_AUTO_SEQ_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_WOF_AUTO_SEQ_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_WOF_AUTO_SEQ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_WOF_AUTO_SEQ_ENABLE]

//>> SET_[QME_QMCR_WOF_AUTO_SEQ_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_WOF_AUTO_SEQ_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_WOF_AUTO_SEQ_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_WOF_AUTO_SEQ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_WOF_AUTO_SEQ_ENABLE]

//>> SET_[QME_QMCR_WOF_AUTO_SEQ_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_WOF_AUTO_SEQ_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_WOF_AUTO_SEQ_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_WOF_AUTO_SEQ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_WOF_AUTO_SEQ_ENABLE]

//>> CLEAR_[QME_QMCR_WOF_AUTO_SEQ_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_WOF_AUTO_SEQ_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_WOF_AUTO_SEQ_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_WOF_AUTO_SEQ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_WOF_AUTO_SEQ_ENABLE]

//>> GET_[QME_QMCR_WOF_AUTO_SEQ_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_WOF_AUTO_SEQ_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_WOF_AUTO_SEQ_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_WOF_AUTO_SEQ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_WOF_AUTO_SEQ_ENABLE]

//>> GET_[QME_QMCR_WOF_AUTO_SEQ_ENABLE]
static inline bool GET_QME_QMCR_WOF_AUTO_SEQ_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_WOF_AUTO_SEQ_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_WOF_AUTO_SEQ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_WOF_AUTO_SEQ_ENABLE]

//>> SET_[QME_QMCR_QOS_AUTO_SEQ_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_QOS_AUTO_SEQ_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_QOS_AUTO_SEQ_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_QOS_AUTO_SEQ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_QOS_AUTO_SEQ_ENABLE]

//>> SET_[QME_QMCR_QOS_AUTO_SEQ_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_QOS_AUTO_SEQ_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_QOS_AUTO_SEQ_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_QOS_AUTO_SEQ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_QOS_AUTO_SEQ_ENABLE]

//>> SET_[QME_QMCR_QOS_AUTO_SEQ_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_QOS_AUTO_SEQ_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_QOS_AUTO_SEQ_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_QOS_AUTO_SEQ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_QOS_AUTO_SEQ_ENABLE]

//>> CLEAR_[QME_QMCR_QOS_AUTO_SEQ_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_QOS_AUTO_SEQ_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_QOS_AUTO_SEQ_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_QOS_AUTO_SEQ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_QOS_AUTO_SEQ_ENABLE]

//>> GET_[QME_QMCR_QOS_AUTO_SEQ_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_QOS_AUTO_SEQ_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_QOS_AUTO_SEQ_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_QOS_AUTO_SEQ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_QOS_AUTO_SEQ_ENABLE]

//>> GET_[QME_QMCR_QOS_AUTO_SEQ_ENABLE]
static inline bool GET_QME_QMCR_QOS_AUTO_SEQ_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_QOS_AUTO_SEQ_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_QOS_AUTO_SEQ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_QOS_AUTO_SEQ_ENABLE]

//>> SET_[QME_QMCR_QOSR_SPR_UPDATE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_QOSR_SPR_UPDATE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_QOSR_SPR_UPDATE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_QOSR_SPR_UPDATE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_QOSR_SPR_UPDATE_ENABLE]

//>> SET_[QME_QMCR_QOSR_SPR_UPDATE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_QOSR_SPR_UPDATE_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_QOSR_SPR_UPDATE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_QOSR_SPR_UPDATE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_QOSR_SPR_UPDATE_ENABLE]

//>> SET_[QME_QMCR_QOSR_SPR_UPDATE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_QOSR_SPR_UPDATE_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_QOSR_SPR_UPDATE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_QOSR_SPR_UPDATE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_QOSR_SPR_UPDATE_ENABLE]

//>> CLEAR_[QME_QMCR_QOSR_SPR_UPDATE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_QOSR_SPR_UPDATE_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_QOSR_SPR_UPDATE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_QOSR_SPR_UPDATE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_QOSR_SPR_UPDATE_ENABLE]

//>> GET_[QME_QMCR_QOSR_SPR_UPDATE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_QOSR_SPR_UPDATE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_QOSR_SPR_UPDATE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_QOSR_SPR_UPDATE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_QOSR_SPR_UPDATE_ENABLE]

//>> GET_[QME_QMCR_QOSR_SPR_UPDATE_ENABLE]
static inline bool GET_QME_QMCR_QOSR_SPR_UPDATE_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_QOSR_SPR_UPDATE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_QOSR_SPR_UPDATE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_QOSR_SPR_UPDATE_ENABLE]

//>> SET_[QME_QMCR_SPARE2]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_SPARE2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_SPARE2,
           QME_QMCR_SPARE2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_SPARE2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_SPARE2]

//>> SET_[QME_QMCR_SPARE2]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_SPARE2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_SPARE2,
           QME_QMCR_SPARE2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_SPARE2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_SPARE2]

//>> GET_[QME_QMCR_SPARE2]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_SPARE2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_SPARE2,
           QME_QMCR_SPARE2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_SPARE2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_SPARE2]

//>> SET_[QME_QMCR_MIXED_LPAR_MODE_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_MIXED_LPAR_MODE_DISABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_MIXED_LPAR_MODE_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_MIXED_LPAR_MODE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_MIXED_LPAR_MODE_DISABLE]

//>> SET_[QME_QMCR_MIXED_LPAR_MODE_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_MIXED_LPAR_MODE_DISABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_MIXED_LPAR_MODE_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_MIXED_LPAR_MODE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_MIXED_LPAR_MODE_DISABLE]

//>> SET_[QME_QMCR_MIXED_LPAR_MODE_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_MIXED_LPAR_MODE_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_MIXED_LPAR_MODE_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_MIXED_LPAR_MODE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_MIXED_LPAR_MODE_DISABLE]

//>> CLEAR_[QME_QMCR_MIXED_LPAR_MODE_DISABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_MIXED_LPAR_MODE_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_MIXED_LPAR_MODE_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_MIXED_LPAR_MODE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_MIXED_LPAR_MODE_DISABLE]

//>> GET_[QME_QMCR_MIXED_LPAR_MODE_DISABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_MIXED_LPAR_MODE_DISABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_MIXED_LPAR_MODE_DISABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_MIXED_LPAR_MODE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_MIXED_LPAR_MODE_DISABLE]

//>> GET_[QME_QMCR_MIXED_LPAR_MODE_DISABLE]
static inline bool GET_QME_QMCR_MIXED_LPAR_MODE_DISABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_MIXED_LPAR_MODE_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_MIXED_LPAR_MODE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_MIXED_LPAR_MODE_DISABLE]

//>> SET_[QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE]

//>> SET_[QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE]

//>> SET_[QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE]

//>> CLEAR_[QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE]

//>> GET_[QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE]

//>> GET_[QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE]
static inline bool GET_QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_RESET_QME_PCB_INTERRUPT_INTERFACE]

//>> SET_[QME_QMCR_PCB_RESET_ALL_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_PCB_RESET_ALL_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_PCB_RESET_ALL_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_PCB_RESET_ALL_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_PCB_RESET_ALL_REQ]

//>> SET_[QME_QMCR_PCB_RESET_ALL_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_PCB_RESET_ALL_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_PCB_RESET_ALL_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_PCB_RESET_ALL_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_PCB_RESET_ALL_REQ]

//>> SET_[QME_QMCR_PCB_RESET_ALL_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_PCB_RESET_ALL_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_PCB_RESET_ALL_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_PCB_RESET_ALL_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_PCB_RESET_ALL_REQ]

//>> CLEAR_[QME_QMCR_PCB_RESET_ALL_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_PCB_RESET_ALL_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_PCB_RESET_ALL_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_PCB_RESET_ALL_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_PCB_RESET_ALL_REQ]

//>> GET_[QME_QMCR_PCB_RESET_ALL_REQ]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_PCB_RESET_ALL_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_PCB_RESET_ALL_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_PCB_RESET_ALL_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_PCB_RESET_ALL_REQ]

//>> GET_[QME_QMCR_PCB_RESET_ALL_REQ]
static inline bool GET_QME_QMCR_PCB_RESET_ALL_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_PCB_RESET_ALL_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_PCB_RESET_ALL_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_PCB_RESET_ALL_REQ]

//>> SET_[QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE]

//>> SET_[QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE]

//>> SET_[QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE]

//>> CLEAR_[QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE]

//>> GET_[QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE]

//>> GET_[QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE]
static inline bool GET_QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_CR_STEP_SYNC_TOGGLE_DISABLE]

//>> SET_[QME_QMCR_CR_SYNC_PULSE_DIS]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_CR_SYNC_PULSE_DIS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_CR_SYNC_PULSE_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_CR_SYNC_PULSE_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_CR_SYNC_PULSE_DIS]

//>> SET_[QME_QMCR_CR_SYNC_PULSE_DIS]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_CR_SYNC_PULSE_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_CR_SYNC_PULSE_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_CR_SYNC_PULSE_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_CR_SYNC_PULSE_DIS]

//>> SET_[QME_QMCR_CR_SYNC_PULSE_DIS]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_CR_SYNC_PULSE_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_CR_SYNC_PULSE_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_CR_SYNC_PULSE_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_CR_SYNC_PULSE_DIS]

//>> CLEAR_[QME_QMCR_CR_SYNC_PULSE_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_CR_SYNC_PULSE_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_CR_SYNC_PULSE_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_CR_SYNC_PULSE_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_CR_SYNC_PULSE_DIS]

//>> GET_[QME_QMCR_CR_SYNC_PULSE_DIS]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_CR_SYNC_PULSE_DIS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_CR_SYNC_PULSE_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_CR_SYNC_PULSE_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_CR_SYNC_PULSE_DIS]

//>> GET_[QME_QMCR_CR_SYNC_PULSE_DIS]
static inline bool GET_QME_QMCR_CR_SYNC_PULSE_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_CR_SYNC_PULSE_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_CR_SYNC_PULSE_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_CR_SYNC_PULSE_DIS]

//>> SET_[QME_QMCR_FUSED_CORE_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_FUSED_CORE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_FUSED_CORE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_FUSED_CORE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_FUSED_CORE_MODE]

//>> SET_[QME_QMCR_FUSED_CORE_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_FUSED_CORE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_FUSED_CORE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_FUSED_CORE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_FUSED_CORE_MODE]

//>> SET_[QME_QMCR_FUSED_CORE_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_FUSED_CORE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_FUSED_CORE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_FUSED_CORE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_FUSED_CORE_MODE]

//>> CLEAR_[QME_QMCR_FUSED_CORE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_FUSED_CORE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_FUSED_CORE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_FUSED_CORE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_FUSED_CORE_MODE]

//>> GET_[QME_QMCR_FUSED_CORE_MODE]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_FUSED_CORE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_FUSED_CORE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_FUSED_CORE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_FUSED_CORE_MODE]

//>> GET_[QME_QMCR_FUSED_CORE_MODE]
static inline bool GET_QME_QMCR_FUSED_CORE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_FUSED_CORE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_FUSED_CORE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_FUSED_CORE_MODE]

//>> SET_[QME_QMCR_TOD_STEP_MS]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_TOD_STEP_MS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_TOD_STEP_MS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_TOD_STEP_MS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_TOD_STEP_MS]

//>> SET_[QME_QMCR_TOD_STEP_MS]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_TOD_STEP_MS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_TOD_STEP_MS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_TOD_STEP_MS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_TOD_STEP_MS]

//>> SET_[QME_QMCR_TOD_STEP_MS]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_TOD_STEP_MS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_TOD_STEP_MS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_TOD_STEP_MS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_TOD_STEP_MS]

//>> CLEAR_[QME_QMCR_TOD_STEP_MS]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_TOD_STEP_MS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_TOD_STEP_MS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_TOD_STEP_MS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_TOD_STEP_MS]

//>> GET_[QME_QMCR_TOD_STEP_MS]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_TOD_STEP_MS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_TOD_STEP_MS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_TOD_STEP_MS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_TOD_STEP_MS]

//>> GET_[QME_QMCR_TOD_STEP_MS]
static inline bool GET_QME_QMCR_TOD_STEP_MS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_TOD_STEP_MS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_TOD_STEP_MS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_TOD_STEP_MS]

//>> SET_[QME_QMCR_TOD_SYNC_MS]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_TOD_SYNC_MS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_TOD_SYNC_MS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_TOD_SYNC_MS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_TOD_SYNC_MS]

//>> SET_[QME_QMCR_TOD_SYNC_MS]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_TOD_SYNC_MS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_TOD_SYNC_MS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_TOD_SYNC_MS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_TOD_SYNC_MS]

//>> SET_[QME_QMCR_TOD_SYNC_MS]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_TOD_SYNC_MS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_TOD_SYNC_MS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_TOD_SYNC_MS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_TOD_SYNC_MS]

//>> CLEAR_[QME_QMCR_TOD_SYNC_MS]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_TOD_SYNC_MS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_TOD_SYNC_MS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_TOD_SYNC_MS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_TOD_SYNC_MS]

//>> GET_[QME_QMCR_TOD_SYNC_MS]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_TOD_SYNC_MS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_TOD_SYNC_MS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_TOD_SYNC_MS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_TOD_SYNC_MS]

//>> GET_[QME_QMCR_TOD_SYNC_MS]
static inline bool GET_QME_QMCR_TOD_SYNC_MS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_TOD_SYNC_MS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_TOD_SYNC_MS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_TOD_SYNC_MS]

//>> SET_[QME_QMCR_TOD_STEP_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_TOD_STEP_ACTUAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_TOD_STEP_ACTUAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_TOD_STEP_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_TOD_STEP_ACTUAL]

//>> SET_[QME_QMCR_TOD_STEP_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_TOD_STEP_ACTUAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_TOD_STEP_ACTUAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_TOD_STEP_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_TOD_STEP_ACTUAL]

//>> SET_[QME_QMCR_TOD_STEP_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_TOD_STEP_ACTUAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_TOD_STEP_ACTUAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_TOD_STEP_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_TOD_STEP_ACTUAL]

//>> CLEAR_[QME_QMCR_TOD_STEP_ACTUAL]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_TOD_STEP_ACTUAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_TOD_STEP_ACTUAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_TOD_STEP_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_TOD_STEP_ACTUAL]

//>> GET_[QME_QMCR_TOD_STEP_ACTUAL]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_TOD_STEP_ACTUAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_TOD_STEP_ACTUAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_TOD_STEP_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_TOD_STEP_ACTUAL]

//>> GET_[QME_QMCR_TOD_STEP_ACTUAL]
static inline bool GET_QME_QMCR_TOD_STEP_ACTUAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_TOD_STEP_ACTUAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_TOD_STEP_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_TOD_STEP_ACTUAL]

//>> SET_[QME_QMCR_TOD_SYNC_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_TOD_SYNC_ACTUAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_TOD_SYNC_ACTUAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_TOD_SYNC_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_TOD_SYNC_ACTUAL]

//>> SET_[QME_QMCR_TOD_SYNC_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_TOD_SYNC_ACTUAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_TOD_SYNC_ACTUAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_TOD_SYNC_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_TOD_SYNC_ACTUAL]

//>> SET_[QME_QMCR_TOD_SYNC_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_TOD_SYNC_ACTUAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.setBit<QME_QMCR_TOD_SYNC_ACTUAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_eq Invalid dial access QME_QMCR_TOD_SYNC_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_TOD_SYNC_ACTUAL]

//>> CLEAR_[QME_QMCR_TOD_SYNC_ACTUAL]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_QMCR_TOD_SYNC_ACTUAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_QMCR_TOD_SYNC_ACTUAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_eq Invalid dial access QME_QMCR_TOD_SYNC_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_QMCR_TOD_SYNC_ACTUAL]

//>> GET_[QME_QMCR_TOD_SYNC_ACTUAL]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_TOD_SYNC_ACTUAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_TOD_SYNC_ACTUAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_TOD_SYNC_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_TOD_SYNC_ACTUAL]

//>> GET_[QME_QMCR_TOD_SYNC_ACTUAL]
static inline bool GET_QME_QMCR_TOD_SYNC_ACTUAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.getBit<QME_QMCR_TOD_SYNC_ACTUAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_eq Invalid dial access QME_QMCR_TOD_SYNC_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_TOD_SYNC_ACTUAL]

//>> SET_[QME_QMCR_CORE_PARTIAL_GOOD]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_CORE_PARTIAL_GOOD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_CORE_PARTIAL_GOOD,
           QME_QMCR_CORE_PARTIAL_GOOD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_QMCR_CORE_PARTIAL_GOOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_CORE_PARTIAL_GOOD]

//>> SET_[QME_QMCR_CORE_PARTIAL_GOOD]
static inline fapi2::buffer<uint64_t>& SET_QME_QMCR_CORE_PARTIAL_GOOD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_QMCR_CORE_PARTIAL_GOOD,
           QME_QMCR_CORE_PARTIAL_GOOD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_QMCR_CORE_PARTIAL_GOOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QMCR_CORE_PARTIAL_GOOD]

//>> GET_[QME_QMCR_CORE_PARTIAL_GOOD]
static inline fapi2::buffer<uint64_t>& GET_QME_QMCR_CORE_PARTIAL_GOOD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QMCR, QME_QMCR_PPE2, QME_QMCR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_QMCR_CORE_PARTIAL_GOOD,
           QME_QMCR_CORE_PARTIAL_GOOD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_QMCR_CORE_PARTIAL_GOOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QMCR_CORE_PARTIAL_GOOD]

//>> PREP_[QME_SWPR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_SWPR1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SWPR1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_SWPR1]

//>> GET_[QME_SWPR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_SWPR1(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SWPR1;
#endif
    return fapi2::getScom(i_target, QME_SWPR1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_SWPR1]

//>> PUT_[QME_SWPR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_SWPR1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_SWPR1));
#endif
    return fapi2::putScom(i_target, QME_SWPR1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_SWPR1]


//>> SET_[QME_SWPR1_BAR]
static inline fapi2::buffer<uint64_t>& SET_QME_SWPR1_BAR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWPR1));
#endif
    return o_data.insertFromRight<QME_SWPR1_BAR,
           QME_SWPR1_BAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWPR1_BAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWPR1_BAR]

//>> SET_[QME_SWPR1_BAR]
static inline fapi2::buffer<uint64_t>& SET_QME_SWPR1_BAR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWPR1));
#endif
    return o_data.insertFromRight<QME_SWPR1_BAR,
           QME_SWPR1_BAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWPR1_BAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWPR1_BAR]

//>> GET_[QME_SWPR1_BAR]
static inline fapi2::buffer<uint64_t>& GET_QME_SWPR1_BAR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWPR1));
#endif
    return i_data.extractToRight<QME_SWPR1_BAR,
           QME_SWPR1_BAR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWPR1_BAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWPR1_BAR]

//>> SET_[QME_SWPR1_SIZE]
static inline fapi2::buffer<uint64_t>& SET_QME_SWPR1_SIZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWPR1));
#endif
    return o_data.insertFromRight<QME_SWPR1_SIZE,
           QME_SWPR1_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_eq Invalid dial access QME_SWPR1_SIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWPR1_SIZE]

//>> SET_[QME_SWPR1_SIZE]
static inline fapi2::buffer<uint64_t>& SET_QME_SWPR1_SIZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWPR1));
#endif
    return o_data.insertFromRight<QME_SWPR1_SIZE,
           QME_SWPR1_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_eq Invalid dial access QME_SWPR1_SIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SWPR1_SIZE]

//>> GET_[QME_SWPR1_SIZE]
static inline fapi2::buffer<uint64_t>& GET_QME_SWPR1_SIZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWPR1));
#endif
    return i_data.extractToRight<QME_SWPR1_SIZE,
           QME_SWPR1_SIZE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_eq Invalid dial access QME_SWPR1_SIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SWPR1_SIZE]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
