/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/proc/reg00013_unused.H $      */
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

#ifndef __PROC_REG00013_H_UNUSED__
#define __PROC_REG00013_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace proc
{
#endif


//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C16]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C16(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C16;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C16]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C16]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C16(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C16;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C16, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C16]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C16]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C16(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C16));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C16, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C16]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C16));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C16));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C16));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C16));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C16));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C16));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C21]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C21(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C21;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C21]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C21]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C21(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C21;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C21, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C21]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C21]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C21(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C21));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C21, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C21]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C21));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C21));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C21));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C21));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C21));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C21));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C1]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C1]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C10(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C10;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C10(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C10;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C10, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C10(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C10));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C10, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C10));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C10));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C10));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C10));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C10));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C10));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C27(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C27;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C27(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C27;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C27, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C27(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C27));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C27, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C27));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C27));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C27));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C27));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C27));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C27));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OUISR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OUISR1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OUISR1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OUISR1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OUISR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OUISR1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OUISR1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OUISR1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OUISR1]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OUISR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OUISR1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OUISR1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OUISR1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OUISR1]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OUISR1_INTERRUPT_UNCON_STATUS_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OUISR1_INTERRUPT_UNCON_STATUS_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OUISR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OUISR1_INTERRUPT_UNCON_STATUS_1,
           TP_TPCHIP_OCC_OCI_OCB_OUISR1_INTERRUPT_UNCON_STATUS_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OUISR1_INTERRUPT_UNCON_STATUS_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OUISR1_INTERRUPT_UNCON_STATUS_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OUISR1_INTERRUPT_UNCON_STATUS_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OUISR1_INTERRUPT_UNCON_STATUS_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OUISR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OUISR1_INTERRUPT_UNCON_STATUS_1,
           TP_TPCHIP_OCC_OCI_OCB_OUISR1_INTERRUPT_UNCON_STATUS_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OUISR1_INTERRUPT_UNCON_STATUS_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OUISR1_INTERRUPT_UNCON_STATUS_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OUISR1_INTERRUPT_UNCON_STATUS_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OUISR1_INTERRUPT_UNCON_STATUS_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OUISR1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OUISR1_INTERRUPT_UNCON_STATUS_1,
           TP_TPCHIP_OCC_OCI_OCB_OUISR1_INTERRUPT_UNCON_STATUS_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OUISR1_INTERRUPT_UNCON_STATUS_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OUISR1_INTERRUPT_UNCON_STATUS_1]

//>> PREP_[TP_TPCHIP_OCC_SRAM_CTL_SREAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_SRAM_CTL_SREAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_SRAM_CTL_SREAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_SRAM_CTL_SREAR]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SREAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_SRAM_CTL_SREAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_SRAM_CTL_SREAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_SRAM_CTL_SREAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SREAR]

//>> PUT_[TP_TPCHIP_OCC_SRAM_CTL_SREAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_SRAM_CTL_SREAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SREAR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_SRAM_CTL_SREAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_SRAM_CTL_SREAR]


//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SREAR_SRAM_SREAR_ERROR_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SREAR_SRAM_SREAR_ERROR_ADDRESS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SREAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SREAR_SRAM_SREAR_ERROR_ADDRESS,
           TP_TPCHIP_OCC_SRAM_CTL_SREAR_SRAM_SREAR_ERROR_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SREAR_SRAM_SREAR_ERROR_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SREAR_SRAM_SREAR_ERROR_ADDRESS]

//>> SET_[TP_TPCHIP_OCC_SRAM_CTL_SREAR_SRAM_SREAR_ERROR_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_SRAM_CTL_SREAR_SRAM_SREAR_ERROR_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SREAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_SRAM_CTL_SREAR_SRAM_SREAR_ERROR_ADDRESS,
           TP_TPCHIP_OCC_SRAM_CTL_SREAR_SRAM_SREAR_ERROR_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SREAR_SRAM_SREAR_ERROR_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_SRAM_CTL_SREAR_SRAM_SREAR_ERROR_ADDRESS]

