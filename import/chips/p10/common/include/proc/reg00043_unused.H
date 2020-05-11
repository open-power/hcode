/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/proc/reg00043_unused.H $      */
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

#ifndef __PROC_REG00043_H_UNUSED__
#define __PROC_REG00043_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace proc
{
#endif


//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_0,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_0,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_0,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_3,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_3]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_3,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_3]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_3,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_3]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_BAR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_BAR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_BAR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_BAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_BAR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_BAR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_BAR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_BAR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_BAR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_BAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_BAR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_BAR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_BAR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_BAR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_BAR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_BAR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_BAR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_BAR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_SIZE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_SIZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_SIZE,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_SIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_SIZE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_SIZE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_SIZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_SIZE,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_SIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_SIZE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_SIZE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_SIZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_SIZE,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_SIZE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_SIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_SIZE]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_STORE_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_STORE_ADDRESS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_STORE_ADDRESS,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_STORE_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_STORE_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_STORE_ADDRESS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_STORE_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_STORE_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_STORE_ADDRESS,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_STORE_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_STORE_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_STORE_ADDRESS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_STORE_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_STORE_ADDRESS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_STORE_ADDRESS,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_STORE_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_STORE_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_STORE_ADDRESS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_BYTE_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_BYTE_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_BYTE_VALID,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_BYTE_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_BYTE_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_BYTE_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_BYTE_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_BYTE_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_BYTE_VALID,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_BYTE_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_BYTE_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_BYTE_VALID]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_BYTE_VALID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_BYTE_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_BYTE_VALID,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_BYTE_VALID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_BYTE_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_BYTE_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_SGB_FLUSH_PENDING]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_8]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_8(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_8,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_8_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_8]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_8]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_8(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_8,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_8_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_8]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_8]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_8(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_8,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_8_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_8]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_9]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_9(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_9,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_9_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_9]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_9]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_9,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_9_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_9]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_9]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_9(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_9,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_9_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_9]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_DORP2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_DORP2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_DORP2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_DORP2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_DORP2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_DORP2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_DORP2;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_DORP2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_DORP2]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_DORP2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_DORP2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_DORP2));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_DORP2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_DORP2]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_DORP2_QUOTIENT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_DORP2_QUOTIENT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_DORP2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_DORP2_QUOTIENT,
           TP_TPCHIP_OCC_OCI_OCB_DORP2_QUOTIENT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_DORP2_QUOTIENT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_DORP2_QUOTIENT]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_DORP2_QUOTIENT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_DORP2_QUOTIENT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_DORP2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_DORP2_QUOTIENT,
           TP_TPCHIP_OCC_OCI_OCB_DORP2_QUOTIENT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_DORP2_QUOTIENT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_DORP2_QUOTIENT]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_DORP2_QUOTIENT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_DORP2_QUOTIENT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_DORP2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_DORP2_QUOTIENT,
           TP_TPCHIP_OCC_OCI_OCB_DORP2_QUOTIENT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_DORP2_QUOTIENT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_DORP2_QUOTIENT]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_DORP2_REMAINDER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_DORP2_REMAINDER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_DORP2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_DORP2_REMAINDER,
           TP_TPCHIP_OCC_OCI_OCB_DORP2_REMAINDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_DORP2_REMAINDER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_DORP2_REMAINDER]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_DORP2_REMAINDER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_DORP2_REMAINDER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_DORP2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_DORP2_REMAINDER,
           TP_TPCHIP_OCC_OCI_OCB_DORP2_REMAINDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_DORP2_REMAINDER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_DORP2_REMAINDER]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_DORP2_REMAINDER]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_DORP2_REMAINDER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_DORP2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_DORP2_REMAINDER,
           TP_TPCHIP_OCC_OCI_OCB_DORP2_REMAINDER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_DORP2_REMAINDER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_DORP2_REMAINDER]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCBSHI2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCBSHI2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCBSHI2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCBSHI2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSHI2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCBSHI2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCBSHI2;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCBSHI2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSHI2]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCBSHI2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCBSHI2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSHI2));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCBSHI2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCBSHI2]


