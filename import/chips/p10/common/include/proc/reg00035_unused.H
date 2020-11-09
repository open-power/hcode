/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/proc/reg00035_unused.H $      */
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

#ifndef __PROC_REG00035_H_UNUSED__
#define __PROC_REG00035_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace proc
{
#endif


//>> PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI]

//>> PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI]

//>> PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE]

//>> PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE]

//>> PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO]

//>> PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO]


//>> SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10]

//>> SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10]

//>> PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI]

//>> PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI]

//>> PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI_BYTE]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI_BYTE]

//>> PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI_BYTE]

//>> PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_RO(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_RO]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_RO(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_RO;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_RO]

//>> PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_RO(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_RO]


//>> SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_MDA_M1B_DATA_AREA_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_MDA_M1B_DATA_AREA_4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_MDA_M1B_DATA_AREA_4,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_MDA_M1B_DATA_AREA_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_MDA_M1B_DATA_AREA_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_MDA_M1B_DATA_AREA_4]

//>> SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_MDA_M1B_DATA_AREA_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_MDA_M1B_DATA_AREA_4(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_MDA_M1B_DATA_AREA_4,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_MDA_M1B_DATA_AREA_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_MDA_M1B_DATA_AREA_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_MDA_M1B_DATA_AREA_4]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_MDA_M1B_DATA_AREA_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_MDA_M1B_DATA_AREA_4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_MDA_M1B_DATA_AREA_4,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_MDA_M1B_DATA_AREA_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_MDA_M1B_DATA_AREA_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M1B_DATA_AREA_4_MDA_M1B_DATA_AREA_4]

//>> PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI]

//>> PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_RW));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI]

//>> PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI_BYTE]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI_BYTE]

//>> PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_RW));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI_BYTE]

//>> PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_RW(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_RW]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_RW(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_RW;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_RW]

//>> PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_RW(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_RW));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_RW]


//>> SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_MDA_M2A_DATA_AREA_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_MDA_M2A_DATA_AREA_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_MDA_M2A_DATA_AREA_2,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_MDA_M2A_DATA_AREA_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_MDA_M2A_DATA_AREA_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_MDA_M2A_DATA_AREA_2]

//>> SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_MDA_M2A_DATA_AREA_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_MDA_M2A_DATA_AREA_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_MDA_M2A_DATA_AREA_2,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_MDA_M2A_DATA_AREA_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_MDA_M2A_DATA_AREA_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_MDA_M2A_DATA_AREA_2]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_MDA_M2A_DATA_AREA_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_MDA_M2A_DATA_AREA_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_RW));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_MDA_M2A_DATA_AREA_2,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_MDA_M2A_DATA_AREA_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_MDA_M2A_DATA_AREA_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2A_DATA_AREA_2_MDA_M2A_DATA_AREA_2]

//>> PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI]

//>> PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI]

//>> PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE]

//>> PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE]

//>> PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO]

//>> PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO]


//>> SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14]

//>> SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14]

//>> PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI]

//>> PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI]

//>> PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI_BYTE]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI_BYTE]

//>> PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI_BYTE]

//>> PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_RO(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_RO]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_RO(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_RO;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_RO]

//>> PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_RO(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_RO]


//>> SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_MDA_M2B_DATA_AREA_8]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_MDA_M2B_DATA_AREA_8(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_MDA_M2B_DATA_AREA_8,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_MDA_M2B_DATA_AREA_8_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_MDA_M2B_DATA_AREA_8 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_MDA_M2B_DATA_AREA_8]

//>> SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_MDA_M2B_DATA_AREA_8]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_MDA_M2B_DATA_AREA_8(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_MDA_M2B_DATA_AREA_8,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_MDA_M2B_DATA_AREA_8_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_MDA_M2B_DATA_AREA_8 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_MDA_M2B_DATA_AREA_8]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_MDA_M2B_DATA_AREA_8]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_MDA_M2B_DATA_AREA_8(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_FSI_BYTE,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_MDA_M2B_DATA_AREA_8,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_MDA_M2B_DATA_AREA_8_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_MDA_M2B_DATA_AREA_8 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_M2B_DATA_AREA_8_MDA_M2B_DATA_AREA_8]

//>> PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI]

//>> PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI]

//>> PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE]

//>> PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE]

//>> PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO]

//>> PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO]


//>> SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_SNS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_SNS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_SNS,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_SNS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_SNS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_SNS]

//>> SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_SNS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_SNS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_SNS,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_SNS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_SNS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_SNS]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_SNS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_SNS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_SNS,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_SNS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_SNS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_SNS]

//>> SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_ERR,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_ERR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_ERR]

//>> SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_ERR,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_ERR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_ERR]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_ERR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_ERR,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_ERR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_ERR]

//>> SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_TIME]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_TIME(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_TIME,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_TIME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_TIME chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_TIME]

//>> SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_TIME]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_TIME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_TIME,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_TIME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_TIME chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_TIME]

//>> GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_TIME]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_TIME(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI,
                           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_FSI_BYTE, TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_TIME,
           TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_TIME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_TIME chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_MAILBOX_FSXCOMP_FSXLOG_RCS_EL3_TIME]

