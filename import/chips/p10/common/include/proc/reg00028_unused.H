/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/proc/reg00028_unused.H $      */
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

#ifndef __PROC_REG00028_H_UNUSED__
#define __PROC_REG00028_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace proc
{
#endif


//>> PREP_[TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2]

//>> GET_[TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2]

//>> PUT_[TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2]


//>> SET_[TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2_MULTICAST2_GROUP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2_MULTICAST2_GROUP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2_MULTICAST2_GROUP,
           TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2_MULTICAST2_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2_MULTICAST2_GROUP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2_MULTICAST2_GROUP]

//>> SET_[TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2_MULTICAST2_GROUP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2_MULTICAST2_GROUP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2_MULTICAST2_GROUP,
           TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2_MULTICAST2_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2_MULTICAST2_GROUP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2_MULTICAST2_GROUP]

//>> GET_[TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2_MULTICAST2_GROUP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2_MULTICAST2_GROUP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2_MULTICAST2_GROUP,
           TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2_MULTICAST2_GROUP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2_MULTICAST2_GROUP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN0_MULTICAST_GROUP_2_MULTICAST2_GROUP]

//>> PREP_[TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG]

//>> GET_[TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG]

//>> PUT_[TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG]


//>> SET_[TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV]

//>> SET_[TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV]

//>> SET_[TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV]

//>> GET_[TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV]

//>> GET_[TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV]
static inline bool GET_TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN0_RECOV_INTERRUPT_REG_RECOV]

//>> PREP_[TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG]

//>> PUT_[TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG]


//>> SET_[TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG_LOCK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG_LOCK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG_LOCK,
           TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG_LOCK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG_LOCK]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG_LOCK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG_LOCK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG_LOCK,
           TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG_LOCK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG_LOCK]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG_LOCK]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG_LOCK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG_LOCK,
           TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG_LOCK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_PLL_LOCK_REG_LOCK]

//>> PREP_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG]

//>> PUT_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG]


//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_HANG_PULSE_REG_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_HANG_PULSE_REG_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_HANG_PULSE_REG_0,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_HANG_PULSE_REG_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_HANG_PULSE_REG_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_HANG_PULSE_REG_0]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_HANG_PULSE_REG_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_HANG_PULSE_REG_0(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_HANG_PULSE_REG_0,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_HANG_PULSE_REG_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_HANG_PULSE_REG_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_HANG_PULSE_REG_0]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_HANG_PULSE_REG_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_HANG_PULSE_REG_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_HANG_PULSE_REG_0,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_HANG_PULSE_REG_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_HANG_PULSE_REG_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_HANG_PULSE_REG_0]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_0_REG_SUPPRESS_HANG_0]

//>> PREP_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG]

//>> PUT_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG]


//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_HANG_PULSE_REG_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_HANG_PULSE_REG_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_HANG_PULSE_REG_1,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_HANG_PULSE_REG_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_HANG_PULSE_REG_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_HANG_PULSE_REG_1]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_HANG_PULSE_REG_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_HANG_PULSE_REG_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_HANG_PULSE_REG_1,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_HANG_PULSE_REG_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_HANG_PULSE_REG_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_HANG_PULSE_REG_1]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_HANG_PULSE_REG_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_HANG_PULSE_REG_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_HANG_PULSE_REG_1,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_HANG_PULSE_REG_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_HANG_PULSE_REG_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_HANG_PULSE_REG_1]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_1_REG_SUPPRESS_HANG_1]

//>> PREP_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG]

//>> PUT_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG]


//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_HANG_PULSE_REG_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_HANG_PULSE_REG_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_HANG_PULSE_REG_2,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_HANG_PULSE_REG_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_HANG_PULSE_REG_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_HANG_PULSE_REG_2]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_HANG_PULSE_REG_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_HANG_PULSE_REG_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_HANG_PULSE_REG_2,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_HANG_PULSE_REG_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_HANG_PULSE_REG_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_HANG_PULSE_REG_2]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_HANG_PULSE_REG_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_HANG_PULSE_REG_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_HANG_PULSE_REG_2,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_HANG_PULSE_REG_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_HANG_PULSE_REG_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_HANG_PULSE_REG_2]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_2_REG_SUPPRESS_HANG_2]

//>> PREP_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG]

//>> PUT_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG]


//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_HANG_PULSE_REG_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_HANG_PULSE_REG_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_HANG_PULSE_REG_3,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_HANG_PULSE_REG_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_HANG_PULSE_REG_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_HANG_PULSE_REG_3]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_HANG_PULSE_REG_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_HANG_PULSE_REG_3(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_HANG_PULSE_REG_3,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_HANG_PULSE_REG_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_HANG_PULSE_REG_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_HANG_PULSE_REG_3]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_HANG_PULSE_REG_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_HANG_PULSE_REG_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_HANG_PULSE_REG_3,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_HANG_PULSE_REG_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_HANG_PULSE_REG_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_HANG_PULSE_REG_3]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_3_REG_SUPPRESS_HANG_3]

//>> PREP_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG]

//>> PUT_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG]


