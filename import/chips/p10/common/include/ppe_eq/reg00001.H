/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_eq/reg00001.H $           */
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

#ifndef __PPE_EQ_REG00001_H_
#define __PPE_EQ_REG00001_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_EIPR_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EIPR_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_EIPR_RW(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_EIPR_RW;
#endif
    return fapi2::getScom(i_target, QME_EIPR_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_EIPR_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_EIPR_RW, QME_EIPR_WO_CLEAR, QME_EIPR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_EIPR_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

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


static inline fapi2::buffer<uint64_t>& SET_QME_EIPR_QME_EIPR_INTERRUPT_POLARITY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EIPR_RW, QME_EIPR_WO_CLEAR, QME_EIPR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EIPR_QME_EIPR_INTERRUPT_POLARITY,
           QME_EIPR_QME_EIPR_INTERRUPT_POLARITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_EIPR_QME_EIPR_INTERRUPT_POLARITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_EIPR_QME_EIPR_INTERRUPT_POLARITY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EIPR_RW, QME_EIPR_WO_CLEAR, QME_EIPR_WO_OR));
#endif
    return o_data.insertFromRight<QME_EIPR_QME_EIPR_INTERRUPT_POLARITY,
           QME_EIPR_QME_EIPR_INTERRUPT_POLARITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_EIPR_QME_EIPR_INTERRUPT_POLARITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_EIPR_QME_EIPR_INTERRUPT_POLARITY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_EIPR_RW, QME_EIPR_WO_CLEAR, QME_EIPR_WO_OR));
#endif
    return i_data.extractToRight<QME_EIPR_QME_EIPR_INTERRUPT_POLARITY,
           QME_EIPR_QME_EIPR_INTERRUPT_POLARITY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_EIPR_QME_EIPR_INTERRUPT_POLARITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_LFIRMASK_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIRMASK_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_LFIRMASK_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIRMASK_RW;
#endif
    return fapi2::getScom(i_target, QME_LFIRMASK_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_LFIRMASK_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_LFIRMASK_RW, QME_LFIRMASK_WO_AND, QME_LFIRMASK_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_LFIRMASK_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

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


static inline fapi2::buffer<uint64_t>& SET_QME_LFIRMASK_QME_LFIRMASK_FIR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIRMASK_RW, QME_LFIRMASK_WO_AND, QME_LFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIRMASK_QME_LFIRMASK_FIR_MASK,
           QME_LFIRMASK_QME_LFIRMASK_FIR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_LFIRMASK_QME_LFIRMASK_FIR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_LFIRMASK_QME_LFIRMASK_FIR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIRMASK_RW, QME_LFIRMASK_WO_AND, QME_LFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<QME_LFIRMASK_QME_LFIRMASK_FIR_MASK,
           QME_LFIRMASK_QME_LFIRMASK_FIR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_LFIRMASK_QME_LFIRMASK_FIR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_LFIRMASK_QME_LFIRMASK_FIR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_LFIRMASK_RW, QME_LFIRMASK_WO_AND, QME_LFIRMASK_WO_OR));
#endif
    return i_data.extractToRight<QME_LFIRMASK_QME_LFIRMASK_FIR_MASK,
           QME_LFIRMASK_QME_LFIRMASK_FIR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_LFIRMASK_QME_LFIRMASK_FIR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_SCDR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCDR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_SCDR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCDR;
#endif
    return fapi2::getScom(i_target, QME_SCDR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_SCDR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_SCDR));
#endif
    return fapi2::putScom(i_target, QME_SCDR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}


template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_SCOM_XIDBGPRO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCOM_XIDBGPRO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_SCOM_XIDBGPRO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCOM_XIDBGPRO;
#endif
    return fapi2::getScom(i_target, QME_SCOM_XIDBGPRO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_SCOM_XIDBGPRO(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_SCOM_XIDBGPRO));
#endif
    return fapi2::putScom(i_target, QME_SCOM_XIDBGPRO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}


