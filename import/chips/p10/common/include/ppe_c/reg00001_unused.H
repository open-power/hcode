/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_c/reg00001_unused.H $     */
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

#ifndef __PPE_C_REG00001_H_UNUSED__
#define __PPE_C_REG00001_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> PREP_[QME_DCSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_DCSR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_DCSR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_DCSR]

//>> GET_[QME_DCSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_DCSR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_DCSR;
#endif
    return fapi2::getScom(i_target, QME_DCSR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_DCSR]

//>> PUT_[QME_DCSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_DCSR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return fapi2::putScom(i_target, QME_DCSR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_DCSR]


//>> SET_[QME_DCSR_PLS_T0]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_PLS_T0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.insertFromRight<QME_DCSR_PLS_T0,
           QME_DCSR_PLS_T0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_DCSR_PLS_T0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_PLS_T0]

//>> SET_[QME_DCSR_PLS_T0]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_PLS_T0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.insertFromRight<QME_DCSR_PLS_T0,
           QME_DCSR_PLS_T0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_DCSR_PLS_T0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_PLS_T0]

//>> GET_[QME_DCSR_PLS_T0]
static inline fapi2::buffer<uint64_t>& GET_QME_DCSR_PLS_T0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return i_data.extractToRight<QME_DCSR_PLS_T0,
           QME_DCSR_PLS_T0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_DCSR_PLS_T0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DCSR_PLS_T0]

//>> SET_[QME_DCSR_PLS_T1]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_PLS_T1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.insertFromRight<QME_DCSR_PLS_T1,
           QME_DCSR_PLS_T1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_DCSR_PLS_T1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_PLS_T1]

//>> SET_[QME_DCSR_PLS_T1]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_PLS_T1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.insertFromRight<QME_DCSR_PLS_T1,
           QME_DCSR_PLS_T1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_DCSR_PLS_T1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_PLS_T1]

//>> GET_[QME_DCSR_PLS_T1]
static inline fapi2::buffer<uint64_t>& GET_QME_DCSR_PLS_T1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return i_data.extractToRight<QME_DCSR_PLS_T1,
           QME_DCSR_PLS_T1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_DCSR_PLS_T1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DCSR_PLS_T1]

//>> SET_[QME_DCSR_PLS_T2]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_PLS_T2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.insertFromRight<QME_DCSR_PLS_T2,
           QME_DCSR_PLS_T2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_DCSR_PLS_T2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_PLS_T2]

//>> SET_[QME_DCSR_PLS_T2]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_PLS_T2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.insertFromRight<QME_DCSR_PLS_T2,
           QME_DCSR_PLS_T2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_DCSR_PLS_T2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_PLS_T2]

//>> GET_[QME_DCSR_PLS_T2]
static inline fapi2::buffer<uint64_t>& GET_QME_DCSR_PLS_T2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return i_data.extractToRight<QME_DCSR_PLS_T2,
           QME_DCSR_PLS_T2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_DCSR_PLS_T2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DCSR_PLS_T2]

//>> SET_[QME_DCSR_PLS_T3]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_PLS_T3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.insertFromRight<QME_DCSR_PLS_T3,
           QME_DCSR_PLS_T3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_DCSR_PLS_T3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_PLS_T3]

//>> SET_[QME_DCSR_PLS_T3]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_PLS_T3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.insertFromRight<QME_DCSR_PLS_T3,
           QME_DCSR_PLS_T3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_DCSR_PLS_T3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_PLS_T3]

//>> GET_[QME_DCSR_PLS_T3]
static inline fapi2::buffer<uint64_t>& GET_QME_DCSR_PLS_T3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return i_data.extractToRight<QME_DCSR_PLS_T3,
           QME_DCSR_PLS_T3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_DCSR_PLS_T3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DCSR_PLS_T3]

//>> SET_[QME_DCSR_SL_T0]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_SL_T0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.insertFromRight<QME_DCSR_SL_T0,
           QME_DCSR_SL_T0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_DCSR_SL_T0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_SL_T0]

//>> SET_[QME_DCSR_SL_T0]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_SL_T0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.insertFromRight<QME_DCSR_SL_T0,
           QME_DCSR_SL_T0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_DCSR_SL_T0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_SL_T0]

//>> GET_[QME_DCSR_SL_T0]
static inline fapi2::buffer<uint64_t>& GET_QME_DCSR_SL_T0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return i_data.extractToRight<QME_DCSR_SL_T0,
           QME_DCSR_SL_T0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_DCSR_SL_T0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DCSR_SL_T0]

//>> SET_[QME_DCSR_SL_T1]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_SL_T1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.insertFromRight<QME_DCSR_SL_T1,
           QME_DCSR_SL_T1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_DCSR_SL_T1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_SL_T1]

//>> SET_[QME_DCSR_SL_T1]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_SL_T1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.insertFromRight<QME_DCSR_SL_T1,
           QME_DCSR_SL_T1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_DCSR_SL_T1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_SL_T1]

//>> GET_[QME_DCSR_SL_T1]
static inline fapi2::buffer<uint64_t>& GET_QME_DCSR_SL_T1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return i_data.extractToRight<QME_DCSR_SL_T1,
           QME_DCSR_SL_T1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_DCSR_SL_T1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DCSR_SL_T1]

//>> SET_[QME_DCSR_SL_T2]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_SL_T2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.insertFromRight<QME_DCSR_SL_T2,
           QME_DCSR_SL_T2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_DCSR_SL_T2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_SL_T2]

//>> SET_[QME_DCSR_SL_T2]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_SL_T2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.insertFromRight<QME_DCSR_SL_T2,
           QME_DCSR_SL_T2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_DCSR_SL_T2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_SL_T2]

