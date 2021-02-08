/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/proc/reg00018_unused.H $      */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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

#ifndef __PROC_REG00018_H_UNUSED__
#define __PROC_REG00018_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace proc
{
#endif


//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_0,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_0,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_0,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_1,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_1]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_1,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_1]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_1,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR0_1]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_0,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_0,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_0,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_1,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_1]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_1,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_1]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_1,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR30_1]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_TAG_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_TAG_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_TAG_ADDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_TAG_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_TAG_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_TAG_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_TAG_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_TAG_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_TAG_ADDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_TAG_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_TAG_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_TAG_ADDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_TAG_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_TAG_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_TAG_ADDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_TAG_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_TAG_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_TAG_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_VALID,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_VALID,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_VALID]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_VALID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_VALID,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_VALID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_VALID,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_VALID(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_VALID,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_VALID]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_VALID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_VALID,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_VALID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE_PTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_LINE2_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6_OCB_OCI_OPIT2Q6RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6_OCB_OCI_OPIT2Q6RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6_OCB_OCI_OPIT2Q6RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6_OCB_OCI_OPIT2Q6RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6_OCB_OCI_OPIT2Q6RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6_OCB_OCI_OPIT2Q6RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6_OCB_OCI_OPIT2Q6RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6_OCB_OCI_OPIT2Q6RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6_OCB_OCI_OPIT2Q6RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6_OCB_OCI_OPIT2Q6RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6_OCB_OCI_OPIT2Q6RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6_OCB_OCI_OPIT2Q6RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6_OCB_OCI_OPIT2Q6RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6_OCB_OCI_OPIT2Q6RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6_OCB_OCI_OPIT2Q6RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6_OCB_OCI_OPIT2Q6RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6_OCB_OCI_OPIT2Q6RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6_OCB_OCI_OPIT2Q6RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6PRA_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4_OCB_OCI_OPIT6Q4RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4_OCB_OCI_OPIT6Q4RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4_OCB_OCI_OPIT6Q4RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4_OCB_OCI_OPIT6Q4RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4_OCB_OCI_OPIT6Q4RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4_OCB_OCI_OPIT6Q4RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4_OCB_OCI_OPIT6Q4RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4_OCB_OCI_OPIT6Q4RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4_OCB_OCI_OPIT6Q4RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4_OCB_OCI_OPIT6Q4RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4_OCB_OCI_OPIT6Q4RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4_OCB_OCI_OPIT6Q4RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4_OCB_OCI_OPIT6Q4RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4_OCB_OCI_OPIT6Q4RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4_OCB_OCI_OPIT6Q4RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4_OCB_OCI_OPIT6Q4RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4_OCB_OCI_OPIT6Q4RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4_OCB_OCI_OPIT6Q4RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C0]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C0]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C0_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C19(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C19;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C19(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C19;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C19, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C19(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C19));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C19, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C19));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C19));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C19));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C19));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C19));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C19));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C19_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C20RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C31(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C31;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C31(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C31;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C31, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C31(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C31));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C31, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C31));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C31));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C31));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C31));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C31));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C31));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C15RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C27RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C28]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C28(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C28;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C28]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C28]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C28(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C28;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C28, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C28]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C28]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C28(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C28));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C28, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C28]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C28));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C28));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C28));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C28));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C28));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C28));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C28_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C30RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITBSV2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITBSV2;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITBSV2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITBSV2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV2_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCSVRR_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDSVRR_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITESVRR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITESVRR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITESVRR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITESVRR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITESVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITESVRR_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSVRR_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_WOFICRD]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_WOFICRD(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_WOFICRD;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_WOFICRD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICRD]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_WOFICRD(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_WOFICRD;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_WOFICRD, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICRD]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_WOFICRD]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_WOFICRD(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICRD));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_WOFICRD, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_WOFICRD]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICRD_OCB_OCI_WOFICRD_WOFCNTL_RDDATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICRD_OCB_OCI_WOFICRD_WOFCNTL_RDDATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICRD));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICRD_OCB_OCI_WOFICRD_WOFCNTL_RDDATA,
           TP_TPCHIP_OCC_OCI_OCB_WOFICRD_OCB_OCI_WOFICRD_WOFCNTL_RDDATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICRD_OCB_OCI_WOFICRD_WOFCNTL_RDDATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICRD_OCB_OCI_WOFICRD_WOFCNTL_RDDATA]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICRD_OCB_OCI_WOFICRD_WOFCNTL_RDDATA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICRD_OCB_OCI_WOFICRD_WOFCNTL_RDDATA(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICRD));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICRD_OCB_OCI_WOFICRD_WOFCNTL_RDDATA,
           TP_TPCHIP_OCC_OCI_OCB_WOFICRD_OCB_OCI_WOFICRD_WOFCNTL_RDDATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICRD_OCB_OCI_WOFICRD_WOFCNTL_RDDATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICRD_OCB_OCI_WOFICRD_WOFCNTL_RDDATA]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICRD_OCB_OCI_WOFICRD_WOFCNTL_RDDATA]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICRD_OCB_OCI_WOFICRD_WOFCNTL_RDDATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICRD));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICRD_OCB_OCI_WOFICRD_WOFCNTL_RDDATA,
           TP_TPCHIP_OCC_OCI_OCB_WOFICRD_OCB_OCI_WOFICRD_WOFCNTL_RDDATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICRD_OCB_OCI_WOFICRD_WOFCNTL_RDDATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICRD_OCB_OCI_WOFICRD_WOFCNTL_RDDATA]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108_REGISTER108]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108_REGISTER108(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108_REGISTER108,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108_REGISTER108_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108_REGISTER108 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108_REGISTER108]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108_REGISTER108]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108_REGISTER108(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108_REGISTER108,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108_REGISTER108_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108_REGISTER108 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108_REGISTER108]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108_REGISTER108]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108_REGISTER108(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108_REGISTER108,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108_REGISTER108_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108_REGISTER108 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG108_REGISTER108]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117_REGISTER117]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117_REGISTER117(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117_REGISTER117,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117_REGISTER117_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117_REGISTER117 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117_REGISTER117]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117_REGISTER117]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117_REGISTER117(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117_REGISTER117,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117_REGISTER117_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117_REGISTER117 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117_REGISTER117]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117_REGISTER117]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117_REGISTER117(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117_REGISTER117,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117_REGISTER117_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117_REGISTER117 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG117_REGISTER117]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120_REGISTER120]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120_REGISTER120(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120_REGISTER120,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120_REGISTER120_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120_REGISTER120 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120_REGISTER120]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120_REGISTER120]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120_REGISTER120(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120_REGISTER120,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120_REGISTER120_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120_REGISTER120 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120_REGISTER120]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120_REGISTER120]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120_REGISTER120(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120_REGISTER120,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120_REGISTER120_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120_REGISTER120 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG120_REGISTER120]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17_REGISTER17]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17_REGISTER17(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17_REGISTER17,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17_REGISTER17_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17_REGISTER17 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17_REGISTER17]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17_REGISTER17]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17_REGISTER17(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17_REGISTER17,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17_REGISTER17_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17_REGISTER17 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17_REGISTER17]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17_REGISTER17]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17_REGISTER17(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17_REGISTER17,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17_REGISTER17_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17_REGISTER17 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG17_REGISTER17]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20_REGISTER20]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20_REGISTER20(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20_REGISTER20,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20_REGISTER20_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20_REGISTER20 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20_REGISTER20]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20_REGISTER20]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20_REGISTER20(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20_REGISTER20,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20_REGISTER20_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20_REGISTER20 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20_REGISTER20]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20_REGISTER20]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20_REGISTER20(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20_REGISTER20,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20_REGISTER20_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20_REGISTER20 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG20_REGISTER20]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3_REGISTER3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3_REGISTER3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3_REGISTER3,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3_REGISTER3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3_REGISTER3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3_REGISTER3]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3_REGISTER3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3_REGISTER3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3_REGISTER3,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3_REGISTER3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3_REGISTER3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3_REGISTER3]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3_REGISTER3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3_REGISTER3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3_REGISTER3,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3_REGISTER3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3_REGISTER3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG3_REGISTER3]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41_REGISTER41]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41_REGISTER41(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41_REGISTER41,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41_REGISTER41_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41_REGISTER41 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41_REGISTER41]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41_REGISTER41]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41_REGISTER41(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41_REGISTER41,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41_REGISTER41_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41_REGISTER41 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41_REGISTER41]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41_REGISTER41]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41_REGISTER41(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41_REGISTER41,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41_REGISTER41_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41_REGISTER41 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG41_REGISTER41]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69_REGISTER69]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69_REGISTER69(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69_REGISTER69,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69_REGISTER69_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69_REGISTER69 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69_REGISTER69]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69_REGISTER69]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69_REGISTER69(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69_REGISTER69,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69_REGISTER69_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69_REGISTER69 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69_REGISTER69]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69_REGISTER69]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69_REGISTER69(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69_REGISTER69,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69_REGISTER69_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69_REGISTER69 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG69_REGISTER69]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76_REGISTER76]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76_REGISTER76(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76_REGISTER76,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76_REGISTER76_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76_REGISTER76 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76_REGISTER76]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76_REGISTER76]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76_REGISTER76(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76_REGISTER76,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76_REGISTER76_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76_REGISTER76 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76_REGISTER76]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76_REGISTER76]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76_REGISTER76(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76_REGISTER76,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76_REGISTER76_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76_REGISTER76 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG76_REGISTER76]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83_REGISTER83]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83_REGISTER83(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83_REGISTER83,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83_REGISTER83_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83_REGISTER83 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83_REGISTER83]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83_REGISTER83]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83_REGISTER83(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83_REGISTER83,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83_REGISTER83_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83_REGISTER83 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83_REGISTER83]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83_REGISTER83]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83_REGISTER83(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83_REGISTER83,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83_REGISTER83_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83_REGISTER83 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG83_REGISTER83]