template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_SSDR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SSDR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_SSDR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SSDR;
#endif
    return fapi2::getScom(i_target, QME_SSDR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_SSDR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return fapi2::putScom(i_target, QME_SSDR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}


static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_0_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_0_QME_SCSR_PM_EXIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_0_QME_SCSR_PM_EXIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_0_QME_SCSR_PM_EXIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_0_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.setBit<QME_SSDR_0_QME_SCSR_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SSDR_0_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.clearBit<QME_SSDR_0_QME_SCSR_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_0_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_0_QME_SCSR_PM_EXIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SSDR_0_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.getBit<QME_SSDR_0_QME_SCSR_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_1_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_1_QME_SCSR_PM_EXIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_1_QME_SCSR_PM_EXIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_1_QME_SCSR_PM_EXIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_1_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.setBit<QME_SSDR_1_QME_SCSR_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SSDR_1_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.clearBit<QME_SSDR_1_QME_SCSR_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_1_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_1_QME_SCSR_PM_EXIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SSDR_1_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.getBit<QME_SSDR_1_QME_SCSR_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_2_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_2_QME_SCSR_PM_EXIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_2_QME_SCSR_PM_EXIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_2_QME_SCSR_PM_EXIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_2_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.setBit<QME_SSDR_2_QME_SCSR_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SSDR_2_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.clearBit<QME_SSDR_2_QME_SCSR_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_2_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_2_QME_SCSR_PM_EXIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SSDR_2_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.getBit<QME_SSDR_2_QME_SCSR_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_3_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_3_QME_SCSR_PM_EXIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_3_QME_SCSR_PM_EXIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_3_QME_SCSR_PM_EXIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_3_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.setBit<QME_SSDR_3_QME_SCSR_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SSDR_3_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.clearBit<QME_SSDR_3_QME_SCSR_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_3_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_3_QME_SCSR_PM_EXIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SSDR_3_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.getBit<QME_SSDR_3_QME_SCSR_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_0_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_0_QME_SCSR_BLOCK_INTR_OUTPUTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_0_QME_SCSR_BLOCK_INTR_OUTPUTS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_0_QME_SCSR_BLOCK_INTR_OUTPUTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_0_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.setBit<QME_SSDR_0_QME_SCSR_BLOCK_INTR_OUTPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SSDR_0_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.clearBit<QME_SSDR_0_QME_SCSR_BLOCK_INTR_OUTPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_0_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_0_QME_SCSR_BLOCK_INTR_OUTPUTS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SSDR_0_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.getBit<QME_SSDR_0_QME_SCSR_BLOCK_INTR_OUTPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_1_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_1_QME_SCSR_BLOCK_INTR_OUTPUTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_1_QME_SCSR_BLOCK_INTR_OUTPUTS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_1_QME_SCSR_BLOCK_INTR_OUTPUTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_1_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.setBit<QME_SSDR_1_QME_SCSR_BLOCK_INTR_OUTPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SSDR_1_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.clearBit<QME_SSDR_1_QME_SCSR_BLOCK_INTR_OUTPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_1_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_1_QME_SCSR_BLOCK_INTR_OUTPUTS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SSDR_1_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.getBit<QME_SSDR_1_QME_SCSR_BLOCK_INTR_OUTPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_2_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_2_QME_SCSR_BLOCK_INTR_OUTPUTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_2_QME_SCSR_BLOCK_INTR_OUTPUTS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_2_QME_SCSR_BLOCK_INTR_OUTPUTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_2_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.setBit<QME_SSDR_2_QME_SCSR_BLOCK_INTR_OUTPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SSDR_2_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.clearBit<QME_SSDR_2_QME_SCSR_BLOCK_INTR_OUTPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_2_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_2_QME_SCSR_BLOCK_INTR_OUTPUTS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SSDR_2_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.getBit<QME_SSDR_2_QME_SCSR_BLOCK_INTR_OUTPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_3_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_3_QME_SCSR_BLOCK_INTR_OUTPUTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_3_QME_SCSR_BLOCK_INTR_OUTPUTS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_3_QME_SCSR_BLOCK_INTR_OUTPUTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_3_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.setBit<QME_SSDR_3_QME_SCSR_BLOCK_INTR_OUTPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SSDR_3_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.clearBit<QME_SSDR_3_QME_SCSR_BLOCK_INTR_OUTPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_3_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_3_QME_SCSR_BLOCK_INTR_OUTPUTS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SSDR_3_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.getBit<QME_SSDR_3_QME_SCSR_BLOCK_INTR_OUTPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_0_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_0_QME_SCSR_PM_BLOCK_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_0_QME_SCSR_PM_BLOCK_INTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_0_QME_SCSR_PM_BLOCK_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_0_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.setBit<QME_SSDR_0_QME_SCSR_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SSDR_0_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.clearBit<QME_SSDR_0_QME_SCSR_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_0_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_0_QME_SCSR_PM_BLOCK_INTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SSDR_0_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.getBit<QME_SSDR_0_QME_SCSR_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_1_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_1_QME_SCSR_PM_BLOCK_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_1_QME_SCSR_PM_BLOCK_INTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_1_QME_SCSR_PM_BLOCK_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_1_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.setBit<QME_SSDR_1_QME_SCSR_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SSDR_1_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.clearBit<QME_SSDR_1_QME_SCSR_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_1_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_1_QME_SCSR_PM_BLOCK_INTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SSDR_1_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.getBit<QME_SSDR_1_QME_SCSR_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_2_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_2_QME_SCSR_PM_BLOCK_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_2_QME_SCSR_PM_BLOCK_INTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_2_QME_SCSR_PM_BLOCK_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_2_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.setBit<QME_SSDR_2_QME_SCSR_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SSDR_2_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.clearBit<QME_SSDR_2_QME_SCSR_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_2_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_2_QME_SCSR_PM_BLOCK_INTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SSDR_2_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.getBit<QME_SSDR_2_QME_SCSR_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_3_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_3_QME_SCSR_PM_BLOCK_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_3_QME_SCSR_PM_BLOCK_INTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_3_QME_SCSR_PM_BLOCK_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_3_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.setBit<QME_SSDR_3_QME_SCSR_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SSDR_3_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.clearBit<QME_SSDR_3_QME_SCSR_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_3_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_3_QME_SCSR_PM_BLOCK_INTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SSDR_3_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.getBit<QME_SSDR_3_QME_SCSR_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.setBit<QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.clearBit<QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.getBit<QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.setBit<QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.clearBit<QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.getBit<QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.setBit<QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.clearBit<QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.getBit<QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.setBit<QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.clearBit<QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_ACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.getBit<QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_STATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_STATE,
           QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_STATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_STATE,
           QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_STATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_STATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_STATE,
           QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_0_QME_SSH_SRC_SAMPLED_STOP_STATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_STATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_STATE,
           QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_STATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_STATE,
           QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_STATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_STATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_STATE,
           QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_1_QME_SSH_SRC_SAMPLED_STOP_STATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_STATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_STATE,
           QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_STATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_STATE,
           QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_STATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_STATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_STATE,
           QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_2_QME_SSH_SRC_SAMPLED_STOP_STATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_STATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_STATE,
           QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_STATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return o_data.insertFromRight<QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_STATE,
           QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_STATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_STATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SSDR));
