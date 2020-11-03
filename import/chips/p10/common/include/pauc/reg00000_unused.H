/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pauc/reg00000_unused.H $      */
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

#ifndef __PAUC_REG00000_H_UNUSED__
#define __PAUC_REG00000_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> PREP_[PB_MAILBOX_20_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_MAILBOX_20_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_20_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_MAILBOX_20_REG]

//>> GET_[PB_MAILBOX_20_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_MAILBOX_20_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_20_REG;
#endif
    return fapi2::getScom(i_target, PB_MAILBOX_20_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_MAILBOX_20_REG]

//>> PUT_[PB_MAILBOX_20_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_MAILBOX_20_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_MAILBOX_20_REG));
#endif
    return fapi2::putScom(i_target, PB_MAILBOX_20_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_MAILBOX_20_REG]


//>> PREP_[PB_MAILBOX_21_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_MAILBOX_21_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_21_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_MAILBOX_21_REG]

//>> GET_[PB_MAILBOX_21_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_MAILBOX_21_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_21_REG;
#endif
    return fapi2::getScom(i_target, PB_MAILBOX_21_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_MAILBOX_21_REG]

//>> PUT_[PB_MAILBOX_21_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_MAILBOX_21_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_MAILBOX_21_REG));
#endif
    return fapi2::putScom(i_target, PB_MAILBOX_21_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_MAILBOX_21_REG]


//>> PREP_[PHY_PPE_WRAP_XIRAMDBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PHY_PPE_WRAP_XIRAMDBG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_XIRAMDBG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PHY_PPE_WRAP_XIRAMDBG]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PHY_PPE_WRAP_XIRAMDBG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_XIRAMDBG;
#endif
    return fapi2::getScom(i_target, PHY_PPE_WRAP_XIRAMDBG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG]

//>> PUT_[PHY_PPE_WRAP_XIRAMDBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PHY_PPE_WRAP_XIRAMDBG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return fapi2::putScom(i_target, PHY_PPE_WRAP_XIRAMDBG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PHY_PPE_WRAP_XIRAMDBG]


//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_HS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_HS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_HS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_HS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_HS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_HS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_HS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_HS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_HS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_HC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_HC,
           PHY_PPE_WRAP_XIRAMDBG_XSR_HC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_HC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_HC,
           PHY_PPE_WRAP_XIRAMDBG_XSR_HC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HC]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HC]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_HC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_HC,
           PHY_PPE_WRAP_XIRAMDBG_XSR_HC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_HCP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_HCP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_HCP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_HCP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_HCP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_HCP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_HCP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_HCP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_HCP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_RIP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_RIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_RIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_RIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_RIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_RIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_RIP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_RIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_RIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_SIP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_SIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_SIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_SIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_SIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_SIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_SIP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_SIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_SIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_IAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_IAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_IAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_IAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_IAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_IAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_IAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_IAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_IAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC,
           PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC,
           PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC,
           PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_TRH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_TRH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_TRH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_TRH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_TRH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_TRH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_TRH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_TRH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_TRH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SMS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_SMS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_SMS,
           PHY_PPE_WRAP_XIRAMDBG_XSR_SMS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SMS]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SMS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_SMS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_SMS,
           PHY_PPE_WRAP_XIRAMDBG_XSR_SMS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SMS]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SMS]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_SMS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_SMS,
           PHY_PPE_WRAP_XIRAMDBG_XSR_SMS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SMS]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_EP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_EP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_EP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_EP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_EP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_EP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_EP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_EP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_EP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_PTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_PTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_PTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_PTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_PTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_PTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_PTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_ST(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_ST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_ST(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_ST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_ST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_ST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_ST(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_ST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_ST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_MFE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_MFE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_MFE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_MFE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_MFE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_MFE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_MFE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_MFE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_MFE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MCS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_MCS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_MCS,
           PHY_PPE_WRAP_XIRAMDBG_XSR_MCS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MCS]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MCS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_MCS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_MCS,
           PHY_PPE_WRAP_XIRAMDBG_XSR_MCS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MCS]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MCS]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_MCS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_MCS,
           PHY_PPE_WRAP_XIRAMDBG_XSR_MCS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MCS]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0,
           PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0,
           PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0,
           PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0]

//>> PREP_[PHY_PPE_WRAP_XIRAMRA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PHY_PPE_WRAP_XIRAMRA(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_XIRAMRA;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PHY_PPE_WRAP_XIRAMRA]

//>> GET_[PHY_PPE_WRAP_XIRAMRA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PHY_PPE_WRAP_XIRAMRA(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_XIRAMRA;
#endif
    return fapi2::getScom(i_target, PHY_PPE_WRAP_XIRAMRA, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMRA]

//>> PUT_[PHY_PPE_WRAP_XIRAMRA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PHY_PPE_WRAP_XIRAMRA(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMRA));
#endif
    return fapi2::putScom(i_target, PHY_PPE_WRAP_XIRAMRA, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PHY_PPE_WRAP_XIRAMRA]


//>> SET_[PHY_PPE_WRAP_XIRAMRA_XCR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMRA_XCR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMRA));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMRA_XCR,
           PHY_PPE_WRAP_XIRAMRA_XCR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMRA_XCR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMRA_XCR]

//>> SET_[PHY_PPE_WRAP_XIRAMRA_XCR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMRA_XCR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMRA));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMRA_XCR,
           PHY_PPE_WRAP_XIRAMRA_XCR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMRA_XCR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMRA_XCR]

//>> GET_[PHY_PPE_WRAP_XIRAMRA_XCR]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMRA_XCR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMRA));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMRA_XCR,
           PHY_PPE_WRAP_XIRAMRA_XCR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMRA_XCR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMRA_XCR]

//>> SET_[PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMRA));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0,
           PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0]

//>> SET_[PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMRA));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0,
           PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0]

//>> GET_[PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMRA));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0,
           PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0]

//>> PREP_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TXIRLM_REGS_TX_IMPCAL_SWO9_PB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_SWO9_PB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_SWO9_PB;
#endif
    return fapi2::getScom(i_target, TXIRLM_REGS_TX_IMPCAL_SWO9_PB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB]

//>> PUT_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TXIRLM_REGS_TX_IMPCAL_SWO9_PB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return fapi2::putScom(i_target, TXIRLM_REGS_TX_IMPCAL_SWO9_PB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB]


//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP,
           TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP,
           TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP,
           TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.setBit<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]

//>> CLEAR_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]
static inline fapi2::buffer<uint64_t>& CLEAR_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.clearBit<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]
static inline bool GET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return i_data.getBit<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.setBit<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]

//>> CLEAR_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]
static inline fapi2::buffer<uint64_t>& CLEAR_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.clearBit<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]
static inline bool GET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return i_data.getBit<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.setBit<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]

//>> CLEAR_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]
static inline fapi2::buffer<uint64_t>& CLEAR_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.clearBit<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]
static inline bool GET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return i_data.getBit<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]

//>> PREP_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB]

//>> GET_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB;
#endif
    return fapi2::getScom(i_target, TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB]

//>> PUT_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB));
#endif
    return fapi2::putScom(i_target, TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB]