//>> PREP_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B]

//>> GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B]

//>> PUT_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B]


//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000]
static inline bool GET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_START_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000]
static inline bool GET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_ADDRESS_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000]
static inline bool GET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_CONTINUE_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000]
static inline bool GET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_WITH_STOP_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_NOT_USED_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_NOT_USED_000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_NOT_USED_000,
           TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_NOT_USED_000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_NOT_USED_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_NOT_USED_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_NOT_USED_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_NOT_USED_000(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_NOT_USED_000,
           TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_NOT_USED_000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_NOT_USED_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_NOT_USED_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_NOT_USED_000]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_NOT_USED_000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_NOT_USED_000,
           TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_NOT_USED_000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_NOT_USED_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_NOT_USED_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_DEVICE_ADDRESS_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_DEVICE_ADDRESS_000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_DEVICE_ADDRESS_000,
           TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_DEVICE_ADDRESS_000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_DEVICE_ADDRESS_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_DEVICE_ADDRESS_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_DEVICE_ADDRESS_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_DEVICE_ADDRESS_000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_DEVICE_ADDRESS_000,
           TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_DEVICE_ADDRESS_000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_DEVICE_ADDRESS_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_DEVICE_ADDRESS_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_DEVICE_ADDRESS_000]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_DEVICE_ADDRESS_000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_DEVICE_ADDRESS_000,
           TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_DEVICE_ADDRESS_000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_DEVICE_ADDRESS_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_DEVICE_ADDRESS_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000]