#endif
    return i_data.extractToRight<QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_STATE,
           QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SSDR_3_QME_SSH_SRC_SAMPLED_STOP_STATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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


static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_SET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_SET,
           QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_SET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_SET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_SET,
           QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_SET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_SET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_SET,
           QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_SET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_CLR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_CLR,
           QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_CLR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_CLR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_CLR,
           QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_CLR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_CLR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_CLR,
           QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_CLR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_ACT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_ACT,
           QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_ACT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_ACT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_ACT,
           QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_ACT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_ACT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_ACT,
           QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_ACT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_DRP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_DRP,
           QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_DRP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_DRP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_DRP,
           QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_DRP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_DRP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_DRP,
           QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SSH_SRC_SPC_WKUP_RECENT_DRP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_0_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_0_QME_SPWU_OTR_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_0_QME_SPWU_OTR_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_0_QME_SPWU_OTR_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_0_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_0_QME_SPWU_OTR_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_0_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_0_QME_SPWU_OTR_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_0_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_0_QME_SPWU_OTR_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SWHR_0_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_0_QME_SPWU_OTR_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_0_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_0_QME_SPWU_FSP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_0_QME_SPWU_FSP_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_0_QME_SPWU_FSP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_0_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_0_QME_SPWU_FSP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_0_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_0_QME_SPWU_FSP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_0_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_0_QME_SPWU_FSP_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SWHR_0_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_0_QME_SPWU_FSP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_0_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_0_QME_SPWU_OCC_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_0_QME_SPWU_OCC_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_0_QME_SPWU_OCC_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_0_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_0_QME_SPWU_OCC_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_0_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_0_QME_SPWU_OCC_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_0_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_0_QME_SPWU_OCC_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SWHR_0_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_0_QME_SPWU_OCC_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_0_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_0_QME_SPWU_HYP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_0_QME_SPWU_HYP_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_0_QME_SPWU_HYP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_0_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_0_QME_SPWU_HYP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_0_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_0_QME_SPWU_HYP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_0_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_0_QME_SPWU_HYP_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SWHR_0_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_0_QME_SPWU_HYP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_0_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_SET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_SET,
           QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_SET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_SET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_SET,
           QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_SET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_SET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_SET,
           QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_SET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_CLR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_CLR,
           QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_CLR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_CLR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_CLR,
           QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_CLR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_CLR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_CLR,
           QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_CLR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_ACT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_ACT,
           QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_ACT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_ACT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_ACT,
           QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_ACT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_ACT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_ACT,
           QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_ACT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_DRP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_DRP,
           QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_DRP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_DRP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_DRP,
           QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_DRP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_DRP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_DRP,
           QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SSH_SRC_SPC_WKUP_RECENT_DRP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_1_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_1_QME_SPWU_OTR_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_1_QME_SPWU_OTR_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_1_QME_SPWU_OTR_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_1_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_1_QME_SPWU_OTR_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_1_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_1_QME_SPWU_OTR_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_1_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_1_QME_SPWU_OTR_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SWHR_1_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_1_QME_SPWU_OTR_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_1_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_1_QME_SPWU_FSP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_1_QME_SPWU_FSP_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_1_QME_SPWU_FSP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_1_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_1_QME_SPWU_FSP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_1_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_1_QME_SPWU_FSP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_1_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_1_QME_SPWU_FSP_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SWHR_1_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_1_QME_SPWU_FSP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_1_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_1_QME_SPWU_OCC_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_1_QME_SPWU_OCC_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_1_QME_SPWU_OCC_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_1_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_1_QME_SPWU_OCC_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_1_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_1_QME_SPWU_OCC_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_1_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_1_QME_SPWU_OCC_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SWHR_1_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_1_QME_SPWU_OCC_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_1_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_1_QME_SPWU_HYP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_1_QME_SPWU_HYP_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_1_QME_SPWU_HYP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_1_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_1_QME_SPWU_HYP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_1_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_1_QME_SPWU_HYP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_1_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_1_QME_SPWU_HYP_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SWHR_1_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_1_QME_SPWU_HYP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_1_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_SET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_SET,
           QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_SET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_SET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_SET,
           QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_SET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_SET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_SET,
           QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_SET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_CLR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_CLR,
           QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_CLR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_CLR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_CLR,
           QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_CLR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_CLR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_CLR,
           QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_CLR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_ACT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_ACT,
           QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_ACT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_ACT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_ACT,
           QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_ACT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_ACT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_ACT,
           QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_ACT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_DRP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_DRP,
           QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_DRP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_DRP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_DRP,
           QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_DRP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_DRP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_DRP,
           QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SSH_SRC_SPC_WKUP_RECENT_DRP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_2_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_2_QME_SPWU_OTR_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_2_QME_SPWU_OTR_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_2_QME_SPWU_OTR_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_2_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_2_QME_SPWU_OTR_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_2_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_2_QME_SPWU_OTR_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_2_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_2_QME_SPWU_OTR_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SWHR_2_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_2_QME_SPWU_OTR_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_2_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_2_QME_SPWU_FSP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_2_QME_SPWU_FSP_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_2_QME_SPWU_FSP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_2_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_2_QME_SPWU_FSP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_2_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_2_QME_SPWU_FSP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_2_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_2_QME_SPWU_FSP_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SWHR_2_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_2_QME_SPWU_FSP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_2_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_2_QME_SPWU_OCC_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_2_QME_SPWU_OCC_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_2_QME_SPWU_OCC_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_2_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_2_QME_SPWU_OCC_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_2_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_2_QME_SPWU_OCC_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_2_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_2_QME_SPWU_OCC_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SWHR_2_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_2_QME_SPWU_OCC_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_2_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_2_QME_SPWU_HYP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_2_QME_SPWU_HYP_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_2_QME_SPWU_HYP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_2_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_2_QME_SPWU_HYP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_2_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_2_QME_SPWU_HYP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_2_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_2_QME_SPWU_HYP_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SWHR_2_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_2_QME_SPWU_HYP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_2_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_SET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_SET,
           QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_SET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_SET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_SET,
           QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_SET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_SET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_SET,
           QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_SET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_CLR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_CLR,
           QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_CLR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_CLR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_CLR,
           QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_CLR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_CLR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_CLR,
           QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_CLR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_ACT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_ACT,
           QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_ACT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_ACT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_ACT,
           QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_ACT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_ACT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_ACT,
           QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_ACT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_DRP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_DRP,
           QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_DRP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_DRP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_DRP,
           QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_DRP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_DRP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_DRP,
           QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SSH_SRC_SPC_WKUP_RECENT_DRP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_3_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_3_QME_SPWU_OTR_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_3_QME_SPWU_OTR_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_3_QME_SPWU_OTR_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_3_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_3_QME_SPWU_OTR_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_3_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_3_QME_SPWU_OTR_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_3_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_3_QME_SPWU_OTR_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SWHR_3_QME_SPWU_OTR_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_3_QME_SPWU_OTR_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_OTR_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_3_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_3_QME_SPWU_FSP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_3_QME_SPWU_FSP_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_3_QME_SPWU_FSP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_3_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_3_QME_SPWU_FSP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_3_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_3_QME_SPWU_FSP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_3_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_3_QME_SPWU_FSP_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SWHR_3_QME_SPWU_FSP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_3_QME_SPWU_FSP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_FSP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_3_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_3_QME_SPWU_OCC_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_3_QME_SPWU_OCC_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_3_QME_SPWU_OCC_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_3_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_3_QME_SPWU_OCC_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_3_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_3_QME_SPWU_OCC_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_3_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_3_QME_SPWU_OCC_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SWHR_3_QME_SPWU_OCC_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_3_QME_SPWU_OCC_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_OCC_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_3_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_3_QME_SPWU_HYP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_3_QME_SPWU_HYP_SPECIAL_WKUP_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.insertFromRight<QME_SWHR_3_QME_SPWU_HYP_SPECIAL_WKUP_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_SWHR_3_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.setBit<QME_SWHR_3_QME_SPWU_HYP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_QME_SWHR_3_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return o_data.clearBit<QME_SWHR_3_QME_SPWU_HYP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_SWHR_3_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.extractToRight<QME_SWHR_3_QME_SPWU_HYP_SPECIAL_WKUP_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_QME_SWHR_3_QME_SPWU_HYP_SPECIAL_WKUP_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SWHR));