//>> GET_[QME_DCSR_SL_T2]
static inline fapi2::buffer<uint64_t>& GET_QME_DCSR_SL_T2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return i_data.extractToRight<QME_DCSR_SL_T2,
           QME_DCSR_SL_T2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_DCSR_SL_T2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DCSR_SL_T2]

//>> SET_[QME_DCSR_SL_T3]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_SL_T3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.insertFromRight<QME_DCSR_SL_T3,
           QME_DCSR_SL_T3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_DCSR_SL_T3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_SL_T3]

//>> SET_[QME_DCSR_SL_T3]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_SL_T3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.insertFromRight<QME_DCSR_SL_T3,
           QME_DCSR_SL_T3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_DCSR_SL_T3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_SL_T3]

//>> GET_[QME_DCSR_SL_T3]
static inline fapi2::buffer<uint64_t>& GET_QME_DCSR_SL_T3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return i_data.extractToRight<QME_DCSR_SL_T3,
           QME_DCSR_SL_T3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_DCSR_SL_T3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DCSR_SL_T3]

//>> SET_[QME_DCSR_SRESET_MSR_S]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_SRESET_MSR_S(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.insertFromRight<QME_DCSR_SRESET_MSR_S,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_DCSR_SRESET_MSR_S chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_SRESET_MSR_S]

//>> SET_[QME_DCSR_SRESET_MSR_S]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_SRESET_MSR_S(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.insertFromRight<QME_DCSR_SRESET_MSR_S,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_DCSR_SRESET_MSR_S chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_SRESET_MSR_S]

//>> SET_[QME_DCSR_SRESET_MSR_S]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_SRESET_MSR_S(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.setBit<QME_DCSR_SRESET_MSR_S>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_DCSR_SRESET_MSR_S chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_SRESET_MSR_S]

//>> CLEAR_[QME_DCSR_SRESET_MSR_S]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_DCSR_SRESET_MSR_S(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.clearBit<QME_DCSR_SRESET_MSR_S>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_DCSR_SRESET_MSR_S chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_DCSR_SRESET_MSR_S]

//>> GET_[QME_DCSR_SRESET_MSR_S]
static inline fapi2::buffer<uint64_t>& GET_QME_DCSR_SRESET_MSR_S(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return i_data.extractToRight<QME_DCSR_SRESET_MSR_S,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_DCSR_SRESET_MSR_S chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DCSR_SRESET_MSR_S]

//>> GET_[QME_DCSR_SRESET_MSR_S]
static inline bool GET_QME_DCSR_SRESET_MSR_S(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return i_data.getBit<QME_DCSR_SRESET_MSR_S>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_DCSR_SRESET_MSR_S chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DCSR_SRESET_MSR_S]

//>> SET_[QME_DCSR_THREAD_INSTR_RUNNING_HISTORY]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_THREAD_INSTR_RUNNING_HISTORY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.insertFromRight<QME_DCSR_THREAD_INSTR_RUNNING_HISTORY,
           QME_DCSR_THREAD_INSTR_RUNNING_HISTORY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_DCSR_THREAD_INSTR_RUNNING_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_THREAD_INSTR_RUNNING_HISTORY]

//>> SET_[QME_DCSR_THREAD_INSTR_RUNNING_HISTORY]
static inline fapi2::buffer<uint64_t>& SET_QME_DCSR_THREAD_INSTR_RUNNING_HISTORY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return o_data.insertFromRight<QME_DCSR_THREAD_INSTR_RUNNING_HISTORY,
           QME_DCSR_THREAD_INSTR_RUNNING_HISTORY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_DCSR_THREAD_INSTR_RUNNING_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_DCSR_THREAD_INSTR_RUNNING_HISTORY]

//>> GET_[QME_DCSR_THREAD_INSTR_RUNNING_HISTORY]
static inline fapi2::buffer<uint64_t>& GET_QME_DCSR_THREAD_INSTR_RUNNING_HISTORY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_DCSR));
#endif
    return i_data.extractToRight<QME_DCSR_THREAD_INSTR_RUNNING_HISTORY,
           QME_DCSR_THREAD_INSTR_RUNNING_HISTORY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_DCSR_THREAD_INSTR_RUNNING_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_DCSR_THREAD_INSTR_RUNNING_HISTORY]

//>> PREP_[QME_PMCRS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_PMCRS(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PMCRS;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_PMCRS]

//>> GET_[QME_PMCRS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_PMCRS(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PMCRS;
#endif
    return fapi2::getScom(i_target, QME_PMCRS, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_PMCRS]

//>> PUT_[QME_PMCRS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_PMCRS(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_PMCRS));
#endif
    return fapi2::putScom(i_target, QME_PMCRS, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_PMCRS]


//>> SET_[QME_PMCRS_DATA]
static inline fapi2::buffer<uint64_t>& SET_QME_PMCRS_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PMCRS));
#endif
    return o_data.insertFromRight<QME_PMCRS_DATA,
           QME_PMCRS_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PMCRS_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PMCRS_DATA]

//>> SET_[QME_PMCRS_DATA]
static inline fapi2::buffer<uint64_t>& SET_QME_PMCRS_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PMCRS));
#endif
    return o_data.insertFromRight<QME_PMCRS_DATA,
           QME_PMCRS_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PMCRS_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PMCRS_DATA]

//>> GET_[QME_PMCRS_DATA]
static inline fapi2::buffer<uint64_t>& GET_QME_PMCRS_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PMCRS));
#endif
    return i_data.extractToRight<QME_PMCRS_DATA,
           QME_PMCRS_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PMCRS_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PMCRS_DATA]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