//>> PREP_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI]

//>> PUT_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_RW));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI]

//>> PREP_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI_BYTE]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI_BYTE]

//>> PUT_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_RW));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI_BYTE]

//>> PREP_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_RW(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_RW]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_RW;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_RW]

//>> PUT_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_RW));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_RW]


//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_HDNFIFO_MCT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_HDNFIFO_MCT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_HDNFIFO_MCT,
           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_HDNFIFO_MCT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_HDNFIFO_MCT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_HDNFIFO_MCT]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_HDNFIFO_MCT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_HDNFIFO_MCT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_HDNFIFO_MCT,
           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_HDNFIFO_MCT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_HDNFIFO_MCT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_HDNFIFO_MCT]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_HDNFIFO_MCT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_HDNFIFO_MCT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_RW));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_HDNFIFO_MCT,
           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_HDNFIFO_MCT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_HDNFIFO_MCT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HDOWNFIFO_MTC_HDNFIFO_MCT]

//>> PREP_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT]

//>> PUT_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT]


//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT_HUPFIFO_DATA_OUT_PORT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT_HUPFIFO_DATA_OUT_PORT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT_HUPFIFO_DATA_OUT_PORT,
           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT_HUPFIFO_DATA_OUT_PORT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT_HUPFIFO_DATA_OUT_PORT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT_HUPFIFO_DATA_OUT_PORT]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT_HUPFIFO_DATA_OUT_PORT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT_HUPFIFO_DATA_OUT_PORT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT_HUPFIFO_DATA_OUT_PORT,
           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT_HUPFIFO_DATA_OUT_PORT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT_HUPFIFO_DATA_OUT_PORT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT_HUPFIFO_DATA_OUT_PORT]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT_HUPFIFO_DATA_OUT_PORT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT_HUPFIFO_DATA_OUT_PORT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT_HUPFIFO_DATA_OUT_PORT,
           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT_HUPFIFO_DATA_OUT_PORT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT_HUPFIFO_DATA_OUT_PORT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_DATA_OUT_HUPFIFO_DATA_OUT_PORT]

//>> PREP_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI]

//>> PUT_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI]

//>> PREP_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE]

//>> PUT_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE]

//>> PREP_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO]

//>> PUT_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO]


//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY]

//>> CLEAR_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY]
static inline bool GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DATA_OUT_PARITY]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP]

//>> CLEAR_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP]
static inline bool GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SP]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE]

//>> CLEAR_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE]
static inline bool GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_REQ_RESET_FR_SBE]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG]

//>> CLEAR_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG]
static inline bool GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_DEQUEUED_EOT_FLAG]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL]

//>> CLEAR_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL]
static inline bool GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_FULL]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY]