static inline bool GET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_READ_NOT_WRITE_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LENGTH_IN_BYTES_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LENGTH_IN_BYTES_000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LENGTH_IN_BYTES_000,
           TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LENGTH_IN_BYTES_000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LENGTH_IN_BYTES_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LENGTH_IN_BYTES_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LENGTH_IN_BYTES_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LENGTH_IN_BYTES_000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LENGTH_IN_BYTES_000,
           TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LENGTH_IN_BYTES_000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LENGTH_IN_BYTES_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LENGTH_IN_BYTES_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LENGTH_IN_BYTES_000]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LENGTH_IN_BYTES_000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LENGTH_IN_BYTES_000,
           TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LENGTH_IN_BYTES_000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LENGTH_IN_BYTES_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LENGTH_IN_BYTES_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_PEEK_DATA1_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_PEEK_DATA1_000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_PEEK_DATA1_000,
           TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_PEEK_DATA1_000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_PEEK_DATA1_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_PEEK_DATA1_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_PEEK_DATA1_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_PEEK_DATA1_000(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_PEEK_DATA1_000,
           TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_PEEK_DATA1_000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_PEEK_DATA1_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_PEEK_DATA1_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_PEEK_DATA1_000]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_PEEK_DATA1_000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_PEEK_DATA1_000,
           TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_PEEK_DATA1_000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_PEEK_DATA1_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_PEEK_DATA1_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000]
