/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pauc/reg00013_unused.H $      */
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

#ifndef __PAUC_REG00013_H_UNUSED__
#define __PAUC_REG00013_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> PREP_[PB_PTL_FIR_WOF_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PTL_FIR_WOF_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PTL_FIR_WOF_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PTL_FIR_WOF_REG]

//>> GET_[PB_PTL_FIR_WOF_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PTL_FIR_WOF_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PTL_FIR_WOF_REG;
#endif
    return fapi2::getScom(i_target, PB_PTL_FIR_WOF_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PTL_FIR_WOF_REG]

//>> PUT_[PB_PTL_FIR_WOF_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PTL_FIR_WOF_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PTL_FIR_WOF_REG));
#endif
    return fapi2::putScom(i_target, PB_PTL_FIR_WOF_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PTL_FIR_WOF_REG]


//>> SET_[PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF]
static inline fapi2::buffer<uint64_t>& SET_PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PTL_FIR_WOF_REG));
#endif
    return o_data.insertFromRight<PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF,
           PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF]

//>> SET_[PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF]
static inline fapi2::buffer<uint64_t>& SET_PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PTL_FIR_WOF_REG));
#endif
    return o_data.insertFromRight<PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF,
           PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF]

//>> GET_[PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF]
static inline fapi2::buffer<uint64_t>& GET_PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PTL_FIR_WOF_REG));
#endif
    return i_data.extractToRight<PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF,
           PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF]

//>> PREP_[PHY_PPE_WRAP_XIDBGPRO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PHY_PPE_WRAP_XIDBGPRO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_XIDBGPRO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PHY_PPE_WRAP_XIDBGPRO]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PHY_PPE_WRAP_XIDBGPRO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_XIDBGPRO;
#endif
    return fapi2::getScom(i_target, PHY_PPE_WRAP_XIDBGPRO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO]

//>> PUT_[PHY_PPE_WRAP_XIDBGPRO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PHY_PPE_WRAP_XIDBGPRO(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return fapi2::putScom(i_target, PHY_PPE_WRAP_XIDBGPRO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PHY_PPE_WRAP_XIDBGPRO]


//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_HS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_HS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_HS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_HS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_HC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_HC,
           PHY_PPE_WRAP_XIDBGPRO_XSR_HC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_HC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_HC,
           PHY_PPE_WRAP_XIDBGPRO_XSR_HC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HC]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HC]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_HC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_HC,
           PHY_PPE_WRAP_XIDBGPRO_XSR_HC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_HCP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_HCP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_HCP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_HCP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_RIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_RIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_RIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_RIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_SIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_SIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_SIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_SIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_IAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_IAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_IAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_IAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC,
           PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC,
           PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC,
           PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_TRH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_TRH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_TRH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_TRH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SMS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_SMS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_SMS,
           PHY_PPE_WRAP_XIDBGPRO_XSR_SMS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SMS]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SMS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_SMS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_SMS,
           PHY_PPE_WRAP_XIDBGPRO_XSR_SMS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SMS]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SMS]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_SMS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_SMS,
           PHY_PPE_WRAP_XIDBGPRO_XSR_SMS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SMS]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_EP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_EP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_EP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_EP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_PTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_PTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_ST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_ST(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_ST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_ST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_MFE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_MFE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_MFE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_MFE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MCS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_MCS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_MCS,
           PHY_PPE_WRAP_XIDBGPRO_XSR_MCS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MCS]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MCS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_MCS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_MCS,
           PHY_PPE_WRAP_XIDBGPRO_XSR_MCS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MCS]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MCS]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_MCS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_MCS,
           PHY_PPE_WRAP_XIDBGPRO_XSR_MCS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MCS]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_IAR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_IAR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_IAR,
           PHY_PPE_WRAP_XIDBGPRO_IAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_IAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_IAR]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_IAR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_IAR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_IAR,
           PHY_PPE_WRAP_XIDBGPRO_IAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_IAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_IAR]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_IAR]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_IAR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_IAR,
           PHY_PPE_WRAP_XIDBGPRO_IAR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_IAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_IAR]

//>> PREP_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TXIRLM_REGS_TX_IMPCAL_SWO4_PB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_SWO4_PB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TXIRLM_REGS_TX_IMPCAL_SWO4_PB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_SWO4_PB;
#endif
    return fapi2::getScom(i_target, TXIRLM_REGS_TX_IMPCAL_SWO4_PB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB]