//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCBSLI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCBSLI0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCBSLI0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCBSLI0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSLI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCBSLI0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCBSLI0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCBSLI0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSLI0]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCBSLI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCBSLI0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSLI0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCBSLI0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCBSLI0]


//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_RW]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_RW]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_RW]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_CLEAR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_CLEAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_CLEAR]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_OR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_OR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_OR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_OCB_OCI_OCCFLG7_OCC_FLAGS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_OCB_OCI_OCCFLG7_OCC_FLAGS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_OCB_OCI_OCCFLG7_OCC_FLAGS,
           TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_OCB_OCI_OCCFLG7_OCC_FLAGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_OCB_OCI_OCCFLG7_OCC_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_OCB_OCI_OCCFLG7_OCC_FLAGS]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_OCB_OCI_OCCFLG7_OCC_FLAGS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_OCB_OCI_OCCFLG7_OCC_FLAGS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_OCB_OCI_OCCFLG7_OCC_FLAGS,
           TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_OCB_OCI_OCCFLG7_OCC_FLAGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_OCB_OCI_OCCFLG7_OCC_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_OCB_OCI_OCCFLG7_OCC_FLAGS]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_OCB_OCI_OCCFLG7_OCC_FLAGS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_OCB_OCI_OCCFLG7_OCC_FLAGS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_OCB_OCI_OCCFLG7_OCC_FLAGS,
           TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_OCB_OCI_OCCFLG7_OCC_FLAGS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_OCB_OCI_OCCFLG7_OCC_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_OCB_OCI_OCCFLG7_OCC_FLAGS]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C15]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C15(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C15;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C15]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C15]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C15(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C15;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C15, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C15]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C15]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C15(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C15));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C15, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C15]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C15));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C15));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C15));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C15));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C15));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C15));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C22;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C22;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C22, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C22, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C22));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C13(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C13;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C13(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C13;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C13, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C13(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C13));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C13, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C13));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C13));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C2;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C2]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C2));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C2]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C24]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C24(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C24;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C24]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C24]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C24(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C24;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C24, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C24]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C24]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C24(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C24));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C24, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C24]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C24));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C24));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C24));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C24));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C24));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C24));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RESERVED_2_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RESERVED_2_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RESERVED_2_3,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RESERVED_2_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RESERVED_2_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RESERVED_2_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RESERVED_2_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RESERVED_2_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RESERVED_2_3,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RESERVED_2_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RESERVED_2_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RESERVED_2_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RESERVED_2_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RESERVED_2_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RESERVED_2_3,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RESERVED_2_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RESERVED_2_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RESERVED_2_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECT_COUNT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECT_COUNT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECT_COUNT,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECT_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECT_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECT_COUNT]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECT_COUNT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECT_COUNT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECT_COUNT,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECT_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECT_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECT_COUNT]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECT_COUNT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECT_COUNT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECT_COUNT,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECT_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECT_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECT_COUNT]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ECC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ECC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ECC,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ECC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ECC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ECC]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ECC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ECC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ECC,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ECC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ECC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ECC]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ECC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ECC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ECC,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ECC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ECC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ECC]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ECC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ECC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ECC,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ECC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ECC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ECC]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ECC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ECC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ECC,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ECC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ECC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ECC]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ECC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ECC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ECC,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ECC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ECC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ECC]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_SEND_STATE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_SEND_STATE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_SEND_STATE_MACHINE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_SEND_STATE_MACHINE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_SEND_STATE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_SEND_STATE_MACHINE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_SEND_STATE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_SEND_STATE_MACHINE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_SEND_STATE_MACHINE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_SEND_STATE_MACHINE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_SEND_STATE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_SEND_STATE_MACHINE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_SEND_STATE_MACHINE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_SEND_STATE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_SEND_STATE_MACHINE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_SEND_STATE_MACHINE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_SEND_STATE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_SEND_STATE_MACHINE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RECV_STATE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RECV_STATE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RECV_STATE_MACHINE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RECV_STATE_MACHINE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RECV_STATE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RECV_STATE_MACHINE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RECV_STATE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RECV_STATE_MACHINE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RECV_STATE_MACHINE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RECV_STATE_MACHINE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RECV_STATE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RECV_STATE_MACHINE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RECV_STATE_MACHINE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RECV_STATE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RECV_STATE_MACHINE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RECV_STATE_MACHINE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RECV_STATE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RECV_STATE_MACHINE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_MST_STATE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_MST_STATE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_MST_STATE_MACHINE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_MST_STATE_MACHINE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_MST_STATE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_MST_STATE_MACHINE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_MST_STATE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_MST_STATE_MACHINE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_MST_STATE_MACHINE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_MST_STATE_MACHINE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_MST_STATE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_MST_STATE_MACHINE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_MST_STATE_MACHINE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_MST_STATE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_MST_STATE_MACHINE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_MST_STATE_MACHINE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_MST_STATE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_MST_STATE_MACHINE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_SLV_STATE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_SLV_STATE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_SLV_STATE_MACHINE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_SLV_STATE_MACHINE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_SLV_STATE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_SLV_STATE_MACHINE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_SLV_STATE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_SLV_STATE_MACHINE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_SLV_STATE_MACHINE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_SLV_STATE_MACHINE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_SLV_STATE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_SLV_STATE_MACHINE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_SLV_STATE_MACHINE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_SLV_STATE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_SLV_STATE_MACHINE,
           TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_SLV_STATE_MACHINE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_SLV_STATE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_SLV_STATE_MACHINE]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104_REGISTER104]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104_REGISTER104(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104_REGISTER104,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104_REGISTER104_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104_REGISTER104 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104_REGISTER104]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104_REGISTER104]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104_REGISTER104(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104_REGISTER104,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104_REGISTER104_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104_REGISTER104 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104_REGISTER104]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104_REGISTER104]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104_REGISTER104(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104_REGISTER104,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104_REGISTER104_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104_REGISTER104 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG104_REGISTER104]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33_REGISTER33]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33_REGISTER33(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33_REGISTER33,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33_REGISTER33_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33_REGISTER33 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33_REGISTER33]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33_REGISTER33]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33_REGISTER33(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33_REGISTER33,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33_REGISTER33_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33_REGISTER33 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33_REGISTER33]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33_REGISTER33]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33_REGISTER33(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33_REGISTER33,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33_REGISTER33_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33_REGISTER33 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG33_REGISTER33]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52_REGISTER52]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52_REGISTER52(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52_REGISTER52,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52_REGISTER52_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52_REGISTER52 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52_REGISTER52]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52_REGISTER52]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52_REGISTER52(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52_REGISTER52,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52_REGISTER52_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52_REGISTER52 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52_REGISTER52]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52_REGISTER52]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52_REGISTER52(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52_REGISTER52,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52_REGISTER52_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52_REGISTER52 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG52_REGISTER52]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65_REGISTER65]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65_REGISTER65(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65_REGISTER65,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65_REGISTER65_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65_REGISTER65 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65_REGISTER65]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65_REGISTER65]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65_REGISTER65(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65_REGISTER65,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65_REGISTER65_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65_REGISTER65 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65_REGISTER65]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65_REGISTER65]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65_REGISTER65(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65_REGISTER65,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65_REGISTER65_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65_REGISTER65 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG65_REGISTER65]

