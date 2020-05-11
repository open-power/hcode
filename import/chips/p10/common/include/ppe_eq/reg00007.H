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

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