//>> CLEAR_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY]
static inline bool GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EMPTY]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_ENTRY_COUNT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_ENTRY_COUNT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_ENTRY_COUNT,
           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_ENTRY_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_ENTRY_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_ENTRY_COUNT]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_ENTRY_COUNT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_ENTRY_COUNT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_ENTRY_COUNT,
           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_ENTRY_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_ENTRY_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_ENTRY_COUNT]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_ENTRY_COUNT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_ENTRY_COUNT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_ENTRY_COUNT,
           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_ENTRY_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_ENTRY_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_ENTRY_COUNT]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_VALID_FLAGS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_VALID_FLAGS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_VALID_FLAGS,
           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_VALID_FLAGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_VALID_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_VALID_FLAGS]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_VALID_FLAGS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_VALID_FLAGS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_VALID_FLAGS,
           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_VALID_FLAGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_VALID_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_VALID_FLAGS]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_VALID_FLAGS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_VALID_FLAGS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_VALID_FLAGS,
           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_VALID_FLAGS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_VALID_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_VALID_FLAGS]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EOT_FLAGS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EOT_FLAGS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EOT_FLAGS,
           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EOT_FLAGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EOT_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EOT_FLAGS]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EOT_FLAGS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EOT_FLAGS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EOT_FLAGS,
           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EOT_FLAGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EOT_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EOT_FLAGS]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EOT_FLAGS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EOT_FLAGS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FSI_BYTE, TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EOT_FLAGS,
           TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EOT_FLAGS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EOT_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_FSB_HUPFIFO_STATUS_FIFO_EOT_FLAGS]

//>> PREP_[TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI]

//>> PUT_[TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI_BYTE));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI]

//>> PREP_[TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI_BYTE]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI_BYTE]

//>> PUT_[TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI_BYTE));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI_BYTE]


//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_SBE2FSI_INTR_STATUS_VEC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_SBE2FSI_INTR_STATUS_VEC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI_BYTE));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_SBE2FSI_INTR_STATUS_VEC,
           TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_SBE2FSI_INTR_STATUS_VEC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_SBE2FSI_INTR_STATUS_VEC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_SBE2FSI_INTR_STATUS_VEC]

//>> SET_[TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_SBE2FSI_INTR_STATUS_VEC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_SBE2FSI_INTR_STATUS_VEC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI_BYTE));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_SBE2FSI_INTR_STATUS_VEC,
           TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_SBE2FSI_INTR_STATUS_VEC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_SBE2FSI_INTR_STATUS_VEC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_SBE2FSI_INTR_STATUS_VEC]

//>> GET_[TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_SBE2FSI_INTR_STATUS_VEC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_SBE2FSI_INTR_STATUS_VEC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI,
                           TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_FSI_BYTE));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_SBE2FSI_INTR_STATUS_VEC,
           TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_SBE2FSI_INTR_STATUS_VEC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_SBE2FSI_INTR_STATUS_VEC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SBE_FIFO_SBE2FSI_INTR_CLEAR_SBE2FSI_INTR_STATUS_VEC]

//>> PREP_[TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI]

//>> GET_[TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI]

//>> PUT_[TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI, TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI_BYTE));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI]

//>> PREP_[TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI_BYTE]

//>> GET_[TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI_BYTE]

//>> PUT_[TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI, TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI_BYTE));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI_BYTE]


//>> SET_[TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_READ_BUFFER_REG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_READ_BUFFER_REG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI, TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI_BYTE));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_READ_BUFFER_REG,
           TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_READ_BUFFER_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_READ_BUFFER_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_READ_BUFFER_REG]

//>> SET_[TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_READ_BUFFER_REG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_READ_BUFFER_REG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI, TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI_BYTE));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_READ_BUFFER_REG,
           TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_READ_BUFFER_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_READ_BUFFER_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_READ_BUFFER_REG]

//>> GET_[TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_READ_BUFFER_REG]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_READ_BUFFER_REG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI, TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_FSI_BYTE));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_READ_BUFFER_REG,
           TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_READ_BUFFER_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_READ_BUFFER_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SHIFT_READ_BUFFER_READ_BUFFER_REG]

//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_FSI0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_FSI0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_FSI0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_FSI0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_FSI0;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_FSI0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_FSI0]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_FSI0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_SCOMFSI0));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_FSI0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_FSI0]

//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_SCOMFSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_SCOMFSI0(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_SCOMFSI0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_SCOMFSI0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_SCOMFSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_SCOMFSI0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_SCOMFSI0;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_SCOMFSI0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_SCOMFSI0]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_SCOMFSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_SCOMFSI0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_SCOMFSI0));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_SCOMFSI0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MAESP2_SCOMFSI0]


//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_FSI0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_FSI0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_FSI0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_FSI0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_FSI0;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_FSI0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_FSI0]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_FSI0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_SCOMFSI0));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_FSI0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_FSI0]