//>> SET_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ,
           TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ]

//>> SET_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ,
           TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ]

//>> GET_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ,
           TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ]

//>> PREP_[EPS_DBG_INST1_COND_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_INST1_COND_REG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_INST1_COND_REG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_INST1_COND_REG_2]

//>> GET_[EPS_DBG_INST1_COND_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_INST1_COND_REG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_INST1_COND_REG_2;
#endif
    return fapi2::getScom(i_target, EPS_DBG_INST1_COND_REG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_2]

//>> PUT_[EPS_DBG_INST1_COND_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_INST1_COND_REG_2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return fapi2::putScom(i_target, EPS_DBG_INST1_COND_REG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_INST1_COND_REG_2]


//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A]

//>> GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B]

//>> GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A]

//>> GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B]

//>> GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B]

//>> SET_[EPS_DBG_INST1_COND_REG_2_TO_CMP_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_TO_CMP_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_TO_CMP_LT,
           EPS_DBG_INST1_COND_REG_2_TO_CMP_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_TO_CMP_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_TO_CMP_LT]

//>> SET_[EPS_DBG_INST1_COND_REG_2_TO_CMP_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_TO_CMP_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_TO_CMP_LT,
           EPS_DBG_INST1_COND_REG_2_TO_CMP_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_TO_CMP_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_TO_CMP_LT]

//>> GET_[EPS_DBG_INST1_COND_REG_2_TO_CMP_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_2_TO_CMP_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_2_TO_CMP_LT,
           EPS_DBG_INST1_COND_REG_2_TO_CMP_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_TO_CMP_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_2_TO_CMP_LT]

//>> PREP_[EPS_DBG_INST2_COND_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_INST2_COND_REG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_INST2_COND_REG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_INST2_COND_REG_2]

//>> GET_[EPS_DBG_INST2_COND_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_INST2_COND_REG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_INST2_COND_REG_2;
#endif
    return fapi2::getScom(i_target, EPS_DBG_INST2_COND_REG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_2]

//>> PUT_[EPS_DBG_INST2_COND_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_INST2_COND_REG_2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return fapi2::putScom(i_target, EPS_DBG_INST2_COND_REG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_INST2_COND_REG_2]


//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A]

//>> GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B]

//>> GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A]

//>> GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B]

//>> GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B]

//>> SET_[EPS_DBG_INST2_COND_REG_2_TO_CMP_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_TO_CMP_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_TO_CMP_LT,
           EPS_DBG_INST2_COND_REG_2_TO_CMP_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_TO_CMP_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_TO_CMP_LT]

//>> SET_[EPS_DBG_INST2_COND_REG_2_TO_CMP_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_TO_CMP_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_TO_CMP_LT,
           EPS_DBG_INST2_COND_REG_2_TO_CMP_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_TO_CMP_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_TO_CMP_LT]

//>> GET_[EPS_DBG_INST2_COND_REG_2_TO_CMP_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_2_TO_CMP_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_2_TO_CMP_LT,
           EPS_DBG_INST2_COND_REG_2_TO_CMP_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_TO_CMP_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_2_TO_CMP_LT]

//>> PREP_[EPS_DBG_XTRA_TRACE_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_XTRA_TRACE_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_XTRA_TRACE_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_XTRA_TRACE_MODE]

//>> GET_[EPS_DBG_XTRA_TRACE_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_XTRA_TRACE_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_XTRA_TRACE_MODE;
#endif
    return fapi2::getScom(i_target, EPS_DBG_XTRA_TRACE_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_XTRA_TRACE_MODE]

//>> PUT_[EPS_DBG_XTRA_TRACE_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_XTRA_TRACE_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_XTRA_TRACE_MODE));
#endif
    return fapi2::putScom(i_target, EPS_DBG_XTRA_TRACE_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_XTRA_TRACE_MODE]


//>> SET_[EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_XTRA_TRACE_MODE));
#endif
    return o_data.insertFromRight<EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA,
           EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA]

//>> SET_[EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_XTRA_TRACE_MODE));
#endif
    return o_data.insertFromRight<EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA,
           EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA]

//>> GET_[EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_XTRA_TRACE_MODE));
#endif
    return i_data.extractToRight<EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA,
           EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA]

//>> PREP_[EPS_FIR_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_FIR_MODE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_MODE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_FIR_MODE_REG]

//>> GET_[EPS_FIR_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_FIR_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_MODE_REG;
#endif
    return fapi2::getScom(i_target, EPS_FIR_MODE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_FIR_MODE_REG]

//>> PUT_[EPS_FIR_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_FIR_MODE_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return fapi2::putScom(i_target, EPS_FIR_MODE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_FIR_MODE_REG]


//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_XSTOP_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK]

//>> CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_XSTOP_LOCK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_XSTOP_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_XSTOP_LOCK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_XSTOP_LOCK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK]
static inline bool GET_EPS_FIR_MODE_REG_XSTOP_LOCK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_XSTOP_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]

//>> CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]
static inline bool GET_EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]

//>> CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]
static inline bool GET_EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]

//>> CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]
static inline bool GET_EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]

//>> CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]
static inline bool GET_EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG05(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG05]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG05(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG05]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG05]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG05]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG05]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG05]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG05(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG05]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG05]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG05]

//>> SET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_DISABLE_IOPB_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_DISABLE_IOPB_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_DISABLE_IOPB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]

//>> SET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_DISABLE_IOPB_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_DISABLE_IOPB_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_DISABLE_IOPB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]

//>> SET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_DISABLE_IOPB_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_DISABLE_IOPB_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_DISABLE_IOPB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]

//>> CLEAR_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_DISABLE_IOPB_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_DISABLE_IOPB_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_DISABLE_IOPB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]

//>> GET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_DISABLE_IOPB_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_DISABLE_IOPB_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_DISABLE_IOPB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]

//>> GET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]
static inline bool GET_EPS_FIR_MODE_REG_DISABLE_IOPB_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_DISABLE_IOPB_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_DISABLE_IOPB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG07(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG07]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG07(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG07]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG07]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG07]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG07]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG07]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG07(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG07]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG07]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG07]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG08(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG08]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG08(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG08]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG08]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG08]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG08]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG08]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG08(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG08]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG08]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG08]

//>> SET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MASK_DIRECT_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MASK_DIRECT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MASK_DIRECT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]

//>> SET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MASK_DIRECT_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MASK_DIRECT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MASK_DIRECT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]

//>> SET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MASK_DIRECT_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MASK_DIRECT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MASK_DIRECT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]

//>> CLEAR_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MASK_DIRECT_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MASK_DIRECT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MASK_DIRECT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]

//>> GET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MASK_DIRECT_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MASK_DIRECT_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MASK_DIRECT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]

//>> GET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]
static inline bool GET_EPS_FIR_MODE_REG_MASK_DIRECT_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MASK_DIRECT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MASK_DIRECT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG10]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG10]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG10]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG10]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG10]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG10]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG10]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG10]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG10]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG11]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG11]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG11]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG11]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG11]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG11]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG11]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG11]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG11]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG12]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG12]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG12]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG12]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG12]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG12]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG12]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG12]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG12]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG13]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG13]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG13]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG13]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG13]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG13]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG13]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG13]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG13]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG14]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG14]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG14]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG14]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG14]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG14]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG14]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG14]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG14]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG15]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG15]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG15]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG15]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG15]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG15]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG15]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG15]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG15]