//>> PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90]

//>> PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90]


//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90_REGISTER90]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90_REGISTER90(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90_REGISTER90,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90_REGISTER90_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90_REGISTER90 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90_REGISTER90]

//>> SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90_REGISTER90]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90_REGISTER90(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90_REGISTER90,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90_REGISTER90_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90_REGISTER90 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90_REGISTER90]

//>> GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90_REGISTER90]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90_REGISTER90(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90));
#endif
    return i_data.extractToRight<TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90_REGISTER90,
           TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90_REGISTER90_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90_REGISTER90 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OTPROM_SINGLE_OTP_ROM_REG90_REGISTER90]

//>> PREP_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D]

//>> PUT_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D]


//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTART_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHADDR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_READCONT_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_WITHSTOP_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_LENGTH_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_LENGTH_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_LENGTH_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_LENGTH_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_LENGTH_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_LENGTH_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_LENGTH_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_LENGTH_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_LENGTH_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_LENGTH_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_LENGTH_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_LENGTH_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_LENGTH_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_LENGTH_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_LENGTH_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_LENGTH_002_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_LENGTH_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_LENGTH_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_ADDR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_ADDR_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_ADDR_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_ADDR_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_ADDR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_ADDR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_ADDR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_ADDR_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_ADDR_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_ADDR_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_ADDR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_ADDR_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_ADDR_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_ADDR_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_ADDR_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_ADDR_002_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_ADDR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_ADDR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_BIT_RNW_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_SPEED_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_SPEED_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_SPEED_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_SPEED_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_SPEED_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_SPEED_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_SPEED_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_SPEED_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_SPEED_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_SPEED_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_SPEED_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_SPEED_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_SPEED_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_SPEED_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_SPEED_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_SPEED_002_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_SPEED_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_SPEED_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_PORT_NUMBER_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_PORT_NUMBER_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_PORT_NUMBER_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_PORT_NUMBER_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_PORT_NUMBER_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_PORT_NUMBER_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_PORT_NUMBER_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_PORT_NUMBER_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_PORT_NUMBER_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_PORT_NUMBER_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_PORT_NUMBER_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_PORT_NUMBER_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_PORT_NUMBER_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_PORT_NUMBER_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_PORT_NUMBER_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_PORT_NUMBER_002_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_PORT_NUMBER_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_PORT_NUMBER_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_REG_ADDR_LEN_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_REG_ADDR_LEN_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_REG_ADDR_LEN_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_REG_ADDR_LEN_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_REG_ADDR_LEN_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_REG_ADDR_LEN_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_REG_ADDR_LEN_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_REG_ADDR_LEN_002(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_REG_ADDR_LEN_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_REG_ADDR_LEN_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_REG_ADDR_LEN_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_REG_ADDR_LEN_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_REG_ADDR_LEN_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_REG_ADDR_LEN_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_REG_ADDR_LEN_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_REG_ADDR_LEN_002_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_REG_ADDR_LEN_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_REG_ADDR_LEN_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ENH_MODE_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECC_ENABLE_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_ECCCHK_DISABLE_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_FAST_MODE_INTERRUPT_STERRING_BITS_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_FAST_MODE_INTERRUPT_STERRING_BITS_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_FAST_MODE_INTERRUPT_STERRING_BITS_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_FAST_MODE_INTERRUPT_STERRING_BITS_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_FAST_MODE_INTERRUPT_STERRING_BITS_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_FAST_MODE_INTERRUPT_STERRING_BITS_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_FAST_MODE_INTERRUPT_STERRING_BITS_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_FAST_MODE_INTERRUPT_STERRING_BITS_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_FAST_MODE_INTERRUPT_STERRING_BITS_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_FAST_MODE_INTERRUPT_STERRING_BITS_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_FAST_MODE_INTERRUPT_STERRING_BITS_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_FAST_MODE_INTERRUPT_STERRING_BITS_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_FAST_MODE_INTERRUPT_STERRING_BITS_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_FAST_MODE_INTERRUPT_STERRING_BITS_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_FAST_MODE_INTERRUPT_STERRING_BITS_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_FAST_MODE_INTERRUPT_STERRING_BITS_002_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_FAST_MODE_INTERRUPT_STERRING_BITS_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_FAST_MODE_INTERRUPT_STERRING_BITS_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_1_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_1_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_1_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_1_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_1_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_1_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_1_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_1_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_1_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_1_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_1_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_1_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_1_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_1_002_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_1_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_2_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_2_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_2_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_2_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_2_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_2_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_2_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_2_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_2_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_2_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_2_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_2_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_2_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_2_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_2_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_2_002_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_2_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_2_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_3_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_3_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_3_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_3_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_3_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_3_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_3_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_3_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_3_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_3_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_3_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_3_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_3_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_3_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_3_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_3_002_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_3_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_3_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_4_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_4_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_4_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_4_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_4_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_4_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_4_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_4_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_4_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_4_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_4_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_4_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_4_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_4_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_4_002,
           TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_4_002_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_4_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_CONTROL_REGISTER_D_PIB_CNTR_REG_DATA_4_002]