//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_SCOMFSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_SCOMFSI0(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_SCOMFSI0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_SCOMFSI0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_SCOMFSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_SCOMFSI0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_SCOMFSI0;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_SCOMFSI0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_SCOMFSI0]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_SCOMFSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_SCOMFSI0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_SCOMFSI0));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_SCOMFSI0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MECTRL_SCOMFSI0]


//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0]

//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO]


//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_0]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_1]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_2]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_3]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_4]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_5]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_6]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MLEVP1_7]

//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0]

//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO]


//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE,
           TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE,
           TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE,
           TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_1,
           TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_1]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_1,
           TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_1]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_1,
           TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_1]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_2,
           TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_2]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_2,
           TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_2]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_2,
           TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI_A_MST_0_PORT3_ERROR_CODE_2]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FOURTH_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FOURTH_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FOURTH_ERROR,
           TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FOURTH_ERROR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FOURTH_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FOURTH_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FOURTH_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FOURTH_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FOURTH_ERROR,
           TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FOURTH_ERROR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FOURTH_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FOURTH_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FOURTH_ERROR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FOURTH_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FOURTH_ERROR,
           TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FOURTH_ERROR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FOURTH_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FOURTH_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_CRC_ERROR_COUNT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_CRC_ERROR_COUNT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_CRC_ERROR_COUNT,
           TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_CRC_ERROR_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_CRC_ERROR_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_CRC_ERROR_COUNT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_CRC_ERROR_COUNT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_CRC_ERROR_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_CRC_ERROR_COUNT,
           TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_CRC_ERROR_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_CRC_ERROR_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_CRC_ERROR_COUNT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_CRC_ERROR_COUNT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_CRC_ERROR_COUNT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_CRC_ERROR_COUNT,
           TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_CRC_ERROR_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_CRC_ERROR_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_CRC_ERROR_COUNT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSTAP3_HOT_PLUG_FLAG]

//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0]

//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO]


//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAEB_BRIDGE_ERROR]

//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0]

//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW]


//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_IPOLL_AND_DMA]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_HW_ERROR_RECOVERY]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_RELATIVE_ADDRESS_CMDS]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_ENABLE_PARITY_CHECK]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_0,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_0]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_0(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_0,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_0,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_0]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_1,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_1]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_1,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_1]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_1,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_RATE_SELECTION_1]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_CLOCK_DIV_4]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_TIMEOUT_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_TIMEOUT_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_TIMEOUT_SEL,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_TIMEOUT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_TIMEOUT_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_TIMEOUT_SEL]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_TIMEOUT_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_TIMEOUT_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_TIMEOUT_SEL,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_TIMEOUT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_TIMEOUT_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_TIMEOUT_SEL]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_TIMEOUT_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_TIMEOUT_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_TIMEOUT_SEL,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_TIMEOUT_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_TIMEOUT_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_TIMEOUT_SEL]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RECEIVER_MODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RECEIVER_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RECEIVER_MODE,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RECEIVER_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RECEIVER_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RECEIVER_MODE]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RECEIVER_MODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RECEIVER_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RECEIVER_MODE,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RECEIVER_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RECEIVER_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RECEIVER_MODE]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RECEIVER_MODE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RECEIVER_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RW));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RECEIVER_MODE,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RECEIVER_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RECEIVER_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MMODE_RECEIVER_MODE]

//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0]

//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO]


//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_GENERAL_RESET]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PORT_ERROR_RESET]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_BRIDGE_GENERAL_RESET]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_ALL_PORT_GENERAL_RESET]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_CONTROL_REGISTER_RESET]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_WO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MRESP0_PARITY_ERROR_RESET]

//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_FSI0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_FSI0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_FSI0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_FSI0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_FSI0;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_FSI0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_FSI0]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_FSI0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_SCOMFSI0));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_FSI0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_FSI0]

//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_SCOMFSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_SCOMFSI0(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_SCOMFSI0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_SCOMFSI0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_SCOMFSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_SCOMFSI0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_SCOMFSI0;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_SCOMFSI0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_SCOMFSI0]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_SCOMFSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_SCOMFSI0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_SCOMFSI0));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_SCOMFSI0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSIEP3_SCOMFSI0]