//>> PUT_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TXIRLM_REGS_TX_IMPCAL_SWO4_PB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO4_PB));
#endif
    return fapi2::putScom(i_target, TXIRLM_REGS_TX_IMPCAL_SWO4_PB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB]


//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO4_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31,
           TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO4_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31,
           TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO4_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31,
           TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31]

//>> PREP_[CC_ATOMIC_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CC_ATOMIC_LOCK_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CC_ATOMIC_LOCK_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CC_ATOMIC_LOCK_REG]

//>> GET_[CC_ATOMIC_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CC_ATOMIC_LOCK_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CC_ATOMIC_LOCK_REG;
#endif
    return fapi2::getScom(i_target, CC_ATOMIC_LOCK_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CC_ATOMIC_LOCK_REG]

//>> PUT_[CC_ATOMIC_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CC_ATOMIC_LOCK_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return fapi2::putScom(i_target, CC_ATOMIC_LOCK_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CC_ATOMIC_LOCK_REG]


//>> SET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<CC_ATOMIC_LOCK_REG_LOCK_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> SET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_LOCK_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<CC_ATOMIC_LOCK_REG_LOCK_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> SET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.setBit<CC_ATOMIC_LOCK_REG_LOCK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> CLEAR_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CC_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.clearBit<CC_ATOMIC_LOCK_REG_LOCK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> GET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CC_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return i_data.extractToRight<CC_ATOMIC_LOCK_REG_LOCK_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> GET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline bool GET_CC_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return i_data.getBit<CC_ATOMIC_LOCK_REG_LOCK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> SET_[CC_ATOMIC_LOCK_REG_ID]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_ID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<CC_ATOMIC_LOCK_REG_ID,
           CC_ATOMIC_LOCK_REG_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_ID]

//>> SET_[CC_ATOMIC_LOCK_REG_ID]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_ID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<CC_ATOMIC_LOCK_REG_ID,
           CC_ATOMIC_LOCK_REG_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_ID]

//>> GET_[CC_ATOMIC_LOCK_REG_ID]
static inline fapi2::buffer<uint64_t>& GET_CC_ATOMIC_LOCK_REG_ID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return i_data.extractToRight<CC_ATOMIC_LOCK_REG_ID,
           CC_ATOMIC_LOCK_REG_ID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CC_ATOMIC_LOCK_REG_ID]

//>> SET_[CC_ATOMIC_LOCK_REG_ACTIVITY]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_ACTIVITY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<CC_ATOMIC_LOCK_REG_ACTIVITY,
           CC_ATOMIC_LOCK_REG_ACTIVITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_ACTIVITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_ACTIVITY]

//>> SET_[CC_ATOMIC_LOCK_REG_ACTIVITY]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_ACTIVITY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<CC_ATOMIC_LOCK_REG_ACTIVITY,
           CC_ATOMIC_LOCK_REG_ACTIVITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_ACTIVITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_ACTIVITY]

//>> GET_[CC_ATOMIC_LOCK_REG_ACTIVITY]
static inline fapi2::buffer<uint64_t>& GET_CC_ATOMIC_LOCK_REG_ACTIVITY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return i_data.extractToRight<CC_ATOMIC_LOCK_REG_ACTIVITY,
           CC_ATOMIC_LOCK_REG_ACTIVITY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_ACTIVITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CC_ATOMIC_LOCK_REG_ACTIVITY]

//>> PREP_[PRIMARY_ADDRESS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PRIMARY_ADDRESS_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PRIMARY_ADDRESS_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PRIMARY_ADDRESS_REG]

//>> GET_[PRIMARY_ADDRESS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PRIMARY_ADDRESS_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PRIMARY_ADDRESS_REG;
#endif
    return fapi2::getScom(i_target, PRIMARY_ADDRESS_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PRIMARY_ADDRESS_REG]

//>> PUT_[PRIMARY_ADDRESS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PRIMARY_ADDRESS_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PRIMARY_ADDRESS_REG));
#endif
    return fapi2::putScom(i_target, PRIMARY_ADDRESS_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PRIMARY_ADDRESS_REG]


//>> SET_[PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PRIMARY_ADDRESS_REG));
#endif
    return o_data.insertFromRight<PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS,
           PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS]

//>> SET_[PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PRIMARY_ADDRESS_REG));
#endif
    return o_data.insertFromRight<PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS,
           PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS]