//>> PREP_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E]

//>> GET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E]

//>> PUT_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E]


//>> SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ0_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ0_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ0_003,
           TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ0_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ0_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ0_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ0_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ0_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ0_003,
           TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ0_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ0_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ0_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ0_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ0_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ0_003,
           TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ0_003_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ0_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ0_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ2_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ2_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ2_003,
           TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ2_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ2_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ2_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ2_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ2_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ2_003,
           TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ2_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ2_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ2_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ2_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ2_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ2_003,
           TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ2_003_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ2_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ2_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ3_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ3_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ3_003,
           TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ3_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ3_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ3_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ3_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ3_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ3_003,
           TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ3_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ3_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ3_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ3_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ3_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ3_003,
           TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ3_003_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ3_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ3_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ4_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ4_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ4_003,
           TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ4_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ4_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ4_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ4_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ4_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ4_003,
           TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ4_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ4_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ4_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ4_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ4_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ4_003,
           TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ4_003_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ4_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_FIFO_BITS_READ4_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_PEEK_DATA1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_PEEK_DATA1_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_PEEK_DATA1_003,
           TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_PEEK_DATA1_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_PEEK_DATA1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_PEEK_DATA1_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_PEEK_DATA1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_PEEK_DATA1_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_PEEK_DATA1_003,
           TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_PEEK_DATA1_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_PEEK_DATA1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_PEEK_DATA1_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_PEEK_DATA1_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_PEEK_DATA1_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_PEEK_DATA1_003,
           TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_PEEK_DATA1_003_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_PEEK_DATA1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_PEEK_DATA1_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003]