//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_SCI2CM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_SCI2CM(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_SCI2CM;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_SCI2CM]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_SCI2CM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_SCI2CM(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_SCI2CM;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_SCI2CM, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_SCI2CM]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_SCI2CM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_SCI2CM(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_SCI2CM));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_SCI2CM, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_SCI2CM]


//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_SCRSIM4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_SCRSIM4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_SCRSIM4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_SCRSIM4]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_SCRSIM4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_SCRSIM4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_SCRSIM4;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_SCRSIM4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_SCRSIM4]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_SCRSIM4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_SCRSIM4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_SCRSIM4));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_SCRSIM4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_SCRSIM4]


//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_SOML]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_SOML(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_SOML;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_SOML]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_SOML]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_SOML(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_SOML;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_SOML, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_SOML]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_SOML]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_SOML(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_SOML));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_SOML, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_SOML]


//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_SRSIC4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_SRSIC4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_SRSIC4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_SRSIC4]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_SRSIC4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_SRSIC4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_SRSIC4;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_SRSIC4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_SRSIC4]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_SRSIC4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_SRSIC4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_SRSIC4));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_SRSIC4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_SRSIC4]


//>> PREP_[TP_TPVSB_FSI_W_SLAVE_B_SI1M]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_B_SI1M(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_B_SI1M;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_B_SI1M]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_B_SI1M]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_B_SI1M(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_B_SI1M;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_B_SI1M, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_B_SI1M]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_B_SI1M]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_B_SI1M(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_B_SI1M));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_B_SI1M, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_B_SI1M]


//>> PREP_[TP_TPVSB_FSI_W_SLAVE_B_SI2S]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_B_SI2S(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_B_SI2S;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_B_SI2S]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_B_SI2S]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_B_SI2S(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_B_SI2S;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_B_SI2S, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_B_SI2S]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_B_SI2S]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_B_SI2S(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_B_SI2S));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_B_SI2S, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_B_SI2S]


//>> PREP_[TP_TPVSB_FSI_W_SLAVE_B_SLASTD_SRES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_B_SLASTD_SRES(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_B_SLASTD_SRES;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_B_SLASTD_SRES]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_B_SLASTD_SRES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_B_SLASTD_SRES(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_B_SLASTD_SRES;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_B_SLASTD_SRES, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_B_SLASTD_SRES]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_B_SLASTD_SRES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_B_SLASTD_SRES(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_B_SLASTD_SRES));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_B_SLASTD_SRES, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_B_SLASTD_SRES]


//>> PREP_[TP_TPVSB_FSI_W_SLAVE_B_SSMBR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_B_SSMBR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_B_SSMBR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_B_SSMBR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_B_SSMBR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_B_SSMBR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_B_SSMBR;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_B_SSMBR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_B_SSMBR]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_B_SSMBR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_B_SSMBR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_B_SSMBR));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_B_SSMBR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_B_SSMBR]


//>> PREP_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_1_LSTAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_1_LSTAT(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_1_LSTAT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_1_LSTAT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_1_LSTAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_1_LSTAT(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_1_LSTAT;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_1_LSTAT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_1_LSTAT]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_1_LSTAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_1_LSTAT(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_1_LSTAT));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_1_LSTAT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_1_LSTAT]


//>> PREP_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING]

//>> PUT_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING]


//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_BASE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_BASE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_BASE,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_BASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_BASE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_BASE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_BASE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_BASE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_BASE,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_BASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_BASE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_BASE]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_BASE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_BASE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_BASE,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_BASE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_BASE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_BASE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_MASK,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_MASK]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_MASK,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_MASK]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_MASK]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_MASK,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_MEMORY_MAPPING_MASK]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_COMPARE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_COMPARE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_COMPARE,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_COMPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_COMPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_COMPARE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_COMPARE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_COMPARE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_COMPARE,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_COMPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_COMPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_COMPARE]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_COMPARE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_COMPARE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_COMPARE,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_COMPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_COMPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_COMPARE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_MASK,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_MASK]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_MASK,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_MASK]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_MASK]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_MASK,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST1_MEMORY_MAPPING_PATTERN_MATCH_MASK]

//>> PREP_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG]

//>> PUT_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG]