//>> GET_[PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PRIMARY_ADDRESS_REG));
#endif
    return i_data.extractToRight<PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS,
           PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS]

//>> PREP_[SCAN_UPDATEDR_LONG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SCAN_UPDATEDR_LONG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCAN_UPDATEDR_LONG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SCAN_UPDATEDR_LONG]

//>> GET_[SCAN_UPDATEDR_LONG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SCAN_UPDATEDR_LONG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCAN_UPDATEDR_LONG;
#endif
    return fapi2::getScom(i_target, SCAN_UPDATEDR_LONG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SCAN_UPDATEDR_LONG]

//>> PUT_[SCAN_UPDATEDR_LONG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SCAN_UPDATEDR_LONG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SCAN_UPDATEDR_LONG));
#endif
    return fapi2::putScom(i_target, SCAN_UPDATEDR_LONG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SCAN_UPDATEDR_LONG]


//>> SET_[SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG]
static inline fapi2::buffer<uint64_t>& SET_SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_UPDATEDR_LONG));
#endif
    return o_data.insertFromRight<SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG,
           SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG]

//>> SET_[SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG]
static inline fapi2::buffer<uint64_t>& SET_SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_UPDATEDR_LONG));
#endif
    return o_data.insertFromRight<SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG,
           SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG]

//>> GET_[SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG]
static inline fapi2::buffer<uint64_t>& GET_SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_UPDATEDR_LONG));
#endif
    return i_data.extractToRight<SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG,
           SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG]

//>> PREP_[TRA0_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_9;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR0_CONFIG_9]

//>> GET_[TRA0_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_9;
#endif
    return fapi2::getScom(i_target, TRA0_TR0_CONFIG_9, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9]

//>> PUT_[TRA0_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return fapi2::putScom(i_target, TRA0_TR0_CONFIG_9, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR0_CONFIG_9]


//>> SET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> CLEAR_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline bool GET_TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> CLEAR_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline bool GET_TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHA_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHA_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHA_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> GET_[TRA0_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_MATCHA_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHB_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHB_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHB_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> GET_[TRA0_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_MATCHB_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHC_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHC_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHC_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> GET_[TRA0_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_MATCHC_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHD_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHD_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHD_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> GET_[TRA0_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_MATCHD_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_OR_MASK,
           TRA0_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_OR_MASK,
           TRA0_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG0_OR_MASK,
           TRA0_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_AND_MASK,
           TRA0_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_AND_MASK,
           TRA0_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG0_AND_MASK,
           TRA0_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_OR_MASK,
           TRA0_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_OR_MASK,
           TRA0_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG1_OR_MASK,
           TRA0_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_AND_MASK,
           TRA0_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_AND_MASK,
           TRA0_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG1_AND_MASK,
           TRA0_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> CLEAR_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline bool GET_TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> CLEAR_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline bool GET_TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCH_NOT_MODE,
           TRA0_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCH_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCH_NOT_MODE,
           TRA0_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> GET_[TRA0_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_MATCH_NOT_MODE,
           TRA0_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_CMP_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> CLEAR_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline bool GET_TRA0_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> CLEAR_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline bool GET_TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> CLEAR_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline bool GET_TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> CLEAR_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline bool GET_TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> CLEAR_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline bool GET_TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[TRA0_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_SPARE_LT]

//>> SET_[TRA0_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_SPARE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_SPARE_LT]

//>> SET_[TRA0_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_SPARE_LT]

//>> CLEAR_[TRA0_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_SPARE_LT]

//>> GET_[TRA0_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_SPARE_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_SPARE_LT]

//>> GET_[TRA0_TR0_CONFIG_9_SPARE_LT]
static inline bool GET_TRA0_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_SPARE_LT]

//>> PREP_[TRA0_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_CONFIG_0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR1_CONFIG_0]

//>> GET_[TRA0_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_CONFIG_0;
#endif
    return fapi2::getScom(i_target, TRA0_TR1_CONFIG_0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_0]

//>> PUT_[TRA0_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_0));
#endif
    return fapi2::putScom(i_target, TRA0_TR1_CONFIG_0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR1_CONFIG_0]


//>> SET_[TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_0));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> SET_[TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_0));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> GET_[TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_0));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> PREP_[CC_ATOMIC_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CC_ATOMIC_LOCK_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CC_ATOMIC_LOCK_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CC_ATOMIC_LOCK_REG]