//>> GET_[TP_TPCHIP_OCC_SRAM_CTL_SREAR_SRAM_SREAR_ERROR_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_SRAM_CTL_SREAR_SRAM_SREAR_ERROR_ADDRESS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_SRAM_CTL_SREAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_SRAM_CTL_SREAR_SRAM_SREAR_ERROR_ADDRESS,
           TP_TPCHIP_OCC_SRAM_CTL_SREAR_SRAM_SREAR_ERROR_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_SRAM_CTL_SREAR_SRAM_SREAR_ERROR_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_SRAM_CTL_SREAR_SRAM_SREAR_ERROR_ADDRESS]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107_REGISTER107]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107_REGISTER107(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107_REGISTER107,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107_REGISTER107_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107_REGISTER107 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107_REGISTER107]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107_REGISTER107]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107_REGISTER107(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107_REGISTER107,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107_REGISTER107_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107_REGISTER107 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107_REGISTER107]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107_REGISTER107]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107_REGISTER107(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107_REGISTER107,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107_REGISTER107_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107_REGISTER107 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG107_REGISTER107]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118_REGISTER118]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118_REGISTER118(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118_REGISTER118,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118_REGISTER118_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118_REGISTER118 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118_REGISTER118]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118_REGISTER118]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118_REGISTER118(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118_REGISTER118,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118_REGISTER118_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118_REGISTER118 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118_REGISTER118]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118_REGISTER118]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118_REGISTER118(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118_REGISTER118,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118_REGISTER118_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118_REGISTER118 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG118_REGISTER118]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18_REGISTER18]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18_REGISTER18(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18_REGISTER18,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18_REGISTER18_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18_REGISTER18 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18_REGISTER18]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18_REGISTER18]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18_REGISTER18(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18_REGISTER18,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18_REGISTER18_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18_REGISTER18 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18_REGISTER18]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18_REGISTER18]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18_REGISTER18(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18_REGISTER18,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18_REGISTER18_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18_REGISTER18 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG18_REGISTER18]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30_REGISTER30]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30_REGISTER30(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30_REGISTER30,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30_REGISTER30_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30_REGISTER30 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30_REGISTER30]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30_REGISTER30]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30_REGISTER30(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30_REGISTER30,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30_REGISTER30_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30_REGISTER30 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30_REGISTER30]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30_REGISTER30]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30_REGISTER30(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30_REGISTER30,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30_REGISTER30_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30_REGISTER30 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG30_REGISTER30]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51_REGISTER51]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51_REGISTER51(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51_REGISTER51,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51_REGISTER51_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51_REGISTER51 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51_REGISTER51]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51_REGISTER51]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51_REGISTER51(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51_REGISTER51,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51_REGISTER51_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51_REGISTER51 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51_REGISTER51]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51_REGISTER51]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51_REGISTER51(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51_REGISTER51,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51_REGISTER51_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51_REGISTER51 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG51_REGISTER51]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66_REGISTER66]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66_REGISTER66(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66_REGISTER66,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66_REGISTER66_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66_REGISTER66 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66_REGISTER66]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66_REGISTER66]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66_REGISTER66(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66_REGISTER66,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66_REGISTER66_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66_REGISTER66 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66_REGISTER66]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66_REGISTER66]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66_REGISTER66(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66_REGISTER66,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66_REGISTER66_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66_REGISTER66 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG66_REGISTER66]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79_REGISTER79]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79_REGISTER79(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79_REGISTER79,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79_REGISTER79_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79_REGISTER79 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79_REGISTER79]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79_REGISTER79]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79_REGISTER79(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79_REGISTER79,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79_REGISTER79_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79_REGISTER79 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79_REGISTER79]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79_REGISTER79]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79_REGISTER79(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79_REGISTER79,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79_REGISTER79_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79_REGISTER79 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG79_REGISTER79]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93_REGISTER93]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93_REGISTER93(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93_REGISTER93,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93_REGISTER93_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93_REGISTER93 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93_REGISTER93]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93_REGISTER93]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93_REGISTER93(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93_REGISTER93,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93_REGISTER93_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93_REGISTER93 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93_REGISTER93]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93_REGISTER93]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93_REGISTER93(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93_REGISTER93,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93_REGISTER93_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93_REGISTER93 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG93_REGISTER93]