static inline bool GET_TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_COMMAND_REGISTER_B_LBUS_PARITY_ERR1_000]

//>> PREP_[TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B]

//>> GET_[TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B]

//>> PUT_[TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B]


//>> SET_[TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B_PIB_DATA0TO7_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B_PIB_DATA0TO7_000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B_PIB_DATA0TO7_000,
           TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B_PIB_DATA0TO7_000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B_PIB_DATA0TO7_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B_PIB_DATA0TO7_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B_PIB_DATA0TO7_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B_PIB_DATA0TO7_000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B_PIB_DATA0TO7_000,
           TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B_PIB_DATA0TO7_000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B_PIB_DATA0TO7_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B_PIB_DATA0TO7_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B_PIB_DATA0TO7_000]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B_PIB_DATA0TO7_000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B_PIB_DATA0TO7_000,
           TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B_PIB_DATA0TO7_000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B_PIB_DATA0TO7_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_DATA0TO7_REGISTER_B_PIB_DATA0TO7_000]

//>> PREP_[TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B]

//>> GET_[TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B]

//>> PUT_[TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B]


//>> SET_[TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B_PIB_DATA8TO15_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B_PIB_DATA8TO15_000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B_PIB_DATA8TO15_000,
           TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B_PIB_DATA8TO15_000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B_PIB_DATA8TO15_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B_PIB_DATA8TO15_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B_PIB_DATA8TO15_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B_PIB_DATA8TO15_000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B_PIB_DATA8TO15_000,
           TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B_PIB_DATA8TO15_000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B_PIB_DATA8TO15_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B_PIB_DATA8TO15_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B_PIB_DATA8TO15_000]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B_PIB_DATA8TO15_000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B_PIB_DATA8TO15_000,
           TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B_PIB_DATA8TO15_000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B_PIB_DATA8TO15_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_DATA8TO15_REGISTER_B_PIB_DATA8TO15_000]

//>> PREP_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E]

//>> GET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E]

//>> PUT_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E]