//>> GET_[CC_ATOMIC_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CC_ATOMIC_LOCK_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CC_ATOMIC_LOCK_REG;
#endif
    return fapi2::getScom(i_target, CC_ATOMIC_LOCK_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CC_ATOMIC_LOCK_REG]

//>> PUT_[CC_ATOMIC_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CC_ATOMIC_LOCK_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return fapi2::putScom(i_target, CC_ATOMIC_LOCK_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CC_ATOMIC_LOCK_REG]


//>> SET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<CC_ATOMIC_LOCK_REG_LOCK_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> SET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_LOCK_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<CC_ATOMIC_LOCK_REG_LOCK_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> SET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.setBit<CC_ATOMIC_LOCK_REG_LOCK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> CLEAR_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CC_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.clearBit<CC_ATOMIC_LOCK_REG_LOCK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> GET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CC_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return i_data.extractToRight<CC_ATOMIC_LOCK_REG_LOCK_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> GET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline bool GET_CC_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return i_data.getBit<CC_ATOMIC_LOCK_REG_LOCK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> SET_[CC_ATOMIC_LOCK_REG_ID]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_ID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<CC_ATOMIC_LOCK_REG_ID,
           CC_ATOMIC_LOCK_REG_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_ID]

//>> SET_[CC_ATOMIC_LOCK_REG_ID]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_ID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<CC_ATOMIC_LOCK_REG_ID,
           CC_ATOMIC_LOCK_REG_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_ID]

//>> GET_[CC_ATOMIC_LOCK_REG_ID]
static inline fapi2::buffer<uint64_t>& GET_CC_ATOMIC_LOCK_REG_ID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return i_data.extractToRight<CC_ATOMIC_LOCK_REG_ID,
           CC_ATOMIC_LOCK_REG_ID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CC_ATOMIC_LOCK_REG_ID]

//>> SET_[CC_ATOMIC_LOCK_REG_ACTIVITY]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_ACTIVITY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<CC_ATOMIC_LOCK_REG_ACTIVITY,
           CC_ATOMIC_LOCK_REG_ACTIVITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_ACTIVITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_ACTIVITY]

//>> SET_[CC_ATOMIC_LOCK_REG_ACTIVITY]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_ACTIVITY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<CC_ATOMIC_LOCK_REG_ACTIVITY,
           CC_ATOMIC_LOCK_REG_ACTIVITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_ACTIVITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_ACTIVITY]

//>> GET_[CC_ATOMIC_LOCK_REG_ACTIVITY]
static inline fapi2::buffer<uint64_t>& GET_CC_ATOMIC_LOCK_REG_ACTIVITY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return i_data.extractToRight<CC_ATOMIC_LOCK_REG_ACTIVITY,
           CC_ATOMIC_LOCK_REG_ACTIVITY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access CC_ATOMIC_LOCK_REG_ACTIVITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CC_ATOMIC_LOCK_REG_ACTIVITY]

//>> PREP_[PB_PTL_FIR_WOF_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PTL_FIR_WOF_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PTL_FIR_WOF_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PTL_FIR_WOF_REG]

//>> GET_[PB_PTL_FIR_WOF_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PTL_FIR_WOF_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PTL_FIR_WOF_REG;
#endif
    return fapi2::getScom(i_target, PB_PTL_FIR_WOF_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PTL_FIR_WOF_REG]

//>> PUT_[PB_PTL_FIR_WOF_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PTL_FIR_WOF_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PTL_FIR_WOF_REG));
#endif
    return fapi2::putScom(i_target, PB_PTL_FIR_WOF_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PTL_FIR_WOF_REG]


//>> SET_[PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF]
static inline fapi2::buffer<uint64_t>& SET_PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PTL_FIR_WOF_REG));
#endif
    return o_data.insertFromRight<PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF,
           PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF]

//>> SET_[PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF]
static inline fapi2::buffer<uint64_t>& SET_PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PTL_FIR_WOF_REG));
#endif
    return o_data.insertFromRight<PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF,
           PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF]

//>> GET_[PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF]
static inline fapi2::buffer<uint64_t>& GET_PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PTL_FIR_WOF_REG));
#endif
    return i_data.extractToRight<PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF,
           PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PTL_FIR_WOF_REG_PB_PTL_FIR_WOF]

//>> PREP_[PHY_PPE_WRAP_XIDBGPRO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PHY_PPE_WRAP_XIDBGPRO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_XIDBGPRO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PHY_PPE_WRAP_XIDBGPRO]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PHY_PPE_WRAP_XIDBGPRO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_XIDBGPRO;
#endif
    return fapi2::getScom(i_target, PHY_PPE_WRAP_XIDBGPRO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO]