//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_CLOCK_DIVIDER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_CLOCK_DIVIDER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_CLOCK_DIVIDER,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_CLOCK_DIVIDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_CLOCK_DIVIDER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_CLOCK_DIVIDER]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_CLOCK_DIVIDER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_CLOCK_DIVIDER(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_CLOCK_DIVIDER,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_CLOCK_DIVIDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_CLOCK_DIVIDER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_CLOCK_DIVIDER]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_CLOCK_DIVIDER]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_CLOCK_DIVIDER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_CLOCK_DIVIDER,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_CLOCK_DIVIDER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_CLOCK_DIVIDER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_CLOCK_DIVIDER]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RECEIVE_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RECEIVE_DELAY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RECEIVE_DELAY,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RECEIVE_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RECEIVE_DELAY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RECEIVE_DELAY]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RECEIVE_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RECEIVE_DELAY(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RECEIVE_DELAY,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RECEIVE_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RECEIVE_DELAY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RECEIVE_DELAY]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RECEIVE_DELAY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RECEIVE_DELAY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RECEIVE_DELAY,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RECEIVE_DELAY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RECEIVE_DELAY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RECEIVE_DELAY]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_RESERVED]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]

//>> SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]
static inline fapi2::buffer<uint64_t>&
SET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.setBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]

//>> CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.clearBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]
static inline fapi2::buffer<uint64_t>&
GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]

//>> GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]
static inline bool GET_P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return i_data.getBit<P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_TRACE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_TRACE_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_TRACE_SELECT,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_TRACE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_TRACE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_TRACE_SELECT]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_TRACE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_TRACE_SELECT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_TRACE_SELECT,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_TRACE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_TRACE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_TRACE_SELECT]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_TRACE_SELECT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_TRACE_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_TRACE_SELECT,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_TRACE_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_TRACE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_TRACE_SELECT]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RESET_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RESET_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RESET_CONTROL,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RESET_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RESET_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RESET_CONTROL]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RESET_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RESET_CONTROL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RESET_CONTROL,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RESET_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RESET_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RESET_CONTROL]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RESET_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RESET_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RESET_CONTROL,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RESET_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RESET_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_RESET_CONTROL]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_CONTROL,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_CONTROL]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_CONTROL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_CONTROL,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_CONTROL]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_CONTROL,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_ECC_CONTROL]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_SLAVE_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_SLAVE_RESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_SLAVE_RESET,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_SLAVE_RESET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_SLAVE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_SLAVE_RESET]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_SLAVE_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_SLAVE_RESET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_SLAVE_RESET,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_SLAVE_RESET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_SLAVE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_SLAVE_RESET]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_SLAVE_RESET]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_SLAVE_RESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_SLAVE_RESET,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_SLAVE_RESET_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_SLAVE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_SPI_SLAVE_RESET]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_LOOPBACK_ENABLE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED]

//>> PREP_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1]

//>> PUT_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1]


//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_SPI_RESOURCE_LOCK]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_PIB_MASTER_ID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_PIB_MASTER_ID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_PIB_MASTER_ID,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_PIB_MASTER_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_PIB_MASTER_ID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_PIB_MASTER_ID]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_PIB_MASTER_ID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_PIB_MASTER_ID(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_PIB_MASTER_ID,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_PIB_MASTER_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_PIB_MASTER_ID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_PIB_MASTER_ID]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_PIB_MASTER_ID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_PIB_MASTER_ID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_PIB_MASTER_ID,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_PIB_MASTER_ID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_PIB_MASTER_ID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST3_CONFIG1_PIB_MASTER_ID]

//>> PREP_[VAS_VA_RG_SCF_CAMDATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_VAS_VA_RG_SCF_CAMDATA1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = VAS_VA_RG_SCF_CAMDATA1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[VAS_VA_RG_SCF_CAMDATA1]

