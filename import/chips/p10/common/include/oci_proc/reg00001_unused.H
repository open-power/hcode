/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/oci_proc/reg00001_unused.H $  */
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

#ifndef __OCI_PROC_REG00001_H_UNUSED__
#define __OCI_PROC_REG00001_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE]


//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE]


//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