//>> PREP_[EPS_THERM_WSUB_DTS_TRC_RESULT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_DTS_TRC_RESULT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_DTS_TRC_RESULT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_DTS_TRC_RESULT]

//>> GET_[EPS_THERM_WSUB_DTS_TRC_RESULT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_DTS_TRC_RESULT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_DTS_TRC_RESULT;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_DTS_TRC_RESULT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_DTS_TRC_RESULT]

//>> PUT_[EPS_THERM_WSUB_DTS_TRC_RESULT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_DTS_TRC_RESULT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_DTS_TRC_RESULT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_DTS_TRC_RESULT]


//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE,
           EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]

//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE,
           EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]

//>> GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE,
           EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]

//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.setBit<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> CLEAR_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline bool GET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return i_data.getBit<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT,
           EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]

//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT,
           EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]

//>> GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT,
           EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]

//>> PREP_[SCAN_CAPTUREDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SCAN_CAPTUREDR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCAN_CAPTUREDR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SCAN_CAPTUREDR]

//>> GET_[SCAN_CAPTUREDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SCAN_CAPTUREDR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCAN_CAPTUREDR;
#endif
    return fapi2::getScom(i_target, SCAN_CAPTUREDR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SCAN_CAPTUREDR]

//>> PUT_[SCAN_CAPTUREDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SCAN_CAPTUREDR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SCAN_CAPTUREDR));
#endif
    return fapi2::putScom(i_target, SCAN_CAPTUREDR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SCAN_CAPTUREDR]


//>> SET_[SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG]
static inline fapi2::buffer<uint64_t>& SET_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_CAPTUREDR));
#endif
    return o_data.insertFromRight<SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG,
           SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG]

//>> SET_[SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG]
static inline fapi2::buffer<uint64_t>& SET_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_CAPTUREDR));
#endif
    return o_data.insertFromRight<SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG,
           SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG]

//>> GET_[SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG]
static inline fapi2::buffer<uint64_t>& GET_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_CAPTUREDR));
#endif
    return i_data.extractToRight<SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG,
           SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG]

//>> PREP_[TRA0_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR0_CONFIG_4]

//>> GET_[TRA0_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_4;
#endif
    return fapi2::getScom(i_target, TRA0_TR0_CONFIG_4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_4]

//>> PUT_[TRA0_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_4));
#endif
    return fapi2::putScom(i_target, TRA0_TR0_CONFIG_4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR0_CONFIG_4]


//>> SET_[TRA0_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_4_A,
           TRA0_TR0_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_4_A]

//>> SET_[TRA0_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_4_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_4_A,
           TRA0_TR0_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_4_A]

//>> GET_[TRA0_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_4));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_4_A,
           TRA0_TR0_CONFIG_4_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_4_A]

//>> SET_[TRA0_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_4_B,
           TRA0_TR0_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_4_B]

//>> SET_[TRA0_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_4_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_4_B,
           TRA0_TR0_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_4_B]

//>> GET_[TRA0_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_4));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_4_B,
           TRA0_TR0_CONFIG_4_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_4_B]

//>> PREP_[TRA1_TR0_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA1_TR0_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_TRACE_LO_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA1_TR0_TRACE_LO_DATA_REG]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA1_TR0_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_TRACE_LO_DATA_REG;
#endif
    return fapi2::getScom(i_target, TRA1_TR0_TRACE_LO_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG]

//>> PUT_[TRA1_TR0_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA1_TR0_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return fapi2::putScom(i_target, TRA1_TR0_TRACE_LO_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA1_TR0_TRACE_LO_DATA_REG]


//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA,
           TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA,
           TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA,
           TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS,
           TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS,
           TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS,
           TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK,
           TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK,
           TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK,
           TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> CLEAR_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline bool GET_TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> CLEAR_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline bool GET_TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_RUNNING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<TRA1_TR0_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> CLEAR_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA1_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<TRA1_TR0_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<TRA1_TR0_TRACE_LO_DATA_REG_RUNNING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline bool GET_TRA1_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<TRA1_TR0_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> PREP_[PB_PSAVE01_MISC_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PSAVE01_MISC_CFG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PSAVE01_MISC_CFG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PSAVE01_MISC_CFG]

//>> GET_[PB_PSAVE01_MISC_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PSAVE01_MISC_CFG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PSAVE01_MISC_CFG;
#endif
    return fapi2::getScom(i_target, PB_PSAVE01_MISC_CFG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG]

//>> PUT_[PB_PSAVE01_MISC_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PSAVE01_MISC_CFG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return fapi2::putScom(i_target, PB_PSAVE01_MISC_CFG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PSAVE01_MISC_CFG]


//>> SET_[PB_PSAVE01_MISC_CFG_HALF_LUC]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_HALF_LUC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_HALF_LUC,
           PB_PSAVE01_MISC_CFG_HALF_LUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_LUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_HALF_LUC]

//>> SET_[PB_PSAVE01_MISC_CFG_HALF_LUC]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_HALF_LUC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_HALF_LUC,
           PB_PSAVE01_MISC_CFG_HALF_LUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_LUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_HALF_LUC]

//>> GET_[PB_PSAVE01_MISC_CFG_HALF_LUC]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_HALF_LUC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_HALF_LUC,
           PB_PSAVE01_MISC_CFG_HALF_LUC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_LUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_HALF_LUC]

//>> SET_[PB_PSAVE01_MISC_CFG_HALF_HUC]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_HALF_HUC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_HALF_HUC,
           PB_PSAVE01_MISC_CFG_HALF_HUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_HUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_HALF_HUC]

//>> SET_[PB_PSAVE01_MISC_CFG_HALF_HUC]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_HALF_HUC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_HALF_HUC,
           PB_PSAVE01_MISC_CFG_HALF_HUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_HUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_HALF_HUC]

//>> GET_[PB_PSAVE01_MISC_CFG_HALF_HUC]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_HALF_HUC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_HALF_HUC,
           PB_PSAVE01_MISC_CFG_HALF_HUC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_HUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_HALF_HUC]

//>> SET_[PB_PSAVE01_MISC_CFG_HALF_LUT]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_HALF_LUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_HALF_LUT,
           PB_PSAVE01_MISC_CFG_HALF_LUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_LUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_HALF_LUT]

//>> SET_[PB_PSAVE01_MISC_CFG_HALF_LUT]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_HALF_LUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_HALF_LUT,
           PB_PSAVE01_MISC_CFG_HALF_LUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_LUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_HALF_LUT]

//>> GET_[PB_PSAVE01_MISC_CFG_HALF_LUT]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_HALF_LUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_HALF_LUT,
           PB_PSAVE01_MISC_CFG_HALF_LUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_LUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_HALF_LUT]