#endif
    return i_data.getBit<QME_SWHR_3_QME_SPWU_HYP_SPECIAL_WKUP_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_SWHR_3_QME_SPWU_HYP_SPECIAL_WKUP_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access QME_SWPR0_BAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access QME_SWPR0_BAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access QME_SWPR0_BAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access QME_SWPR0_SIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access QME_SWPR0_SIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access QME_SWPR0_SIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_TBR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_TBR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_TBR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_TBR;
#endif
    return fapi2::getScom(i_target, QME_TBR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_TBR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_TBR));
#endif
    return fapi2::putScom(i_target, QME_TBR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}


static inline fapi2::buffer<uint64_t>& SET_QME_TBR_TIMEBASE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TBR));
#endif
    return o_data.insertFromRight<QME_TBR_TIMEBASE,
           QME_TBR_TIMEBASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_TBR_TIMEBASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_TBR_TIMEBASE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TBR));
#endif
    return o_data.insertFromRight<QME_TBR_TIMEBASE,
           QME_TBR_TIMEBASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_TBR_TIMEBASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_TBR_TIMEBASE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TBR));
#endif
    return i_data.extractToRight<QME_TBR_TIMEBASE,
           QME_TBR_TIMEBASE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_TBR_TIMEBASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_TBR_CYCLES(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TBR));
#endif
    return o_data.insertFromRight<QME_TBR_CYCLES,
           QME_TBR_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_TBR_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_QME_TBR_CYCLES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TBR));
#endif
    return o_data.insertFromRight<QME_TBR_CYCLES,
           QME_TBR_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_TBR_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_QME_TBR_CYCLES(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TBR));
#endif
    return i_data.extractToRight<QME_TBR_CYCLES,
           QME_TBR_CYCLES_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access QME_TBR_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}


#ifndef __PPE_HCODE__
}
}

#endif
#endif