//>> PREP_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG]

//>> GET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG]

//>> PUT_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG]


//>> SET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR]

//>> SET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR]

//>> SET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR]

//>> CLEAR_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR]

//>> GET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR]

//>> GET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR]
static inline bool GET_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_CORRECTED_ERROR]

//>> SET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR]

//>> SET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR]

//>> SET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR]

//>> CLEAR_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR]

//>> GET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR]

//>> GET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR]
static inline bool GET_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_UNCORRECTED_ERROR]

//>> SET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_ARRAY_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_ARRAY_ADDRESS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_ARRAY_ADDRESS,
           TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_ARRAY_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_ARRAY_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_ARRAY_ADDRESS]

//>> SET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_ARRAY_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_ARRAY_ADDRESS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_ARRAY_ADDRESS,
           TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_ARRAY_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_ARRAY_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_ARRAY_ADDRESS]

//>> GET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_ARRAY_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_ARRAY_ADDRESS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_ARRAY_ADDRESS,
           TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_ARRAY_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_ARRAY_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_ARRAY_ADDRESS]

//>> SET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_BIT_LOCATION]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_BIT_LOCATION(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_BIT_LOCATION,
           TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_BIT_LOCATION_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_BIT_LOCATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_BIT_LOCATION]

//>> SET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_BIT_LOCATION]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_BIT_LOCATION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_BIT_LOCATION,
           TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_BIT_LOCATION_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_BIT_LOCATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_BIT_LOCATION]

//>> GET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_BIT_LOCATION]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_BIT_LOCATION(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_BIT_LOCATION,
           TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_BIT_LOCATION_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_BIT_LOCATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIBMEM_CTRL_MAC_ECC_CAPTURE_REG_BIT_LOCATION]

//>> PREP_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E]

//>> PUT_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E]