//>> SET_[PB_PSAVE01_MISC_CFG_HALF_HUT]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_HALF_HUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_HALF_HUT,
           PB_PSAVE01_MISC_CFG_HALF_HUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_HUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_HALF_HUT]

//>> SET_[PB_PSAVE01_MISC_CFG_HALF_HUT]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_HALF_HUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_HALF_HUT,
           PB_PSAVE01_MISC_CFG_HALF_HUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_HUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_HALF_HUT]

//>> GET_[PB_PSAVE01_MISC_CFG_HALF_HUT]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_HALF_HUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_HALF_HUT,
           PB_PSAVE01_MISC_CFG_HALF_HUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_HUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_HALF_HUT]

//>> SET_[PB_PSAVE01_MISC_CFG_HALF_SPARE]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_HALF_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_HALF_SPARE,
           PB_PSAVE01_MISC_CFG_HALF_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_HALF_SPARE]

//>> SET_[PB_PSAVE01_MISC_CFG_HALF_SPARE]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_HALF_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_HALF_SPARE,
           PB_PSAVE01_MISC_CFG_HALF_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_HALF_SPARE]

//>> GET_[PB_PSAVE01_MISC_CFG_HALF_SPARE]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_HALF_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_HALF_SPARE,
           PB_PSAVE01_MISC_CFG_HALF_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_HALF_SPARE]

//>> SET_[PB_PSAVE01_MISC_CFG_QTR_LUC]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_QTR_LUC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_QTR_LUC,
           PB_PSAVE01_MISC_CFG_QTR_LUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_LUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_QTR_LUC]

//>> SET_[PB_PSAVE01_MISC_CFG_QTR_LUC]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_QTR_LUC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_QTR_LUC,
           PB_PSAVE01_MISC_CFG_QTR_LUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_LUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_QTR_LUC]

//>> GET_[PB_PSAVE01_MISC_CFG_QTR_LUC]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_QTR_LUC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_QTR_LUC,
           PB_PSAVE01_MISC_CFG_QTR_LUC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_LUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_QTR_LUC]

//>> SET_[PB_PSAVE01_MISC_CFG_QTR_HUC]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_QTR_HUC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_QTR_HUC,
           PB_PSAVE01_MISC_CFG_QTR_HUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_HUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_QTR_HUC]

//>> SET_[PB_PSAVE01_MISC_CFG_QTR_HUC]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_QTR_HUC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_QTR_HUC,
           PB_PSAVE01_MISC_CFG_QTR_HUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_HUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_QTR_HUC]

//>> GET_[PB_PSAVE01_MISC_CFG_QTR_HUC]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_QTR_HUC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_QTR_HUC,
           PB_PSAVE01_MISC_CFG_QTR_HUC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_HUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_QTR_HUC]

//>> SET_[PB_PSAVE01_MISC_CFG_QTR_LUT]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_QTR_LUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_QTR_LUT,
           PB_PSAVE01_MISC_CFG_QTR_LUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_LUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_QTR_LUT]

//>> SET_[PB_PSAVE01_MISC_CFG_QTR_LUT]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_QTR_LUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_QTR_LUT,
           PB_PSAVE01_MISC_CFG_QTR_LUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_LUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_QTR_LUT]

//>> GET_[PB_PSAVE01_MISC_CFG_QTR_LUT]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_QTR_LUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_QTR_LUT,
           PB_PSAVE01_MISC_CFG_QTR_LUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_LUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_QTR_LUT]

//>> SET_[PB_PSAVE01_MISC_CFG_QTR_HUT]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_QTR_HUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_QTR_HUT,
           PB_PSAVE01_MISC_CFG_QTR_HUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_HUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_QTR_HUT]

//>> SET_[PB_PSAVE01_MISC_CFG_QTR_HUT]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_QTR_HUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_QTR_HUT,
           PB_PSAVE01_MISC_CFG_QTR_HUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_HUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_QTR_HUT]

//>> GET_[PB_PSAVE01_MISC_CFG_QTR_HUT]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_QTR_HUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_QTR_HUT,
           PB_PSAVE01_MISC_CFG_QTR_HUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_HUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_QTR_HUT]

//>> SET_[PB_PSAVE01_MISC_CFG_QTR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_QTR_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_QTR_SPARE,
           PB_PSAVE01_MISC_CFG_QTR_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_QTR_SPARE]

//>> SET_[PB_PSAVE01_MISC_CFG_QTR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_QTR_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_QTR_SPARE,
           PB_PSAVE01_MISC_CFG_QTR_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_QTR_SPARE]

//>> GET_[PB_PSAVE01_MISC_CFG_QTR_SPARE]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_QTR_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_QTR_SPARE,
           PB_PSAVE01_MISC_CFG_QTR_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_QTR_SPARE]

//>> SET_[PB_PSAVE01_MISC_CFG_WSIZE]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_WSIZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_WSIZE,
           PB_PSAVE01_MISC_CFG_WSIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_WSIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_WSIZE]

//>> SET_[PB_PSAVE01_MISC_CFG_WSIZE]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_WSIZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_WSIZE,
           PB_PSAVE01_MISC_CFG_WSIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_WSIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_WSIZE]

//>> GET_[PB_PSAVE01_MISC_CFG_WSIZE]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_WSIZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_WSIZE,
           PB_PSAVE01_MISC_CFG_WSIZE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_WSIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_WSIZE]

//>> PREP_[EPS_DBG_INST1_COND_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_INST1_COND_REG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_INST1_COND_REG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_INST1_COND_REG_2]

//>> GET_[EPS_DBG_INST1_COND_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_INST1_COND_REG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_INST1_COND_REG_2;
#endif
    return fapi2::getScom(i_target, EPS_DBG_INST1_COND_REG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_2]

//>> PUT_[EPS_DBG_INST1_COND_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_INST1_COND_REG_2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return fapi2::putScom(i_target, EPS_DBG_INST1_COND_REG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_INST1_COND_REG_2]


//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A]

//>> GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B]

//>> GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A]

//>> GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B]

//>> GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B]

//>> SET_[EPS_DBG_INST1_COND_REG_2_TO_CMP_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_TO_CMP_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_TO_CMP_LT,
           EPS_DBG_INST1_COND_REG_2_TO_CMP_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_TO_CMP_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_TO_CMP_LT]

//>> SET_[EPS_DBG_INST1_COND_REG_2_TO_CMP_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_TO_CMP_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_TO_CMP_LT,
           EPS_DBG_INST1_COND_REG_2_TO_CMP_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_TO_CMP_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_TO_CMP_LT]

//>> GET_[EPS_DBG_INST1_COND_REG_2_TO_CMP_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_2_TO_CMP_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_2_TO_CMP_LT,
           EPS_DBG_INST1_COND_REG_2_TO_CMP_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_INST1_COND_REG_2_TO_CMP_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_2_TO_CMP_LT]

//>> PREP_[EPS_DBG_INST2_COND_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_INST2_COND_REG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_INST2_COND_REG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_INST2_COND_REG_2]

//>> GET_[EPS_DBG_INST2_COND_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_INST2_COND_REG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_INST2_COND_REG_2;
#endif
    return fapi2::getScom(i_target, EPS_DBG_INST2_COND_REG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_2]