//>> PUT_[PHY_PPE_WRAP_XIDBGPRO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PHY_PPE_WRAP_XIDBGPRO(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return fapi2::putScom(i_target, PHY_PPE_WRAP_XIDBGPRO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PHY_PPE_WRAP_XIDBGPRO]


//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_HS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_HS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_HS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_HS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_HC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_HC,
           PHY_PPE_WRAP_XIDBGPRO_XSR_HC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_HC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_HC,
           PHY_PPE_WRAP_XIDBGPRO_XSR_HC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HC]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HC]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_HC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_HC,
           PHY_PPE_WRAP_XIDBGPRO_XSR_HC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_HCP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_HCP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_HCP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_HCP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_RIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_RIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_RIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_RIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_SIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_SIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_SIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_SIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_IAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_IAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_IAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_IAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC,
           PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC,
           PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC,
           PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_TRH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_TRH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_TRH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_TRH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SMS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_SMS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_SMS,
           PHY_PPE_WRAP_XIDBGPRO_XSR_SMS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SMS]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SMS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_SMS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_SMS,
           PHY_PPE_WRAP_XIDBGPRO_XSR_SMS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SMS]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SMS]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_SMS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_SMS,
           PHY_PPE_WRAP_XIDBGPRO_XSR_SMS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_SMS]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_EP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_EP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_EP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_EP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_PTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_PTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_ST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_ST(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_ST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_ST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_MFE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_MFE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_MFE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<PHY_PPE_WRAP_XIDBGPRO_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_XIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_XIDBGPRO_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_MFE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline bool GET_PHY_PPE_WRAP_XIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<PHY_PPE_WRAP_XIDBGPRO_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MCS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_MCS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_MCS,
           PHY_PPE_WRAP_XIDBGPRO_XSR_MCS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MCS]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MCS]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_XSR_MCS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_XSR_MCS,
           PHY_PPE_WRAP_XIDBGPRO_XSR_MCS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MCS]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MCS]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_XSR_MCS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_XSR_MCS,
           PHY_PPE_WRAP_XIDBGPRO_XSR_MCS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_XSR_MCS]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_IAR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_IAR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_IAR,
           PHY_PPE_WRAP_XIDBGPRO_IAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_IAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_IAR]

//>> SET_[PHY_PPE_WRAP_XIDBGPRO_IAR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIDBGPRO_IAR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIDBGPRO_IAR,
           PHY_PPE_WRAP_XIDBGPRO_IAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_IAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIDBGPRO_IAR]

//>> GET_[PHY_PPE_WRAP_XIDBGPRO_IAR]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIDBGPRO_IAR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIDBGPRO_IAR,
           PHY_PPE_WRAP_XIDBGPRO_IAR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIDBGPRO_IAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIDBGPRO_IAR]

//>> PREP_[PRIMARY_ADDRESS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PRIMARY_ADDRESS_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PRIMARY_ADDRESS_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PRIMARY_ADDRESS_REG]

//>> GET_[PRIMARY_ADDRESS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PRIMARY_ADDRESS_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PRIMARY_ADDRESS_REG;
#endif
    return fapi2::getScom(i_target, PRIMARY_ADDRESS_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PRIMARY_ADDRESS_REG]

//>> PUT_[PRIMARY_ADDRESS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PRIMARY_ADDRESS_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PRIMARY_ADDRESS_REG));
#endif
    return fapi2::putScom(i_target, PRIMARY_ADDRESS_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PRIMARY_ADDRESS_REG]


//>> SET_[PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PRIMARY_ADDRESS_REG));
#endif
    return o_data.insertFromRight<PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS,
           PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS]

//>> SET_[PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PRIMARY_ADDRESS_REG));
#endif
    return o_data.insertFromRight<PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS,
           PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS]

//>> GET_[PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PRIMARY_ADDRESS_REG));
#endif
    return i_data.extractToRight<PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS,
           PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS]

//>> PREP_[SCAN_UPDATEDR_LONG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SCAN_UPDATEDR_LONG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCAN_UPDATEDR_LONG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SCAN_UPDATEDR_LONG]

//>> GET_[SCAN_UPDATEDR_LONG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SCAN_UPDATEDR_LONG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCAN_UPDATEDR_LONG;
#endif
    return fapi2::getScom(i_target, SCAN_UPDATEDR_LONG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SCAN_UPDATEDR_LONG]

