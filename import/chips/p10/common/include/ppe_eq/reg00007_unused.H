/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_eq/reg00007_unused.H $    */
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

#ifndef __PPE_EQ_REG00007_H_UNUSED__
#define __PPE_EQ_REG00007_H_UNUSED__

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