//>> PUT_[EPS_DBG_INST2_COND_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_INST2_COND_REG_2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return fapi2::putScom(i_target, EPS_DBG_INST2_COND_REG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_INST2_COND_REG_2]


//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A]

//>> GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B]

//>> GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A]

//>> GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B]

//>> GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B]

//>> SET_[EPS_DBG_INST2_COND_REG_2_TO_CMP_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_TO_CMP_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_TO_CMP_LT,
           EPS_DBG_INST2_COND_REG_2_TO_CMP_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_TO_CMP_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_TO_CMP_LT]

//>> SET_[EPS_DBG_INST2_COND_REG_2_TO_CMP_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_TO_CMP_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_TO_CMP_LT,
           EPS_DBG_INST2_COND_REG_2_TO_CMP_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_TO_CMP_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_TO_CMP_LT]

//>> GET_[EPS_DBG_INST2_COND_REG_2_TO_CMP_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_2_TO_CMP_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_2_TO_CMP_LT,
           EPS_DBG_INST2_COND_REG_2_TO_CMP_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_INST2_COND_REG_2_TO_CMP_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_2_TO_CMP_LT]

//>> PREP_[EPS_DBG_XTRA_TRACE_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_XTRA_TRACE_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_XTRA_TRACE_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_XTRA_TRACE_MODE]

//>> GET_[EPS_DBG_XTRA_TRACE_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_XTRA_TRACE_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_XTRA_TRACE_MODE;
#endif
    return fapi2::getScom(i_target, EPS_DBG_XTRA_TRACE_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_XTRA_TRACE_MODE]

//>> PUT_[EPS_DBG_XTRA_TRACE_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_XTRA_TRACE_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_XTRA_TRACE_MODE));
#endif
    return fapi2::putScom(i_target, EPS_DBG_XTRA_TRACE_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_XTRA_TRACE_MODE]


//>> SET_[EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_XTRA_TRACE_MODE));
#endif
    return o_data.insertFromRight<EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA,
           EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA]

//>> SET_[EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_XTRA_TRACE_MODE));
#endif
    return o_data.insertFromRight<EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA,
           EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA]

//>> GET_[EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_XTRA_TRACE_MODE));
#endif
    return i_data.extractToRight<EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA,
           EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA]

//>> PREP_[EPS_FIR_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_FIR_MODE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_MODE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_FIR_MODE_REG]

//>> GET_[EPS_FIR_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_FIR_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_MODE_REG;
#endif
    return fapi2::getScom(i_target, EPS_FIR_MODE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_FIR_MODE_REG]

//>> PUT_[EPS_FIR_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_FIR_MODE_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return fapi2::putScom(i_target, EPS_FIR_MODE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_FIR_MODE_REG]


//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_XSTOP_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK]

//>> CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_XSTOP_LOCK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_XSTOP_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_XSTOP_LOCK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_XSTOP_LOCK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK]
static inline bool GET_EPS_FIR_MODE_REG_XSTOP_LOCK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_XSTOP_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]

//>> CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]
static inline bool GET_EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]

//>> CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]
static inline bool GET_EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]

//>> CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]
static inline bool GET_EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]

//>> CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]
static inline bool GET_EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG05(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG05]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG05(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG05]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG05]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG05]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG05]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG05]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG05(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG05]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG05]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG05]

//>> SET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_DISABLE_IOPB_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_DISABLE_IOPB_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_DISABLE_IOPB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]

//>> SET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_DISABLE_IOPB_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_DISABLE_IOPB_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_DISABLE_IOPB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]

//>> SET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_DISABLE_IOPB_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_DISABLE_IOPB_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_DISABLE_IOPB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]

//>> CLEAR_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_DISABLE_IOPB_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_DISABLE_IOPB_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_DISABLE_IOPB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]

//>> GET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_DISABLE_IOPB_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_DISABLE_IOPB_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_DISABLE_IOPB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]

//>> GET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]
static inline bool GET_EPS_FIR_MODE_REG_DISABLE_IOPB_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_DISABLE_IOPB_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_DISABLE_IOPB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG07(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG07]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG07(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG07]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG07]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG07]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG07]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG07]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG07(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG07]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG07]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG07]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG08(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG08]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG08(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG08]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG08]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG08]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG08]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG08]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG08(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG08]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG08]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG08]

//>> SET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MASK_DIRECT_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MASK_DIRECT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MASK_DIRECT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]

//>> SET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MASK_DIRECT_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MASK_DIRECT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MASK_DIRECT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]

//>> SET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MASK_DIRECT_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MASK_DIRECT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MASK_DIRECT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]

//>> CLEAR_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MASK_DIRECT_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MASK_DIRECT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MASK_DIRECT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]

//>> GET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MASK_DIRECT_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MASK_DIRECT_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MASK_DIRECT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]

//>> GET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]
static inline bool GET_EPS_FIR_MODE_REG_MASK_DIRECT_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MASK_DIRECT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MASK_DIRECT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG10]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG10]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG10]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG10]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG10]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG10]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG10]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG10]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG10]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG11]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG11]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG11]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG11]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG11]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG11]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG11]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG11]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG11]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG12]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG12]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG12]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG12]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG12]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG12]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG12]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG12]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG12]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG13]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG13]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG13]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG13]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG13]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG13]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG13]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG13]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG13]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG14]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG14]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG14]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG14]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG14]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG14]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG14]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG14]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG14]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG15]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG15]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG15]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG15]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG15]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG15]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG15]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG15]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_MODE_REG_MODE_REG15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG15]

//>> PREP_[EPS_THERM_WSUB_DTS_TRC_RESULT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_DTS_TRC_RESULT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_DTS_TRC_RESULT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_DTS_TRC_RESULT]

//>> GET_[EPS_THERM_WSUB_DTS_TRC_RESULT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_DTS_TRC_RESULT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_DTS_TRC_RESULT;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_DTS_TRC_RESULT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_DTS_TRC_RESULT]

//>> PUT_[EPS_THERM_WSUB_DTS_TRC_RESULT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_DTS_TRC_RESULT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_DTS_TRC_RESULT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_DTS_TRC_RESULT]


//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE,
           EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]

//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE,
           EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]

//>> GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE,
           EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]

//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.setBit<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> CLEAR_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline bool GET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return i_data.getBit<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT,
           EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]

//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT,
           EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]

//>> GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT,
           EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]

//>> PREP_[PB_MAILBOX_20_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_MAILBOX_20_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_20_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_MAILBOX_20_REG]

//>> GET_[PB_MAILBOX_20_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_MAILBOX_20_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_20_REG;
#endif
    return fapi2::getScom(i_target, PB_MAILBOX_20_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_MAILBOX_20_REG]

//>> PUT_[PB_MAILBOX_20_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_MAILBOX_20_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_MAILBOX_20_REG));
#endif
    return fapi2::putScom(i_target, PB_MAILBOX_20_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_MAILBOX_20_REG]


//>> PREP_[PB_MAILBOX_21_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_MAILBOX_21_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_21_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_MAILBOX_21_REG]