//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_HANG_PULSE_REG_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_HANG_PULSE_REG_4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_HANG_PULSE_REG_4,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_HANG_PULSE_REG_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_HANG_PULSE_REG_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_HANG_PULSE_REG_4]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_HANG_PULSE_REG_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_HANG_PULSE_REG_4(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_HANG_PULSE_REG_4,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_HANG_PULSE_REG_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_HANG_PULSE_REG_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_HANG_PULSE_REG_4]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_HANG_PULSE_REG_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_HANG_PULSE_REG_4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_HANG_PULSE_REG_4,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_HANG_PULSE_REG_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_HANG_PULSE_REG_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_HANG_PULSE_REG_4]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_4_REG_SUPPRESS_HANG_4]

//>> PREP_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG]

//>> PUT_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG]


//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_HANG_PULSE_REG_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_HANG_PULSE_REG_5(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_HANG_PULSE_REG_5,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_HANG_PULSE_REG_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_HANG_PULSE_REG_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_HANG_PULSE_REG_5]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_HANG_PULSE_REG_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_HANG_PULSE_REG_5(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_HANG_PULSE_REG_5,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_HANG_PULSE_REG_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_HANG_PULSE_REG_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_HANG_PULSE_REG_5]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_HANG_PULSE_REG_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_HANG_PULSE_REG_5(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_HANG_PULSE_REG_5,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_HANG_PULSE_REG_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_HANG_PULSE_REG_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_HANG_PULSE_REG_5]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_5_REG_SUPPRESS_HANG_5]

//>> PREP_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG]

//>> PUT_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG]


//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_HANG_PULSE_REG_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_HANG_PULSE_REG_6(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_HANG_PULSE_REG_6,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_HANG_PULSE_REG_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_HANG_PULSE_REG_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_HANG_PULSE_REG_6]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_HANG_PULSE_REG_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_HANG_PULSE_REG_6(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_HANG_PULSE_REG_6,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_HANG_PULSE_REG_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_HANG_PULSE_REG_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_HANG_PULSE_REG_6]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_HANG_PULSE_REG_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_HANG_PULSE_REG_6(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_HANG_PULSE_REG_6,
           TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_HANG_PULSE_REG_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_HANG_PULSE_REG_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_HANG_PULSE_REG_6]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> PREP_[TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2]

//>> PUT_[TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2]


//>> SET_[TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2_MULTICAST2_GROUP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2_MULTICAST2_GROUP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2_MULTICAST2_GROUP,
           TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2_MULTICAST2_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2_MULTICAST2_GROUP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2_MULTICAST2_GROUP]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2_MULTICAST2_GROUP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2_MULTICAST2_GROUP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2_MULTICAST2_GROUP,
           TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2_MULTICAST2_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2_MULTICAST2_GROUP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2_MULTICAST2_GROUP]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2_MULTICAST2_GROUP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2_MULTICAST2_GROUP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2_MULTICAST2_GROUP,
           TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2_MULTICAST2_GROUP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2_MULTICAST2_GROUP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_MULTICAST_GROUP_2_MULTICAST2_GROUP]

//>> PREP_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW]

//>> PUT_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW]

//>> PREP_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND]

//>> PUT_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND]

//>> PREP_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR]

//>> PUT_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR]


//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCC_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_PDLY_BYPASS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE0_CLK_SKEWADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE1_CLK_SKEWADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE2_CLK_SKEWADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CACHE3_CLK_SKEWADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE0_CLK_DCADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE1_CLK_DCADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE2_CLK_DCADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.setBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC]

//>> CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.clearBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC]
static inline bool GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.getBit<TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_CORE3_CLK_DCADJUST_RESET_DC]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_PCB_ACCESS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_PCB_ACCESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_PCB_ACCESS,
           TP_TPCHIP_NET_PCBSLPERV_CTRL1_PCB_ACCESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_PCB_ACCESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_PCB_ACCESS]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_PCB_ACCESS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_PCB_ACCESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_PCB_ACCESS,
           TP_TPCHIP_NET_PCBSLPERV_CTRL1_PCB_ACCESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_PCB_ACCESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_PCB_ACCESS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_PCB_ACCESS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_CTRL1_PCB_ACCESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW, TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WAND,
                           TP_TPCHIP_NET_PCBSLPERV_CTRL1_RW_WOR));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_CTRL1_PCB_ACCESS,
           TP_TPCHIP_NET_PCBSLPERV_CTRL1_PCB_ACCESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_CTRL1_PCB_ACCESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_CTRL1_PCB_ACCESS]

//>> PREP_[TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG]

//>> PUT_[TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG]


//>> SET_[TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG_LOCK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG_LOCK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG_LOCK,
           TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG_LOCK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG_LOCK]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG_LOCK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG_LOCK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG_LOCK,
           TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG_LOCK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG_LOCK]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG_LOCK]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG_LOCK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG_LOCK,
           TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG_LOCK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_PLL_LOCK_REG_LOCK]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C18;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C18;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C18, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C18, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C30(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C30;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C30(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C30;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C30, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C30(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C30));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C30, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C30));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C30));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