//>> SET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_FE_LEN_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_FE_LEN_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_FE_LEN_003,
           TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_FE_LEN_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_FE_LEN_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_FE_LEN_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_FE_LEN_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_FE_LEN_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_FE_LEN_003,
           TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_FE_LEN_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_FE_LEN_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_FE_LEN_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_FE_LEN_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_FE_LEN_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_FE_LEN_003,
           TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_FE_LEN_003_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_FE_LEN_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_FE_LEN_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_BE_LEN_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_BE_LEN_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_BE_LEN_003,
           TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_BE_LEN_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_BE_LEN_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_BE_LEN_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_BE_LEN_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_BE_LEN_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_BE_LEN_003,
           TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_BE_LEN_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_BE_LEN_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_BE_LEN_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_BE_LEN_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_BE_LEN_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_BE_LEN_003,
           TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_BE_LEN_003_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_BE_LEN_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_RESID_BE_LEN_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_PEEK_DATA1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_PEEK_DATA1_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_PEEK_DATA1_003,
           TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_PEEK_DATA1_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_PEEK_DATA1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_PEEK_DATA1_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_PEEK_DATA1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_PEEK_DATA1_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_PEEK_DATA1_003,
           TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_PEEK_DATA1_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_PEEK_DATA1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_PEEK_DATA1_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_PEEK_DATA1_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_PEEK_DATA1_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_PEEK_DATA1_003,
           TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_PEEK_DATA1_003_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_PEEK_DATA1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_PEEK_DATA1_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_RESIDUAL_FRONT_END_BACK_LENGTH_E_LBUS_PARITY_ERR1_003]

//>> PREP_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E]

//>> PUT_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E]


//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_NVLD_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WRITE_NVLD_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_READ_NVLD_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ADDR_P_ERR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PAR_ERR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_LB_PARITY_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_READ_DATA_4_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_READ_DATA_4_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_READ_DATA_4_003,
           TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_READ_DATA_4_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_READ_DATA_4_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_READ_DATA_4_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_READ_DATA_4_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_READ_DATA_4_003(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_READ_DATA_4_003,
           TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_READ_DATA_4_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_READ_DATA_4_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_READ_DATA_4_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_READ_DATA_4_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_READ_DATA_4_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_READ_DATA_4_003,
           TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_READ_DATA_4_003_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_READ_DATA_4_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_READ_DATA_4_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_WAITING_IN_I2C_QUEUE_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CORRECTED_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_UNCORRECTED_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_ECC_CONFIG_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BUSY_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_INVALID_COMMAND_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_PARITY_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_OVERRUN_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_BACK_END_ACCESS_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_ARBITRATION_LOST_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_NACK_RECEIVED_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_DATA_REQUEST_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_COMMAND_COMPLETE_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_STOP_ERROR_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_PORT_BUSY_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_I2C_INTERFACE_BUSY_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_FIFO_ENTRY_COUNT_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_FIFO_ENTRY_COUNT_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_FIFO_ENTRY_COUNT_003,
           TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_FIFO_ENTRY_COUNT_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_FIFO_ENTRY_COUNT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_FIFO_ENTRY_COUNT_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_FIFO_ENTRY_COUNT_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_FIFO_ENTRY_COUNT_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_FIFO_ENTRY_COUNT_003,
           TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_FIFO_ENTRY_COUNT_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_FIFO_ENTRY_COUNT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_FIFO_ENTRY_COUNT_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_FIFO_ENTRY_COUNT_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_FIFO_ENTRY_COUNT_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_FIFO_ENTRY_COUNT_003,
           TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_FIFO_ENTRY_COUNT_003_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_FIFO_ENTRY_COUNT_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_BUS_STATUS_FIFO_ENTRY_COUNT_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_PCBIF_ERRS_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_PCBIF_ERRS_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_PCBIF_ERRS_003,
           TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_PCBIF_ERRS_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_PCBIF_ERRS_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_PCBIF_ERRS_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_PCBIF_ERRS_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_PCBIF_ERRS_003(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_PCBIF_ERRS_003,
           TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_PCBIF_ERRS_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_PCBIF_ERRS_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_PCBIF_ERRS_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_PCBIF_ERRS_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_PCBIF_ERRS_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_PCBIF_ERRS_003,
           TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_PCBIF_ERRS_003_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_PCBIF_ERRS_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_STATUS_REGISTER_E_PCBIF_ERRS_003]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