//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_FIFO_SIZE_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_FIFO_SIZE_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_FIFO_SIZE_003,
           TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_FIFO_SIZE_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_FIFO_SIZE_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_FIFO_SIZE_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_FIFO_SIZE_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_FIFO_SIZE_003(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_FIFO_SIZE_003,
           TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_FIFO_SIZE_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_FIFO_SIZE_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_FIFO_SIZE_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_FIFO_SIZE_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_FIFO_SIZE_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_FIFO_SIZE_003,
           TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_FIFO_SIZE_003_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_FIFO_SIZE_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_FIFO_SIZE_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_MSM_CURR_STATE_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_MSM_CURR_STATE_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_MSM_CURR_STATE_003,
           TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_MSM_CURR_STATE_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_MSM_CURR_STATE_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_MSM_CURR_STATE_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_MSM_CURR_STATE_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_MSM_CURR_STATE_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_MSM_CURR_STATE_003,
           TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_MSM_CURR_STATE_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_MSM_CURR_STATE_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_MSM_CURR_STATE_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_MSM_CURR_STATE_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_MSM_CURR_STATE_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_MSM_CURR_STATE_003,
           TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_MSM_CURR_STATE_003_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_MSM_CURR_STATE_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_MSM_CURR_STATE_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SCL_SYN_EXT_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SDA_SYN_EXT_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SCL_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_S_SDA_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SCL_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_M_SDA_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_HIGH_WATER_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LOW_WATER_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_I2C_BUSY_EXT_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_SELF_BUSY_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_PEEK_DATA1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_PEEK_DATA1_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_PEEK_DATA1_003,
           TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_PEEK_DATA1_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_PEEK_DATA1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_PEEK_DATA1_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_PEEK_DATA1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_PEEK_DATA1_003(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_PEEK_DATA1_003,
           TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_PEEK_DATA1_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_PEEK_DATA1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_PEEK_DATA1_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_PEEK_DATA1_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_PEEK_DATA1_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_PEEK_DATA1_003,
           TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_PEEK_DATA1_003_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_PEEK_DATA1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_PEEK_DATA1_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_EXTENDED_STATUS_E_LBUS_PARITY_ERR1_003]

//>> PREP_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D]

//>> GET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D]

//>> PUT_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D]


//>> SET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_FIFO_BITS_READ0_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_FIFO_BITS_READ0_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_FIFO_BITS_READ0_002,
           TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_FIFO_BITS_READ0_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_FIFO_BITS_READ0_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_FIFO_BITS_READ0_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_FIFO_BITS_READ0_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_FIFO_BITS_READ0_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_FIFO_BITS_READ0_002,
           TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_FIFO_BITS_READ0_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_FIFO_BITS_READ0_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_FIFO_BITS_READ0_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_FIFO_BITS_READ0_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_FIFO_BITS_READ0_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_FIFO_BITS_READ0_002,
           TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_FIFO_BITS_READ0_002_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_FIFO_BITS_READ0_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_FIFO_BITS_READ0_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_PEEK_DATA1_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_PEEK_DATA1_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_PEEK_DATA1_002,
           TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_PEEK_DATA1_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_PEEK_DATA1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_PEEK_DATA1_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_PEEK_DATA1_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_PEEK_DATA1_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_PEEK_DATA1_002,
           TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_PEEK_DATA1_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_PEEK_DATA1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_PEEK_DATA1_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_PEEK_DATA1_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_PEEK_DATA1_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_PEEK_DATA1_002,
           TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_PEEK_DATA1_002_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_PEEK_DATA1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_PEEK_DATA1_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_FIFO1_REGISTER_READ_D_LBUS_PARITY_ERR1_002]

//>> PREP_[TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C]

//>> GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C]

//>> PUT_[TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C]


//>> SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001]

//>> SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001]

//>> SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001]

//>> GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001]

//>> GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001]
static inline bool GET_TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_ERR_C_IMM_RESET_ERRORS_001]

//>> PREP_[TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E]

//>> GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E]

//>> PUT_[TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E]


//>> SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_I2C_E_IMM_RESET_I2C_003]

//>> PREP_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C]

//>> GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C]

//>> PUT_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C]


//>> SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001]

//>> SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001]

//>> SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001]

//>> GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001]

//>> GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001]
static inline bool GET_TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SDA_C_IMM_RESET_S_SDA_001]

//>> PREP_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B]

//>> GET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B]

//>> PUT_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B]


//>> SET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000]
static inline bool GET_TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SCL_B_IMM_SET_S_SCL_000]

//>> PREP_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_INTERRUPTS_E(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_INTERRUPTS_E;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_INTERRUPTS_E(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_INTERRUPTS_E;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_INTERRUPTS_E, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E]

//>> PUT_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_INTERRUPTS_E(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPTS_E));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_INTERRUPTS_E, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E]


