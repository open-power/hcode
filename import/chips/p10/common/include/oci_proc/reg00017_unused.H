/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/oci_proc/reg00017_unused.H $  */
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

#ifndef __OCI_PROC_REG00017_H_UNUSED__
#define __OCI_PROC_REG00017_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C13(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C13;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C13(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C13;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C13, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C13(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C13));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C13, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C13));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C13));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C24(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C24;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C24(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C24;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C24, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C24(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C24));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C24, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C24));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C24));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C24));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C24));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C24));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C24));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C15;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C15;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C15, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C15, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C22;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C22;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C22, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C22, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C4;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C4));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C4));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C4));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_SRAM_CTL_SRMR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_SRAM_CTL_SRMR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_SRAM_CTL_SRMR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_SRAM_CTL_SRMR]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_SRAM_CTL_SRMR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_SRAM_CTL_SRMR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR]

//>> PUT_[TP_TPCHIP_OCC_SRAM_CTL_SRMR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_SRAM_CTL_SRMR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_SRAM_CTL_SRMR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_SRAM_CTL_SRMR]


//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]

//>> CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]
static inline bool GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]

//>> CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]
static inline bool GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]

//>> CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]
static inline bool GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK,
           TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK,
           TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK,
           TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]

//>> CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]
static inline bool GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]

//>> CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]
static inline bool GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]

//>> CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]
static inline bool GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE,
           TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE,
           TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE,
           TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE]


//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_11]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_11(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_11,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_11_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_11]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_11]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_11(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_11,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_11_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_11]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_11]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_11(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_11,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_11_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_11]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_RSP_INFO]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBL_DATAOP_PENDING]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_BAR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR1_SIZE]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_SRR0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGINF_LR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5PRA_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C10RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C13(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C13;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C13(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C13;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C13, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C13(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C13));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C13, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C13));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C13));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C13_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C24(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C24;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C24(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C24;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C24, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C24(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C24));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C24, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C24));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C24));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C24));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C24));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C24));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C24));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C24_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C15;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C15;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C15, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C15, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C22;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C22;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C22, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C22, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C25RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C4;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C4));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C4));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C4));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C4_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_SRAM_CTL_SRMR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_SRAM_CTL_SRMR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_SRAM_CTL_SRMR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_SRAM_CTL_SRMR]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_SRAM_CTL_SRMR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_SRAM_CTL_SRMR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR]

//>> PUT_[TP_TPCHIP_OCC_SRAM_CTL_SRMR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_SRAM_CTL_SRMR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_SRAM_CTL_SRMR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_SRAM_CTL_SRMR]


//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]

//>> CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]
static inline bool GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ENABLE_REMAP]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]

//>> CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]
static inline bool GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ARB_EN_SEND_ALL_WRITES]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]

//>> CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]
static inline bool GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_DISABLE_LFSR]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK,
           TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK,
           TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK,
           TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_LFSR_FAIRNESS_MASK]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]

//>> CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]
static inline bool GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_ERROR_INJECT_ENABLE]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]

//>> CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]
static inline bool GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_EN]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]

//>> CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]
static inline bool GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_RAM_CTL_TRACE_SEL]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE,
           TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE,
           TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SRMR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE,
           TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SRMR_PARE]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