//>> PUT_[SCAN_UPDATEDR_LONG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SCAN_UPDATEDR_LONG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SCAN_UPDATEDR_LONG));
#endif
    return fapi2::putScom(i_target, SCAN_UPDATEDR_LONG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SCAN_UPDATEDR_LONG]


//>> SET_[SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG]
static inline fapi2::buffer<uint64_t>& SET_SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_UPDATEDR_LONG));
#endif
    return o_data.insertFromRight<SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG,
           SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG]

//>> SET_[SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG]
static inline fapi2::buffer<uint64_t>& SET_SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_UPDATEDR_LONG));
#endif
    return o_data.insertFromRight<SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG,
           SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG]

//>> GET_[SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG]
static inline fapi2::buffer<uint64_t>& GET_SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_UPDATEDR_LONG));
#endif
    return i_data.extractToRight<SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG,
           SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG]

//>> PREP_[TRA0_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_9;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR0_CONFIG_9]

//>> GET_[TRA0_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_9;
#endif
    return fapi2::getScom(i_target, TRA0_TR0_CONFIG_9, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9]

//>> PUT_[TRA0_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return fapi2::putScom(i_target, TRA0_TR0_CONFIG_9, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR0_CONFIG_9]


//>> SET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> CLEAR_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline bool GET_TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> CLEAR_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline bool GET_TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHA_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHA_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHA_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> GET_[TRA0_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_MATCHA_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHB_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHB_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHB_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> GET_[TRA0_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_MATCHB_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHC_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHC_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHC_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> GET_[TRA0_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_MATCHC_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHD_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHD_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHD_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> GET_[TRA0_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_MATCHD_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_OR_MASK,
           TRA0_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_OR_MASK,
           TRA0_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG0_OR_MASK,
           TRA0_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_AND_MASK,
           TRA0_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_AND_MASK,
           TRA0_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG0_AND_MASK,
           TRA0_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_OR_MASK,
           TRA0_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_OR_MASK,
           TRA0_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG1_OR_MASK,
           TRA0_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_AND_MASK,
           TRA0_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_AND_MASK,
           TRA0_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG1_AND_MASK,
           TRA0_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> CLEAR_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline bool GET_TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> CLEAR_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline bool GET_TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCH_NOT_MODE,
           TRA0_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCH_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCH_NOT_MODE,
           TRA0_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> GET_[TRA0_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_MATCH_NOT_MODE,
           TRA0_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_CMP_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> CLEAR_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline bool GET_TRA0_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> CLEAR_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline bool GET_TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> CLEAR_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline bool GET_TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> CLEAR_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline bool GET_TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> CLEAR_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline bool GET_TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[TRA0_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_SPARE_LT]

//>> SET_[TRA0_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_SPARE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_SPARE_LT]

//>> SET_[TRA0_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_SPARE_LT]

//>> CLEAR_[TRA0_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_SPARE_LT]

//>> GET_[TRA0_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_SPARE_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_SPARE_LT]

//>> GET_[TRA0_TR0_CONFIG_9_SPARE_LT]
static inline bool GET_TRA0_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_SPARE_LT]

//>> PREP_[TRA0_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_CONFIG_0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR1_CONFIG_0]

//>> GET_[TRA0_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_CONFIG_0;
#endif
    return fapi2::getScom(i_target, TRA0_TR1_CONFIG_0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_0]

//>> PUT_[TRA0_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_0));
#endif
    return fapi2::putScom(i_target, TRA0_TR1_CONFIG_0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR1_CONFIG_0]


//>> SET_[TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_0));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> SET_[TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_0));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> GET_[TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_0));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> PREP_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TXIRLM_REGS_TX_IMPCAL_SWO4_PB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_SWO4_PB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TXIRLM_REGS_TX_IMPCAL_SWO4_PB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_SWO4_PB;
#endif
    return fapi2::getScom(i_target, TXIRLM_REGS_TX_IMPCAL_SWO4_PB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB]

//>> PUT_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TXIRLM_REGS_TX_IMPCAL_SWO4_PB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO4_PB));
#endif
    return fapi2::putScom(i_target, TXIRLM_REGS_TX_IMPCAL_SWO4_PB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB]


//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO4_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31,
           TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO4_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31,
           TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO4_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31,
           TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO4_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_16_31]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