//>> GET_[PB_MAILBOX_21_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_MAILBOX_21_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_21_REG;
#endif
    return fapi2::getScom(i_target, PB_MAILBOX_21_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_MAILBOX_21_REG]

//>> PUT_[PB_MAILBOX_21_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_MAILBOX_21_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_MAILBOX_21_REG));
#endif
    return fapi2::putScom(i_target, PB_MAILBOX_21_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_MAILBOX_21_REG]


//>> PREP_[PB_PSAVE01_MISC_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PSAVE01_MISC_CFG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PSAVE01_MISC_CFG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PSAVE01_MISC_CFG]

//>> GET_[PB_PSAVE01_MISC_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PSAVE01_MISC_CFG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PSAVE01_MISC_CFG;
#endif
    return fapi2::getScom(i_target, PB_PSAVE01_MISC_CFG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG]

//>> PUT_[PB_PSAVE01_MISC_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PSAVE01_MISC_CFG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return fapi2::putScom(i_target, PB_PSAVE01_MISC_CFG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PSAVE01_MISC_CFG]


//>> SET_[PB_PSAVE01_MISC_CFG_HALF_LUC]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_HALF_LUC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_HALF_LUC,
           PB_PSAVE01_MISC_CFG_HALF_LUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_LUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_HALF_LUC]

//>> SET_[PB_PSAVE01_MISC_CFG_HALF_LUC]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_HALF_LUC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_HALF_LUC,
           PB_PSAVE01_MISC_CFG_HALF_LUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_LUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_HALF_LUC]

//>> GET_[PB_PSAVE01_MISC_CFG_HALF_LUC]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_HALF_LUC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_HALF_LUC,
           PB_PSAVE01_MISC_CFG_HALF_LUC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_LUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_HALF_LUC]

//>> SET_[PB_PSAVE01_MISC_CFG_HALF_HUC]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_HALF_HUC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_HALF_HUC,
           PB_PSAVE01_MISC_CFG_HALF_HUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_HUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_HALF_HUC]

//>> SET_[PB_PSAVE01_MISC_CFG_HALF_HUC]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_HALF_HUC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_HALF_HUC,
           PB_PSAVE01_MISC_CFG_HALF_HUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_HUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_HALF_HUC]

//>> GET_[PB_PSAVE01_MISC_CFG_HALF_HUC]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_HALF_HUC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_HALF_HUC,
           PB_PSAVE01_MISC_CFG_HALF_HUC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_HUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_HALF_HUC]

//>> SET_[PB_PSAVE01_MISC_CFG_HALF_LUT]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_HALF_LUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_HALF_LUT,
           PB_PSAVE01_MISC_CFG_HALF_LUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_LUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_HALF_LUT]

//>> SET_[PB_PSAVE01_MISC_CFG_HALF_LUT]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_HALF_LUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_HALF_LUT,
           PB_PSAVE01_MISC_CFG_HALF_LUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_LUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_HALF_LUT]

//>> GET_[PB_PSAVE01_MISC_CFG_HALF_LUT]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_HALF_LUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_HALF_LUT,
           PB_PSAVE01_MISC_CFG_HALF_LUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_LUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_HALF_LUT]

//>> SET_[PB_PSAVE01_MISC_CFG_HALF_HUT]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_HALF_HUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_HALF_HUT,
           PB_PSAVE01_MISC_CFG_HALF_HUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_HUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_HALF_HUT]

//>> SET_[PB_PSAVE01_MISC_CFG_HALF_HUT]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_HALF_HUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_HALF_HUT,
           PB_PSAVE01_MISC_CFG_HALF_HUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_HUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_HALF_HUT]

//>> GET_[PB_PSAVE01_MISC_CFG_HALF_HUT]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_HALF_HUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_HALF_HUT,
           PB_PSAVE01_MISC_CFG_HALF_HUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_HUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_HALF_HUT]

//>> SET_[PB_PSAVE01_MISC_CFG_HALF_SPARE]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_HALF_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_HALF_SPARE,
           PB_PSAVE01_MISC_CFG_HALF_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_HALF_SPARE]

//>> SET_[PB_PSAVE01_MISC_CFG_HALF_SPARE]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_HALF_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_HALF_SPARE,
           PB_PSAVE01_MISC_CFG_HALF_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_HALF_SPARE]

//>> GET_[PB_PSAVE01_MISC_CFG_HALF_SPARE]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_HALF_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_HALF_SPARE,
           PB_PSAVE01_MISC_CFG_HALF_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_HALF_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_HALF_SPARE]

//>> SET_[PB_PSAVE01_MISC_CFG_QTR_LUC]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_QTR_LUC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_QTR_LUC,
           PB_PSAVE01_MISC_CFG_QTR_LUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_LUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_QTR_LUC]

//>> SET_[PB_PSAVE01_MISC_CFG_QTR_LUC]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_QTR_LUC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_QTR_LUC,
           PB_PSAVE01_MISC_CFG_QTR_LUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_LUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_QTR_LUC]

//>> GET_[PB_PSAVE01_MISC_CFG_QTR_LUC]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_QTR_LUC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_QTR_LUC,
           PB_PSAVE01_MISC_CFG_QTR_LUC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_LUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_QTR_LUC]

//>> SET_[PB_PSAVE01_MISC_CFG_QTR_HUC]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_QTR_HUC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_QTR_HUC,
           PB_PSAVE01_MISC_CFG_QTR_HUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_HUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_QTR_HUC]

//>> SET_[PB_PSAVE01_MISC_CFG_QTR_HUC]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_QTR_HUC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_QTR_HUC,
           PB_PSAVE01_MISC_CFG_QTR_HUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_HUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_QTR_HUC]

//>> GET_[PB_PSAVE01_MISC_CFG_QTR_HUC]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_QTR_HUC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_QTR_HUC,
           PB_PSAVE01_MISC_CFG_QTR_HUC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_HUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_QTR_HUC]

//>> SET_[PB_PSAVE01_MISC_CFG_QTR_LUT]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_QTR_LUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_QTR_LUT,
           PB_PSAVE01_MISC_CFG_QTR_LUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_LUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_QTR_LUT]

//>> SET_[PB_PSAVE01_MISC_CFG_QTR_LUT]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_QTR_LUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_QTR_LUT,
           PB_PSAVE01_MISC_CFG_QTR_LUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_LUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_QTR_LUT]

//>> GET_[PB_PSAVE01_MISC_CFG_QTR_LUT]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_QTR_LUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_QTR_LUT,
           PB_PSAVE01_MISC_CFG_QTR_LUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_LUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_QTR_LUT]

//>> SET_[PB_PSAVE01_MISC_CFG_QTR_HUT]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_QTR_HUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_QTR_HUT,
           PB_PSAVE01_MISC_CFG_QTR_HUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_HUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_QTR_HUT]

//>> SET_[PB_PSAVE01_MISC_CFG_QTR_HUT]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_QTR_HUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_QTR_HUT,
           PB_PSAVE01_MISC_CFG_QTR_HUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_HUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_QTR_HUT]