//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_INTS_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_INTS_003(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPTS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_INTS_003,
           TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_INTS_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_INTS_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_INTS_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_INTS_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_INTS_003(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPTS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_INTS_003,
           TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_INTS_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_INTS_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_INTS_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_INTS_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_INTS_003(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPTS_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_INTS_003,
           TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_INTS_003_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_INTS_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_INTS_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_PEEK_DATA1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_PEEK_DATA1_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPTS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_PEEK_DATA1_003,
           TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_PEEK_DATA1_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_PEEK_DATA1_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_PEEK_DATA1_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_PEEK_DATA1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_PEEK_DATA1_003(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPTS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_PEEK_DATA1_003,
           TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_PEEK_DATA1_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_PEEK_DATA1_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_PEEK_DATA1_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_PEEK_DATA1_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_PEEK_DATA1_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPTS_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_PEEK_DATA1_003,
           TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_PEEK_DATA1_003_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_PEEK_DATA1_003 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_PEEK_DATA1_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPTS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPTS_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPTS_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPTS_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPTS_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPTS_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPTS_E_LBUS_PARITY_ERR1_003]

//>> PREP_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E]

//>> PUT_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E]


//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_INT_MASK_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_INT_MASK_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_INT_MASK_003,
           TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_INT_MASK_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_INT_MASK_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_INT_MASK_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_INT_MASK_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_INT_MASK_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_INT_MASK_003,
           TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_INT_MASK_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_INT_MASK_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_INT_MASK_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_INT_MASK_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_INT_MASK_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_INT_MASK_003,
           TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_INT_MASK_003_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_INT_MASK_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_INT_MASK_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_PEEK_DATA1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_PEEK_DATA1_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_PEEK_DATA1_003,
           TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_PEEK_DATA1_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_PEEK_DATA1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_PEEK_DATA1_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_PEEK_DATA1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_PEEK_DATA1_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_PEEK_DATA1_003,
           TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_PEEK_DATA1_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_PEEK_DATA1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_PEEK_DATA1_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_PEEK_DATA1_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_PEEK_DATA1_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_PEEK_DATA1_003,
           TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_PEEK_DATA1_003_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_PEEK_DATA1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_PEEK_DATA1_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_READ_E_LBUS_PARITY_ERR1_003]

//>> PREP_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C]

//>> GET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C]

//>> PUT_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C]


//>> SET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001]

//>> SET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001]

//>> SET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001]

//>> GET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001]

//>> GET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001]
static inline bool GET_TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_LOCK_ENABLE_001]

//>> SET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ID_001]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ID_001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ID_001,
           TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ID_001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ID_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ID_001]

//>> SET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ID_001]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ID_001(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ID_001,
           TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ID_001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ID_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ID_001]

//>> GET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ID_001]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ID_001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ID_001,
           TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ID_001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ID_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ID_001]

//>> SET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ACTIVITY_001]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ACTIVITY_001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ACTIVITY_001,
           TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ACTIVITY_001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ACTIVITY_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ACTIVITY_001]

//>> SET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ACTIVITY_001]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ACTIVITY_001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ACTIVITY_001,
           TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ACTIVITY_001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ACTIVITY_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ACTIVITY_001]

//>> GET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ACTIVITY_001]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ACTIVITY_001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ACTIVITY_001,
           TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ACTIVITY_001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ACTIVITY_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_PIBI2CM_ATOMIC_LOCK_REG_C_ACTIVITY_001]

//>> PREP_[TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D]

//>> GET_[TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D]

//>> PUT_[TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D]


//>> SET_[TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_RESET_REGISTER_D_OVERALL_RESET_002]

//>> PREP_[TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0]

//>> GET_[TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0]

//>> PUT_[TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0]


//>> SET_[TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0_SEEPROM_MEASUREMENT0_DATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0_SEEPROM_MEASUREMENT0_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0_SEEPROM_MEASUREMENT0_DATA,
           TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0_SEEPROM_MEASUREMENT0_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0_SEEPROM_MEASUREMENT0_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0_SEEPROM_MEASUREMENT0_DATA]

//>> SET_[TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0_SEEPROM_MEASUREMENT0_DATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0_SEEPROM_MEASUREMENT0_DATA(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0_SEEPROM_MEASUREMENT0_DATA,
           TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0_SEEPROM_MEASUREMENT0_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0_SEEPROM_MEASUREMENT0_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0_SEEPROM_MEASUREMENT0_DATA]

//>> GET_[TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0_SEEPROM_MEASUREMENT0_DATA]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0_SEEPROM_MEASUREMENT0_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0_SEEPROM_MEASUREMENT0_DATA,
           TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0_SEEPROM_MEASUREMENT0_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0_SEEPROM_MEASUREMENT0_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_OTP_OTPC_M_MEASURE_REG0_SEEPROM_MEASUREMENT0_DATA]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM]