static inline bool GET_TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_FIFO4_REGISTER_READ_E_LBUS_PARITY_ERR1_003]

//>> PREP_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C]

//>> GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C]

//>> PUT_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C]


//>> SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001]

//>> SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001]

//>> SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001]

//>> GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001]

//>> GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001]
static inline bool GET_TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_IMM_RESET_S_SCL_C_IMM_RESET_S_SCL_001]

//>> PREP_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B]

//>> GET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B]

//>> PUT_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B]


//>> SET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000]

//>> SET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000]

//>> GET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000]
static inline bool GET_TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_IMM_SET_S_SDA_B_IMM_SET_S_SDA_000]

//>> PREP_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D]

//>> PUT_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D]


//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INVALID_CMD_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERROR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_OV_ERROR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_BE_ACC_ERROR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_ARBITRATION_LOST_ERROR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_NACK_RECEIVED_ERROR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_DATA_REQUEST_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_CMD_COMPLETE_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_STOP_ERROR_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_I2C_BUSY_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_NOT_I2C_BUSY_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_1_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SCL_EQ_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_1_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_INT_CONDS_SDA_EQ_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_PEEK_DATA1_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_PEEK_DATA1_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_PEEK_DATA1_002,
           TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_PEEK_DATA1_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_PEEK_DATA1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_PEEK_DATA1_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_PEEK_DATA1_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_PEEK_DATA1_002(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_PEEK_DATA1_002,
           TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_PEEK_DATA1_002_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_PEEK_DATA1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_PEEK_DATA1_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_PEEK_DATA1_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_PEEK_DATA1_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_PEEK_DATA1_002,
           TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_PEEK_DATA1_002_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_PEEK_DATA1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_PEEK_DATA1_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002]

//>> CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002]
static inline bool GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_COND_D_LBUS_PARITY_ERR1_002]

//>> PREP_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO]

//>> PUT_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO,
                           TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_AND, TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO]

//>> PREP_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_AND(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_AND]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_AND(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_AND;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_AND]

//>> PUT_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_AND(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO,
                           TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_AND, TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_AND]

//>> PREP_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_OR(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_OR]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_OR(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_OR]

//>> PUT_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_OR(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO,
                           TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_AND, TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_OR]


//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_INT_MASK_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_INT_MASK_003(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO,
                           TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_AND, TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_INT_MASK_003,
           TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_INT_MASK_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_INT_MASK_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_INT_MASK_003]

//>> SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_INT_MASK_003]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_INT_MASK_003(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO,
                           TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_AND, TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_INT_MASK_003,
           TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_INT_MASK_003_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_INT_MASK_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_INT_MASK_003]

//>> GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_INT_MASK_003]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_INT_MASK_003(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO,
                           TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_AND, TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_INT_MASK_003,
           TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_INT_MASK_003_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_INT_MASK_003 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_I2CM_INTERRUPT_MASK_REGISTER_E_INT_MASK_003]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