//>> GET_[PB_PSAVE01_MISC_CFG_QTR_HUT]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_QTR_HUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_QTR_HUT,
           PB_PSAVE01_MISC_CFG_QTR_HUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_HUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_QTR_HUT]

//>> SET_[PB_PSAVE01_MISC_CFG_QTR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_QTR_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_QTR_SPARE,
           PB_PSAVE01_MISC_CFG_QTR_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_QTR_SPARE]

//>> SET_[PB_PSAVE01_MISC_CFG_QTR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_QTR_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_QTR_SPARE,
           PB_PSAVE01_MISC_CFG_QTR_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_QTR_SPARE]

//>> GET_[PB_PSAVE01_MISC_CFG_QTR_SPARE]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_QTR_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_QTR_SPARE,
           PB_PSAVE01_MISC_CFG_QTR_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_QTR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_QTR_SPARE]

//>> SET_[PB_PSAVE01_MISC_CFG_WSIZE]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_WSIZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_WSIZE,
           PB_PSAVE01_MISC_CFG_WSIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_WSIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_WSIZE]

//>> SET_[PB_PSAVE01_MISC_CFG_WSIZE]
static inline fapi2::buffer<uint64_t>& SET_PB_PSAVE01_MISC_CFG_WSIZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return o_data.insertFromRight<PB_PSAVE01_MISC_CFG_WSIZE,
           PB_PSAVE01_MISC_CFG_WSIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_WSIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PSAVE01_MISC_CFG_WSIZE]

//>> GET_[PB_PSAVE01_MISC_CFG_WSIZE]
static inline fapi2::buffer<uint64_t>& GET_PB_PSAVE01_MISC_CFG_WSIZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PSAVE01_MISC_CFG));
#endif
    return i_data.extractToRight<PB_PSAVE01_MISC_CFG_WSIZE,
           PB_PSAVE01_MISC_CFG_WSIZE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PSAVE01_MISC_CFG_WSIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PSAVE01_MISC_CFG_WSIZE]

//>> PREP_[PHY_PPE_WRAP_XIRAMDBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PHY_PPE_WRAP_XIRAMDBG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_XIRAMDBG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PHY_PPE_WRAP_XIRAMDBG]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PHY_PPE_WRAP_XIRAMDBG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_XIRAMDBG;
#endif
    return fapi2::getScom(i_target, PHY_PPE_WRAP_XIRAMDBG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG]

//>> PUT_[PHY_PPE_WRAP_XIRAMDBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PHY_PPE_WRAP_XIRAMDBG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return fapi2::putScom(i_target, PHY_PPE_WRAP_XIRAMDBG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PHY_PPE_WRAP_XIRAMDBG]


//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_HS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_HS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_HS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_HS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_HS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_HS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_HS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_HS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_HS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HS]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_HC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_HC,
           PHY_PPE_WRAP_XIRAMDBG_XSR_HC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_HC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_HC,
           PHY_PPE_WRAP_XIRAMDBG_XSR_HC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HC]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HC]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_HC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_HC,
           PHY_PPE_WRAP_XIRAMDBG_XSR_HC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_HCP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_HCP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_HCP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_HCP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_HCP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_HCP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_HCP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_HCP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_HCP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_HCP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_RIP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_RIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_RIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_RIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_RIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_RIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_RIP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_RIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_RIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RIP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_SIP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_SIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_SIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_SIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_SIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_SIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_SIP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_SIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_SIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SIP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRAP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_IAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_IAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_IAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_IAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_IAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_IAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_IAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_IAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_IAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_IAC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC,
           PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC,
           PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC,
           PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_SIBRC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_RDAC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_WDAC]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_WE]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_TRH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_TRH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_TRH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_TRH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_TRH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_TRH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_TRH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_TRH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_TRH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_TRH]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SMS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_SMS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_SMS,
           PHY_PPE_WRAP_XIRAMDBG_XSR_SMS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SMS]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SMS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_SMS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_SMS,
           PHY_PPE_WRAP_XIRAMDBG_XSR_SMS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SMS]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SMS]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_SMS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_SMS,
           PHY_PPE_WRAP_XIRAMDBG_XSR_SMS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_SMS]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_NULL_MSR_LP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_EP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_EP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_EP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_EP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_EP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_EP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_EP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_EP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_EP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_EP]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_PTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_PTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_PTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_PTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_PTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_PTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_PTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_PTR]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_ST(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_ST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_ST(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_ST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_ST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_ST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_ST(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_ST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_ST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_ST]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_MFE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_MFE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_MFE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_MFE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_MFE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIRAMDBG_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]

//>> CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIRAMDBG_XSR_MFE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIRAMDBG_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_MFE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_MFE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]
static inline bool GET_PHY_PPE_WRAP_XIRAMDBG_XSR_MFE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIRAMDBG_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MFE]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MCS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_MCS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_MCS,
           PHY_PPE_WRAP_XIRAMDBG_XSR_MCS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MCS]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MCS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_XSR_MCS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_XSR_MCS,
           PHY_PPE_WRAP_XIRAMDBG_XSR_MCS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MCS]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MCS]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_XSR_MCS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_XSR_MCS,
           PHY_PPE_WRAP_XIRAMDBG_XSR_MCS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_XSR_MCS]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0,
           PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0,
           PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0,
           PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_PPE_XIRAMRA_SPRG0]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_SPRG0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_SPRG0,
           PHY_PPE_WRAP_XIRAMDBG_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_SPRG0]

//>> SET_[PHY_PPE_WRAP_XIRAMDBG_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMDBG_SPRG0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMDBG_SPRG0,
           PHY_PPE_WRAP_XIRAMDBG_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMDBG_SPRG0]

//>> GET_[PHY_PPE_WRAP_XIRAMDBG_SPRG0]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMDBG_SPRG0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMDBG));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMDBG_SPRG0,
           PHY_PPE_WRAP_XIRAMDBG_SPRG0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMDBG_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMDBG_SPRG0]

//>> PREP_[PHY_PPE_WRAP_XIRAMRA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PHY_PPE_WRAP_XIRAMRA(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_XIRAMRA;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PHY_PPE_WRAP_XIRAMRA]

//>> GET_[PHY_PPE_WRAP_XIRAMRA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PHY_PPE_WRAP_XIRAMRA(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_XIRAMRA;
#endif
    return fapi2::getScom(i_target, PHY_PPE_WRAP_XIRAMRA, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMRA]

//>> PUT_[PHY_PPE_WRAP_XIRAMRA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PHY_PPE_WRAP_XIRAMRA(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMRA));
#endif
    return fapi2::putScom(i_target, PHY_PPE_WRAP_XIRAMRA, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PHY_PPE_WRAP_XIRAMRA]


//>> SET_[PHY_PPE_WRAP_XIRAMRA_XCR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMRA_XCR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMRA));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMRA_XCR,
           PHY_PPE_WRAP_XIRAMRA_XCR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMRA_XCR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMRA_XCR]

//>> SET_[PHY_PPE_WRAP_XIRAMRA_XCR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMRA_XCR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMRA));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMRA_XCR,
           PHY_PPE_WRAP_XIRAMRA_XCR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMRA_XCR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMRA_XCR]