//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ADDR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ADDR,
           P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ADDR]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ADDR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ADDR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ADDR,
           P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ADDR]

//>> GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ADDR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return i_data.extractToRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ADDR,
           P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ADDR]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.setBit<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW]

//>> CLEAR_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.clearBit<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW]

//>> GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return i_data.extractToRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW]

//>> GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW]
static inline bool GET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return i_data.getBit<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_R_NW]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.setBit<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY]

//>> CLEAR_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.clearBit<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY]

//>> GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return i_data.extractToRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY]

//>> GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY]
static inline bool GET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return i_data.getBit<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BUSY]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.setBit<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING]

//>> CLEAR_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
CLEAR_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.clearBit<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING]

//>> GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return i_data.extractToRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING]

//>> GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING]
static inline bool GET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return i_data.getBit<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IMPRECISE_ERROR_PENDING]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BYTE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BYTE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BYTE_ENABLE,
           P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BYTE_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BYTE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BYTE_ENABLE]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BYTE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BYTE_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BYTE_ENABLE,
           P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BYTE_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BYTE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BYTE_ENABLE]

//>> GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BYTE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BYTE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return i_data.extractToRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BYTE_ENABLE,
           P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BYTE_ENABLE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BYTE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_BYTE_ENABLE]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.setBit<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE]

//>> CLEAR_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.clearBit<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE]

//>> GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return i_data.extractToRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE]

//>> GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE]
static inline bool GET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return i_data.getBit<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_LINE_MODE]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ERROR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ERROR,
           P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ERROR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ERROR]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ERROR]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ERROR,
           P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ERROR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ERROR]

//>> GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ERROR]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return i_data.extractToRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ERROR,
           P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ERROR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_ERROR]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.setBit<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING]

//>> CLEAR_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.clearBit<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING]

//>> GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return i_data.extractToRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING]

//>> GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING]
static inline bool GET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return i_data.getBit<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_IFETCH_PENDING]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING]

//>> SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.setBit<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING]

//>> CLEAR_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return o_data.clearBit<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING]

//>> GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return i_data.extractToRight<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING]

//>> GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING]
static inline bool GET_P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM));
#endif
    return i_data.getBit<P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPCHIP_PIB_SBE_SBEPM_SBEPPE_MIB_PPE_XIMEM_DATAOP_PENDING]

//>> PREP_[TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG]

//>> GET_[TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG]

//>> PUT_[TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG]


//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SEQUENCER_OP_Q]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SEQUENCER_OP_Q(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SEQUENCER_OP_Q,
           TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SEQUENCER_OP_Q_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SEQUENCER_OP_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SEQUENCER_OP_Q]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SEQUENCER_OP_Q]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SEQUENCER_OP_Q(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SEQUENCER_OP_Q,
           TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SEQUENCER_OP_Q_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SEQUENCER_OP_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SEQUENCER_OP_Q]

//>> GET_[TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SEQUENCER_OP_Q]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SEQUENCER_OP_Q(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SEQUENCER_OP_Q,
           TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SEQUENCER_OP_Q_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SEQUENCER_OP_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SEQUENCER_OP_Q]

//>> SET_[P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SPIMST1_SEQUENCER_OP_Q]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SPIMST1_SEQUENCER_OP_Q(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SPIMST1_SEQUENCER_OP_Q,
           P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SPIMST1_SEQUENCER_OP_Q_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SPIMST1_SEQUENCER_OP_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SPIMST1_SEQUENCER_OP_Q]

//>> SET_[P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SPIMST1_SEQUENCER_OP_Q]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SPIMST1_SEQUENCER_OP_Q(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SPIMST1_SEQUENCER_OP_Q,
           P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SPIMST1_SEQUENCER_OP_Q_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SPIMST1_SEQUENCER_OP_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SPIMST1_SEQUENCER_OP_Q]