//>> GET_[VAS_VA_RG_SCF_CAMDATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_VAS_VA_RG_SCF_CAMDATA1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = VAS_VA_RG_SCF_CAMDATA1;
#endif
    return fapi2::getScom(i_target, VAS_VA_RG_SCF_CAMDATA1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[VAS_VA_RG_SCF_CAMDATA1]

//>> PUT_[VAS_VA_RG_SCF_CAMDATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_VAS_VA_RG_SCF_CAMDATA1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(VAS_VA_RG_SCF_CAMDATA1));
#endif
    return fapi2::putScom(i_target, VAS_VA_RG_SCF_CAMDATA1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[VAS_VA_RG_SCF_CAMDATA1]


//>> SET_[VAS_VA_RG_SCF_CAMDATA1_CAM_DISPLAY_REG_1]
static inline fapi2::buffer<uint64_t>& SET_VAS_VA_RG_SCF_CAMDATA1_CAM_DISPLAY_REG_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(VAS_VA_RG_SCF_CAMDATA1));
#endif
    return o_data.insertFromRight<VAS_VA_RG_SCF_CAMDATA1_CAM_DISPLAY_REG_1,
           VAS_VA_RG_SCF_CAMDATA1_CAM_DISPLAY_REG_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access VAS_VA_RG_SCF_CAMDATA1_CAM_DISPLAY_REG_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[VAS_VA_RG_SCF_CAMDATA1_CAM_DISPLAY_REG_1]

//>> SET_[VAS_VA_RG_SCF_CAMDATA1_CAM_DISPLAY_REG_1]
static inline fapi2::buffer<uint64_t>& SET_VAS_VA_RG_SCF_CAMDATA1_CAM_DISPLAY_REG_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(VAS_VA_RG_SCF_CAMDATA1));
#endif
    return o_data.insertFromRight<VAS_VA_RG_SCF_CAMDATA1_CAM_DISPLAY_REG_1,
           VAS_VA_RG_SCF_CAMDATA1_CAM_DISPLAY_REG_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access VAS_VA_RG_SCF_CAMDATA1_CAM_DISPLAY_REG_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[VAS_VA_RG_SCF_CAMDATA1_CAM_DISPLAY_REG_1]

//>> GET_[VAS_VA_RG_SCF_CAMDATA1_CAM_DISPLAY_REG_1]
static inline fapi2::buffer<uint64_t>& GET_VAS_VA_RG_SCF_CAMDATA1_CAM_DISPLAY_REG_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(VAS_VA_RG_SCF_CAMDATA1));
#endif
    return i_data.extractToRight<VAS_VA_RG_SCF_CAMDATA1_CAM_DISPLAY_REG_1,
           VAS_VA_RG_SCF_CAMDATA1_CAM_DISPLAY_REG_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access VAS_VA_RG_SCF_CAMDATA1_CAM_DISPLAY_REG_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[VAS_VA_RG_SCF_CAMDATA1_CAM_DISPLAY_REG_1]

//>> PREP_[VAS_VA_RG_SCF_DBGCONT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_VAS_VA_RG_SCF_DBGCONT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = VAS_VA_RG_SCF_DBGCONT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[VAS_VA_RG_SCF_DBGCONT]

//>> GET_[VAS_VA_RG_SCF_DBGCONT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_VAS_VA_RG_SCF_DBGCONT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = VAS_VA_RG_SCF_DBGCONT;
#endif
    return fapi2::getScom(i_target, VAS_VA_RG_SCF_DBGCONT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[VAS_VA_RG_SCF_DBGCONT]

//>> PUT_[VAS_VA_RG_SCF_DBGCONT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_VAS_VA_RG_SCF_DBGCONT(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(VAS_VA_RG_SCF_DBGCONT));
#endif
    return fapi2::putScom(i_target, VAS_VA_RG_SCF_DBGCONT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[VAS_VA_RG_SCF_DBGCONT]


//>> SET_[VAS_VA_RG_SCF_DBGCONT_TRACE_BUS_BITS_0_63]
static inline fapi2::buffer<uint64_t>& SET_VAS_VA_RG_SCF_DBGCONT_TRACE_BUS_BITS_0_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(VAS_VA_RG_SCF_DBGCONT));
#endif
    return o_data.insertFromRight<VAS_VA_RG_SCF_DBGCONT_TRACE_BUS_BITS_0_63,
           VAS_VA_RG_SCF_DBGCONT_TRACE_BUS_BITS_0_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access VAS_VA_RG_SCF_DBGCONT_TRACE_BUS_BITS_0_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[VAS_VA_RG_SCF_DBGCONT_TRACE_BUS_BITS_0_63]

//>> SET_[VAS_VA_RG_SCF_DBGCONT_TRACE_BUS_BITS_0_63]
static inline fapi2::buffer<uint64_t>& SET_VAS_VA_RG_SCF_DBGCONT_TRACE_BUS_BITS_0_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(VAS_VA_RG_SCF_DBGCONT));
#endif
    return o_data.insertFromRight<VAS_VA_RG_SCF_DBGCONT_TRACE_BUS_BITS_0_63,
           VAS_VA_RG_SCF_DBGCONT_TRACE_BUS_BITS_0_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access VAS_VA_RG_SCF_DBGCONT_TRACE_BUS_BITS_0_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[VAS_VA_RG_SCF_DBGCONT_TRACE_BUS_BITS_0_63]