//>> GET_[PHY_PPE_WRAP_XIRAMRA_XCR]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMRA_XCR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMRA));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMRA_XCR,
           PHY_PPE_WRAP_XIRAMRA_XCR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMRA_XCR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMRA_XCR]

//>> SET_[PHY_PPE_WRAP_XIRAMRA_PPE_XIXCR_XCR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMRA_PPE_XIXCR_XCR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMRA));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMRA_PPE_XIXCR_XCR,
           PHY_PPE_WRAP_XIRAMRA_PPE_XIXCR_XCR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMRA_PPE_XIXCR_XCR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMRA_PPE_XIXCR_XCR]

//>> SET_[PHY_PPE_WRAP_XIRAMRA_PPE_XIXCR_XCR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMRA_PPE_XIXCR_XCR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMRA));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMRA_PPE_XIXCR_XCR,
           PHY_PPE_WRAP_XIRAMRA_PPE_XIXCR_XCR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMRA_PPE_XIXCR_XCR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMRA_PPE_XIXCR_XCR]

//>> GET_[PHY_PPE_WRAP_XIRAMRA_PPE_XIXCR_XCR]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMRA_PPE_XIXCR_XCR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMRA));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMRA_PPE_XIXCR_XCR,
           PHY_PPE_WRAP_XIRAMRA_PPE_XIXCR_XCR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMRA_PPE_XIXCR_XCR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMRA_PPE_XIXCR_XCR]

//>> SET_[PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMRA));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0,
           PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0]

//>> SET_[PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMRA));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0,
           PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0]

//>> GET_[PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMRA));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0,
           PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMRA_RAMRA_SPRG0]

//>> SET_[PHY_PPE_WRAP_XIRAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMRA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMRA));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMRA_SPRG0,
           PHY_PPE_WRAP_XIRAMRA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMRA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMRA_SPRG0]

//>> SET_[PHY_PPE_WRAP_XIRAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMRA_SPRG0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMRA));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMRA_SPRG0,
           PHY_PPE_WRAP_XIRAMRA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMRA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMRA_SPRG0]

//>> GET_[PHY_PPE_WRAP_XIRAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMRA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMRA));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMRA_SPRG0,
           PHY_PPE_WRAP_XIRAMRA_SPRG0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMRA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMRA_SPRG0]

//>> PREP_[SCAN_CAPTUREDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SCAN_CAPTUREDR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCAN_CAPTUREDR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SCAN_CAPTUREDR]

//>> GET_[SCAN_CAPTUREDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SCAN_CAPTUREDR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCAN_CAPTUREDR;
#endif
    return fapi2::getScom(i_target, SCAN_CAPTUREDR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SCAN_CAPTUREDR]

//>> PUT_[SCAN_CAPTUREDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SCAN_CAPTUREDR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SCAN_CAPTUREDR));
#endif
    return fapi2::putScom(i_target, SCAN_CAPTUREDR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SCAN_CAPTUREDR]


//>> SET_[SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG]
static inline fapi2::buffer<uint64_t>& SET_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_CAPTUREDR));
#endif
    return o_data.insertFromRight<SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG,
           SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG]

//>> SET_[SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG]
static inline fapi2::buffer<uint64_t>& SET_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_CAPTUREDR));
#endif
    return o_data.insertFromRight<SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG,
           SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG]

//>> GET_[SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG]
static inline fapi2::buffer<uint64_t>& GET_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_CAPTUREDR));
#endif
    return i_data.extractToRight<SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG,
           SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG]

//>> PREP_[TRA0_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR0_CONFIG_4]

//>> GET_[TRA0_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_4;
#endif
    return fapi2::getScom(i_target, TRA0_TR0_CONFIG_4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_4]

//>> PUT_[TRA0_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_4));
#endif
    return fapi2::putScom(i_target, TRA0_TR0_CONFIG_4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR0_CONFIG_4]


//>> SET_[TRA0_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_4_A,
           TRA0_TR0_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_4_A]

//>> SET_[TRA0_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_4_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_4_A,
           TRA0_TR0_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_4_A]

//>> GET_[TRA0_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_4));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_4_A,
           TRA0_TR0_CONFIG_4_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_4_A]

//>> SET_[TRA0_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_4_B,
           TRA0_TR0_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_4_B]

//>> SET_[TRA0_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_4_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_4_B,
           TRA0_TR0_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_4_B]

//>> GET_[TRA0_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_4));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_4_B,
           TRA0_TR0_CONFIG_4_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_4_B]

//>> PREP_[TRA1_TR0_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA1_TR0_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = TRA1_TR0_TRACE_LO_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA1_TR0_TRACE_LO_DATA_REG]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA1_TR0_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = TRA1_TR0_TRACE_LO_DATA_REG;
#endif
    return fapi2::getScom(i_target, TRA1_TR0_TRACE_LO_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG]

//>> PUT_[TRA1_TR0_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA1_TR0_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return fapi2::putScom(i_target, TRA1_TR0_TRACE_LO_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA1_TR0_TRACE_LO_DATA_REG]


//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA,
           TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA,
           TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA,
           TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS,
           TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS,
           TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS,
           TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK,
           TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK,
           TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK,
           TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> CLEAR_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline bool GET_TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> CLEAR_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline bool GET_TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_RUNNING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<TRA1_TR0_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> CLEAR_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA1_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<TRA1_TR0_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<TRA1_TR0_TRACE_LO_DATA_REG_RUNNING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline bool GET_TRA1_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<TRA1_TR0_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> SET_[TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> GET_[TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> PREP_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TXIRLM_REGS_TX_IMPCAL_SWO9_PB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_SWO9_PB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_SWO9_PB;
#endif
    return fapi2::getScom(i_target, TXIRLM_REGS_TX_IMPCAL_SWO9_PB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB]

//>> PUT_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TXIRLM_REGS_TX_IMPCAL_SWO9_PB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return fapi2::putScom(i_target, TXIRLM_REGS_TX_IMPCAL_SWO9_PB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB]


//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP,
           TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP,
           TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP,
           TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XP]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.setBit<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]

//>> CLEAR_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]
static inline fapi2::buffer<uint64_t>& CLEAR_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.clearBit<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]
static inline bool GET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return i_data.getBit<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_1R_4XN]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.setBit<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]

//>> CLEAR_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]
static inline fapi2::buffer<uint64_t>& CLEAR_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.clearBit<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]
static inline bool GET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return i_data.getBit<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XP]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.setBit<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]

//>> CLEAR_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]
static inline fapi2::buffer<uint64_t>& CLEAR_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return o_data.clearBit<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]
static inline bool GET_TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO9_PB));
#endif
    return i_data.getBit<TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO9_PB_2R_1XN]

//>> PREP_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB]

//>> GET_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB;
#endif
    return fapi2::getScom(i_target, TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB]

//>> PUT_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB));
#endif
    return fapi2::putScom(i_target, TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB]


//>> SET_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ,
           TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ]

//>> SET_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ,
           TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ]

//>> GET_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ,
           TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_ZCAL_FIR_ERROR_INJECT_PB_ZCAL_FIR_ERR_INJ]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