//>> GET_[P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SPIMST1_SEQUENCER_OP_Q]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SPIMST1_SEQUENCER_OP_Q(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG));
#endif
    return i_data.extractToRight<P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SPIMST1_SEQUENCER_OP_Q,
           P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SPIMST1_SEQUENCER_OP_Q_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SPIMST1_SEQUENCER_OP_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST1_SEQUENCER_OP_REG_SPIMST1_SEQUENCER_OP_Q]

//>> PREP_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG]

//>> GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG]

//>> PUT_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG]


//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_CLOCK_DIVIDER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_CLOCK_DIVIDER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_CLOCK_DIVIDER,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_CLOCK_DIVIDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_CLOCK_DIVIDER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_CLOCK_DIVIDER]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_CLOCK_DIVIDER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_CLOCK_DIVIDER(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_CLOCK_DIVIDER,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_CLOCK_DIVIDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_CLOCK_DIVIDER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_CLOCK_DIVIDER]

//>> GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_CLOCK_DIVIDER]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_CLOCK_DIVIDER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_CLOCK_DIVIDER,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_CLOCK_DIVIDER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_CLOCK_DIVIDER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_CLOCK_DIVIDER]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RECEIVE_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RECEIVE_DELAY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RECEIVE_DELAY,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RECEIVE_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RECEIVE_DELAY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RECEIVE_DELAY]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RECEIVE_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RECEIVE_DELAY(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RECEIVE_DELAY,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RECEIVE_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RECEIVE_DELAY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RECEIVE_DELAY]

//>> GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RECEIVE_DELAY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RECEIVE_DELAY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RECEIVE_DELAY,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RECEIVE_DELAY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RECEIVE_DELAY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RECEIVE_DELAY]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED]

//>> CLEAR_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED]

//>> GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED]

//>> GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED]
static inline bool GET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_RESERVED]

//>> SET_[P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]

//>> SET_[P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]

//>> SET_[P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]
static inline fapi2::buffer<uint64_t>& SET_P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.setBit<P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]

//>> CLEAR_[P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.clearBit<P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]

//>> GET_[P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]
static inline fapi2::buffer<uint64_t>& GET_P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]

//>> GET_[P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]
static inline bool GET_P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return i_data.getBit<P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]

//>> CLEAR_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]

//>> GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]

//>> GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]
static inline bool GET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_TRACE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_TRACE_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_TRACE_SELECT,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_TRACE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_TRACE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_TRACE_SELECT]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_TRACE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_TRACE_SELECT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_TRACE_SELECT,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_TRACE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_TRACE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_TRACE_SELECT]

//>> GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_TRACE_SELECT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_TRACE_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_TRACE_SELECT,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_TRACE_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_TRACE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_TRACE_SELECT]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RESET_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RESET_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RESET_CONTROL,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RESET_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RESET_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RESET_CONTROL]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RESET_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RESET_CONTROL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RESET_CONTROL,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RESET_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RESET_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RESET_CONTROL]

//>> GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RESET_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RESET_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RESET_CONTROL,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RESET_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RESET_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_RESET_CONTROL]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]

//>> CLEAR_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]

//>> GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]

//>> GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]
static inline bool GET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_CONTROL,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_CONTROL]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_CONTROL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_CONTROL,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_CONTROL]

//>> GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_CONTROL,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_ECC_CONTROL]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]

//>> CLEAR_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]

//>> GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]

//>> GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]
static inline bool GET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_SLAVE_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_SLAVE_RESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_SLAVE_RESET,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_SLAVE_RESET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_SLAVE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_SLAVE_RESET]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_SLAVE_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_SLAVE_RESET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_SLAVE_RESET,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_SLAVE_RESET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_SLAVE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_SLAVE_RESET]

//>> GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_SLAVE_RESET]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_SLAVE_RESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_SLAVE_RESET,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_SLAVE_RESET_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_SLAVE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_SPI_SLAVE_RESET]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE]

//>> CLEAR_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE]

//>> GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE]

