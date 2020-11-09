/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_proc/reg00014_unused.H $  */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020                                                         */
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

#ifndef __PPE_PROC_REG00014_H_UNUSED__
#define __PPE_PROC_REG00014_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_proc
{
#endif


//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL]


//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR]


//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE]


//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL]


//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR]


//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE]


//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL]


//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL,
           TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR]


//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]

//>> CLEAR_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]
static inline bool GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW, TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR,
                           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE,
           TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