//>> GET_[VAS_VA_RG_SCF_DBGCONT_TRACE_BUS_BITS_0_63]
static inline fapi2::buffer<uint64_t>& GET_VAS_VA_RG_SCF_DBGCONT_TRACE_BUS_BITS_0_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(VAS_VA_RG_SCF_DBGCONT));
#endif
    return i_data.extractToRight<VAS_VA_RG_SCF_DBGCONT_TRACE_BUS_BITS_0_63,
           VAS_VA_RG_SCF_DBGCONT_TRACE_BUS_BITS_0_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access VAS_VA_RG_SCF_DBGCONT_TRACE_BUS_BITS_0_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[VAS_VA_RG_SCF_DBGCONT_TRACE_BUS_BITS_0_63]

//>> PREP_[VAS_VA_RG_SCF_MMIODATA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_VAS_VA_RG_SCF_MMIODATA(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = VAS_VA_RG_SCF_MMIODATA;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[VAS_VA_RG_SCF_MMIODATA]

//>> GET_[VAS_VA_RG_SCF_MMIODATA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_VAS_VA_RG_SCF_MMIODATA(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = VAS_VA_RG_SCF_MMIODATA;
#endif
    return fapi2::getScom(i_target, VAS_VA_RG_SCF_MMIODATA, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[VAS_VA_RG_SCF_MMIODATA]

//>> PUT_[VAS_VA_RG_SCF_MMIODATA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_VAS_VA_RG_SCF_MMIODATA(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(VAS_VA_RG_SCF_MMIODATA));
#endif
    return fapi2::putScom(i_target, VAS_VA_RG_SCF_MMIODATA, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[VAS_VA_RG_SCF_MMIODATA]


//>> SET_[VAS_VA_RG_SCF_MMIODATA_MMIO_DATA]
static inline fapi2::buffer<uint64_t>& SET_VAS_VA_RG_SCF_MMIODATA_MMIO_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(VAS_VA_RG_SCF_MMIODATA));
#endif
    return o_data.insertFromRight<VAS_VA_RG_SCF_MMIODATA_MMIO_DATA,
           VAS_VA_RG_SCF_MMIODATA_MMIO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access VAS_VA_RG_SCF_MMIODATA_MMIO_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[VAS_VA_RG_SCF_MMIODATA_MMIO_DATA]

//>> SET_[VAS_VA_RG_SCF_MMIODATA_MMIO_DATA]
static inline fapi2::buffer<uint64_t>& SET_VAS_VA_RG_SCF_MMIODATA_MMIO_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(VAS_VA_RG_SCF_MMIODATA));
#endif
    return o_data.insertFromRight<VAS_VA_RG_SCF_MMIODATA_MMIO_DATA,
           VAS_VA_RG_SCF_MMIODATA_MMIO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access VAS_VA_RG_SCF_MMIODATA_MMIO_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[VAS_VA_RG_SCF_MMIODATA_MMIO_DATA]

//>> GET_[VAS_VA_RG_SCF_MMIODATA_MMIO_DATA]
static inline fapi2::buffer<uint64_t>& GET_VAS_VA_RG_SCF_MMIODATA_MMIO_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(VAS_VA_RG_SCF_MMIODATA));
#endif
    return i_data.extractToRight<VAS_VA_RG_SCF_MMIODATA_MMIO_DATA,
           VAS_VA_RG_SCF_MMIODATA_MMIO_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access VAS_VA_RG_SCF_MMIODATA_MMIO_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[VAS_VA_RG_SCF_MMIODATA_MMIO_DATA]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