//>> GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE]
static inline bool GET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_LOOPBACK_ENABLE]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED]

//>> SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED]

//>> GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED,
           TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SPIMC_SPIMST4_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED]

//>> PREP_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG]

//>> PUT_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG]


//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X00_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X01_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X02_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X03_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X04_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X05_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X06_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X07_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X08_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X09_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0A_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_0_STEP_CHECK_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_M_PATH_1_STEP_CHECK_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_0_STEP_CHECK_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_STEP_CHECK_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PSS_HAM_CORE_INTERRUPT_MASK]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0B_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_S_PATH_1_STEP_CHECK_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_DELAY_STEP_CHECK_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X0C_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X11_0X12_0X13_0X14_0X15_0X16_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X17_0X18_0X21_0X22_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X1D_0X1E_0X1F_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X20_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X23_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X24_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X29_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X30_0X31_0X32_0X33_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X10_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_SYNC_CHECK_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_FSM_STATE_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_I_PATH_TIME_REG_OVERFLOW_CORE_INTERRUPT]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_WOF_LOW_ORDER_STEP_COUNTER_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_0_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_1_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_2_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_3_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_5_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_INVALID_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_WRITE_INVALID_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_READ_INVALID_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_ADDR_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_SLAVE_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_REG_0X27_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_RSP_INFO_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_RSP_INFO_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_RSP_INFO_ERROR_ROUTING,
           TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_RSP_INFO_ERROR_ROUTING_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_RSP_INFO_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_RSP_INFO_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_RSP_INFO_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_RSP_INFO_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_RSP_INFO_ERROR_ROUTING,
           TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_RSP_INFO_ERROR_ROUTING_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_RSP_INFO_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_RSP_INFO_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_RSP_INFO_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_RSP_INFO_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_RSP_INFO_ERROR_ROUTING,
           TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_RSP_INFO_ERROR_ROUTING_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_RSP_INFO_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_RSP_INFO_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_INVALID_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_RX_TTYPE_4_DATA_PARITY_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_MASTER_REQUEST_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_PIB_RESET_DURING_ACCESS_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_EXTERNAL_XSTOP_ERROR_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_58]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_59]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_60]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_61]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_OSCSWITCH_INTERRUPT_ROUTING]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63]

//>> SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63]

//>> GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63]
static inline bool GET_TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_ERROR_ROUTING_REG_SPARE_ERROR_ROUTING_63]

//>> PREP_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG]

//>> PUT_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG]


//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_SEC_SELECT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_SEC_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_SEC_SELECT,
           TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_SEC_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_SEC_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_SEC_SELECT]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_SEC_SELECT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_SEC_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_SEC_SELECT,
           TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_SEC_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_SEC_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_SEC_SELECT]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_SEC_SELECT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_SEC_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_SEC_SELECT,
           TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_SEC_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_SEC_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_SEC_SELECT]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_03]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_OSC_NOT_VALID_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_OSC_NOT_VALID_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_CHECK_VALID]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_CHECK_VALID]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_0_STEP_CHECK_VALID]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_I_PATH_STEP_CHECK_VALID]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_1_STEP_CHECK_VALID]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SPECIAL_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_PATH_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_TOD_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_M_S_DRAWER_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_PRI_S_PATH_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_PATH_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_TOD_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_M_S_DRAWER_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_SEC_S_PATH_SELECT_STATUS]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_RUNNING]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_PRIMARY]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SECONDARY]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_ACTIVE_MASTER]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_BACKUP_MASTER]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_IS_SLAVE]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SELECT]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_S_PATH_SELECT]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_0_STEP_ALIGN_VALID_SWITCH]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_1_STEP_ALIGN_VALID_SWITCH]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_REG_0X08_SPARE_30]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER]

//>> SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER]

//>> CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER]

//>> GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER]
static inline bool GET_TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_TOD_PSS_MSS_STATUS_REG_M_PATH_SWITCH_TRIGGER]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
