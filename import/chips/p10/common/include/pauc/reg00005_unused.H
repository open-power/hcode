/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pauc/reg00005_unused.H $      */
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

#ifndef __PAUC_REG00005_H_UNUSED__
#define __PAUC_REG00005_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> PREP_[DL_PPE_WRAP_XIDBGPRO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_XIDBGPRO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_XIDBGPRO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_XIDBGPRO]

//>> GET_[DL_PPE_WRAP_XIDBGPRO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_XIDBGPRO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_XIDBGPRO;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_XIDBGPRO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO]

//>> PUT_[DL_PPE_WRAP_XIDBGPRO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_XIDBGPRO(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_XIDBGPRO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_XIDBGPRO]


//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_HS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_HS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_HS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_HS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_HC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_HC,
           DL_PPE_WRAP_XIDBGPRO_XSR_HC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_HC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_HC,
           DL_PPE_WRAP_XIDBGPRO_XSR_HC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HC]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_HC]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_HC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_HC,
           DL_PPE_WRAP_XIDBGPRO_XSR_HC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_HC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_HCP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_HCP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_HCP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_HCP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_RIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_RIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_RIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_RIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_SIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_SIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_SIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_SIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_TRAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_TRAP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_TRAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_TRAP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_IAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_IAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_IAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_IAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC,
           DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC,
           DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC,
           DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_RDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_RDAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_RDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_RDAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_WDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_WDAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_WDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_WDAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_TRH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_TRH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_TRH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_TRH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_SMS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_SMS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_SMS,
           DL_PPE_WRAP_XIDBGPRO_XSR_SMS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_SMS]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_SMS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_SMS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_SMS,
           DL_PPE_WRAP_XIDBGPRO_XSR_SMS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_SMS]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_SMS]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_SMS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_SMS,
           DL_PPE_WRAP_XIDBGPRO_XSR_SMS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_SMS]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_EP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_EP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_EP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_EP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_PTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_PTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_ST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_ST(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_ST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_ST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_MFE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_MFE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_MFE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_MFE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_MCS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_MCS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_MCS,
           DL_PPE_WRAP_XIDBGPRO_XSR_MCS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_MCS]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_MCS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_MCS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_MCS,
           DL_PPE_WRAP_XIDBGPRO_XSR_MCS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_MCS]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_MCS]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_MCS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_MCS,
           DL_PPE_WRAP_XIDBGPRO_XSR_MCS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_MCS]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_IAR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_IAR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_IAR,
           DL_PPE_WRAP_XIDBGPRO_IAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_IAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_IAR]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_IAR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_IAR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_IAR,
           DL_PPE_WRAP_XIDBGPRO_IAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_IAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_IAR]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_IAR]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_IAR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_IAR,
           DL_PPE_WRAP_XIDBGPRO_IAR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_IAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_IAR]

//>> PREP_[DL_PPE_WRAP_SCOM_WORK_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_SCOM_WORK_REG1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_SCOM_WORK_REG1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_SCOM_WORK_REG1]

//>> GET_[DL_PPE_WRAP_SCOM_WORK_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_SCOM_WORK_REG1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_SCOM_WORK_REG1;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_SCOM_WORK_REG1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_WORK_REG1]

//>> PUT_[DL_PPE_WRAP_SCOM_WORK_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_SCOM_WORK_REG1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_WORK_REG1));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_SCOM_WORK_REG1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_SCOM_WORK_REG1]


//>> SET_[DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_WORK_REG1));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1,
           DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1]

//>> SET_[DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_WORK_REG1));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1,
           DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1]

//>> GET_[DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_WORK_REG1));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1,
           DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1]

//>> PREP_[PB_CNPM_PMU_PRESCALER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_CNPM_PMU_PRESCALER(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_CNPM_PMU_PRESCALER;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_CNPM_PMU_PRESCALER]

//>> GET_[PB_CNPM_PMU_PRESCALER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_CNPM_PMU_PRESCALER(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_CNPM_PMU_PRESCALER;
#endif
    return fapi2::getScom(i_target, PB_CNPM_PMU_PRESCALER, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER]

//>> PUT_[PB_CNPM_PMU_PRESCALER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_CNPM_PMU_PRESCALER(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return fapi2::putScom(i_target, PB_CNPM_PMU_PRESCALER, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_CNPM_PMU_PRESCALER]


//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3]

//>> PREP_[PB_DOB01_DIB01_INT_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_DOB01_DIB01_INT_ERR_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_DOB01_DIB01_INT_ERR_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_DOB01_DIB01_INT_ERR_REG]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_DOB01_DIB01_INT_ERR_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_DOB01_DIB01_INT_ERR_REG;
#endif
    return fapi2::getScom(i_target, PB_DOB01_DIB01_INT_ERR_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG]

//>> PUT_[PB_DOB01_DIB01_INT_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_DOB01_DIB01_INT_ERR_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return fapi2::putScom(i_target, PB_DOB01_DIB01_INT_ERR_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_DOB01_DIB01_INT_ERR_REG]


//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]

//>> PREP_[PB_MAILBOX_30_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_MAILBOX_30_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_30_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_MAILBOX_30_REG]

//>> GET_[PB_MAILBOX_30_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_MAILBOX_30_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_30_REG;
#endif
    return fapi2::getScom(i_target, PB_MAILBOX_30_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_MAILBOX_30_REG]

//>> PUT_[PB_MAILBOX_30_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_MAILBOX_30_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_MAILBOX_30_REG));
#endif
    return fapi2::putScom(i_target, PB_MAILBOX_30_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_MAILBOX_30_REG]


//>> PREP_[PB_MAILBOX_31_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_MAILBOX_31_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_31_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_MAILBOX_31_REG]

//>> GET_[PB_MAILBOX_31_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_MAILBOX_31_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_31_REG;
#endif
    return fapi2::getScom(i_target, PB_MAILBOX_31_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_MAILBOX_31_REG]

//>> PUT_[PB_MAILBOX_31_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_MAILBOX_31_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_MAILBOX_31_REG));
#endif
    return fapi2::putScom(i_target, PB_MAILBOX_31_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_MAILBOX_31_REG]


//>> PREP_[PB_PMU1_CNPM_COUNTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PMU1_CNPM_COUNTER(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PMU1_CNPM_COUNTER;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PMU1_CNPM_COUNTER]

//>> GET_[PB_PMU1_CNPM_COUNTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PMU1_CNPM_COUNTER(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PMU1_CNPM_COUNTER;
#endif
    return fapi2::getScom(i_target, PB_PMU1_CNPM_COUNTER, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PMU1_CNPM_COUNTER]

//>> PUT_[PB_PMU1_CNPM_COUNTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PMU1_CNPM_COUNTER(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return fapi2::putScom(i_target, PB_PMU1_CNPM_COUNTER, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PMU1_CNPM_COUNTER]


//>> SET_[PB_PMU1_CNPM_COUNTER_0]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU1_CNPM_COUNTER_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU1_CNPM_COUNTER_0,
           PB_PMU1_CNPM_COUNTER_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU1_CNPM_COUNTER_0]

//>> SET_[PB_PMU1_CNPM_COUNTER_0]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU1_CNPM_COUNTER_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU1_CNPM_COUNTER_0,
           PB_PMU1_CNPM_COUNTER_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU1_CNPM_COUNTER_0]

//>> GET_[PB_PMU1_CNPM_COUNTER_0]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU1_CNPM_COUNTER_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU1_CNPM_COUNTER_0,
           PB_PMU1_CNPM_COUNTER_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU1_CNPM_COUNTER_0]

//>> SET_[PB_PMU1_CNPM_COUNTER_1]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU1_CNPM_COUNTER_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU1_CNPM_COUNTER_1,
           PB_PMU1_CNPM_COUNTER_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU1_CNPM_COUNTER_1]

//>> SET_[PB_PMU1_CNPM_COUNTER_1]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU1_CNPM_COUNTER_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU1_CNPM_COUNTER_1,
           PB_PMU1_CNPM_COUNTER_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU1_CNPM_COUNTER_1]

//>> GET_[PB_PMU1_CNPM_COUNTER_1]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU1_CNPM_COUNTER_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU1_CNPM_COUNTER_1,
           PB_PMU1_CNPM_COUNTER_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU1_CNPM_COUNTER_1]

//>> SET_[PB_PMU1_CNPM_COUNTER_2]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU1_CNPM_COUNTER_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU1_CNPM_COUNTER_2,
           PB_PMU1_CNPM_COUNTER_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU1_CNPM_COUNTER_2]

//>> SET_[PB_PMU1_CNPM_COUNTER_2]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU1_CNPM_COUNTER_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU1_CNPM_COUNTER_2,
           PB_PMU1_CNPM_COUNTER_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU1_CNPM_COUNTER_2]

//>> GET_[PB_PMU1_CNPM_COUNTER_2]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU1_CNPM_COUNTER_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU1_CNPM_COUNTER_2,
           PB_PMU1_CNPM_COUNTER_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU1_CNPM_COUNTER_2]

//>> SET_[PB_PMU1_CNPM_COUNTER_3]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU1_CNPM_COUNTER_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU1_CNPM_COUNTER_3,
           PB_PMU1_CNPM_COUNTER_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU1_CNPM_COUNTER_3]

//>> SET_[PB_PMU1_CNPM_COUNTER_3]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU1_CNPM_COUNTER_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU1_CNPM_COUNTER_3,
           PB_PMU1_CNPM_COUNTER_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU1_CNPM_COUNTER_3]

//>> GET_[PB_PMU1_CNPM_COUNTER_3]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU1_CNPM_COUNTER_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU1_CNPM_COUNTER_3,
           PB_PMU1_CNPM_COUNTER_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU1_CNPM_COUNTER_3]

//>> PREP_[PB_TL_LINK_ERR_INJECT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_TL_LINK_ERR_INJECT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_TL_LINK_ERR_INJECT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_TL_LINK_ERR_INJECT_REG]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_TL_LINK_ERR_INJECT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_TL_LINK_ERR_INJECT_REG;
#endif
    return fapi2::getScom(i_target, PB_TL_LINK_ERR_INJECT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG]

//>> PUT_[PB_TL_LINK_ERR_INJECT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_TL_LINK_ERR_INJECT_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return fapi2::putScom(i_target, PB_TL_LINK_ERR_INJECT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_TL_LINK_ERR_INJECT_REG]


//>> SET_[PB_TL_LINK_ERR_INJECT_REG_STUCK]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_STUCK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_STUCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_STUCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_STUCK]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_STUCK]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_STUCK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_STUCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_STUCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_STUCK]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_STUCK]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_STUCK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.setBit<PB_TL_LINK_ERR_INJECT_REG_STUCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_STUCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_STUCK]

//>> CLEAR_[PB_TL_LINK_ERR_INJECT_REG_STUCK]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_ERR_INJECT_REG_STUCK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_ERR_INJECT_REG_STUCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_STUCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_ERR_INJECT_REG_STUCK]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_STUCK]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_ERR_INJECT_REG_STUCK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_ERR_INJECT_REG_STUCK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_STUCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_STUCK]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_STUCK]
static inline bool GET_PB_TL_LINK_ERR_INJECT_REG_STUCK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.getBit<PB_TL_LINK_ERR_INJECT_REG_STUCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_STUCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_STUCK]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_SINGLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_SINGLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_SINGLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_SINGLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_SINGLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_SINGLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_SINGLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.setBit<PB_TL_LINK_ERR_INJECT_REG_SINGLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_SINGLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]

//>> CLEAR_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_ERR_INJECT_REG_SINGLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_ERR_INJECT_REG_SINGLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_SINGLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_ERR_INJECT_REG_SINGLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_ERR_INJECT_REG_SINGLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_SINGLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]
static inline bool GET_PB_TL_LINK_ERR_INJECT_REG_SINGLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.getBit<PB_TL_LINK_ERR_INJECT_REG_SINGLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_SINGLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_BIT_17(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_BIT_17,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_BIT_17(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_BIT_17,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_BIT_17(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.setBit<PB_TL_LINK_ERR_INJECT_REG_BIT_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]

//>> CLEAR_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_ERR_INJECT_REG_BIT_17(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_ERR_INJECT_REG_BIT_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_ERR_INJECT_REG_BIT_17(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_ERR_INJECT_REG_BIT_17,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]
static inline bool GET_PB_TL_LINK_ERR_INJECT_REG_BIT_17(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.getBit<PB_TL_LINK_ERR_INJECT_REG_BIT_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_BIT_23(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_BIT_23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_BIT_23(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_BIT_23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_BIT_23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.setBit<PB_TL_LINK_ERR_INJECT_REG_BIT_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]

//>> CLEAR_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_ERR_INJECT_REG_BIT_23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_ERR_INJECT_REG_BIT_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_ERR_INJECT_REG_BIT_23(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_ERR_INJECT_REG_BIT_23,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]
static inline bool GET_PB_TL_LINK_ERR_INJECT_REG_BIT_23(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.getBit<PB_TL_LINK_ERR_INJECT_REG_BIT_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.setBit<PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]

//>> CLEAR_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]
static inline bool GET_PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.getBit<PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.setBit<PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]

//>> CLEAR_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]
static inline bool GET_PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.getBit<PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.setBit<PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]

//>> CLEAR_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]
static inline bool GET_PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.getBit<PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.setBit<PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]

//>> CLEAR_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]
static inline bool GET_PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.getBit<PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]

//>> PREP_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TXIRLM_REGS_TX_IMPCAL_SWO8_PB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_SWO8_PB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TXIRLM_REGS_TX_IMPCAL_SWO8_PB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_SWO8_PB;
#endif
    return fapi2::getScom(i_target, TXIRLM_REGS_TX_IMPCAL_SWO8_PB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB]

//>> PUT_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TXIRLM_REGS_TX_IMPCAL_SWO8_PB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO8_PB));
#endif
    return fapi2::putScom(i_target, TXIRLM_REGS_TX_IMPCAL_SWO8_PB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB]


//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO8_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39,
           TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO8_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39,
           TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO8_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39,
           TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39]


//>> PREP_[EPS_THERM_WSUB_SKITTER_DATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_SKITTER_DATA0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_SKITTER_DATA0]

//>> GET_[EPS_THERM_WSUB_SKITTER_DATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_SKITTER_DATA0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA0;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_SKITTER_DATA0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_DATA0]

//>> PUT_[EPS_THERM_WSUB_SKITTER_DATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_SKITTER_DATA0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_DATA0));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_SKITTER_DATA0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_SKITTER_DATA0]


//>> PREP_[EPS_THERM_WSUB_SKITTER_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_SKITTER_MODE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_MODE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_SKITTER_MODE_REG]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_SKITTER_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_MODE_REG;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_SKITTER_MODE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG]

//>> PUT_[EPS_THERM_WSUB_SKITTER_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_SKITTER_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_SKITTER_MODE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_SKITTER_MODE_REG]


//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline bool GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline bool GET_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline bool GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline bool GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> PREP_[TRA0_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR0_CONFIG_2]

//>> GET_[TRA0_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_2;
#endif
    return fapi2::getScom(i_target, TRA0_TR0_CONFIG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_2]

//>> PUT_[TRA0_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return fapi2::putScom(i_target, TRA0_TR0_CONFIG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR0_CONFIG_2]


//>> SET_[TRA0_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_2_A,
           TRA0_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_2_A]

//>> SET_[TRA0_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_2_A,
           TRA0_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_2_A]

//>> GET_[TRA0_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_2_A,
           TRA0_TR0_CONFIG_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_2_A]

//>> SET_[TRA0_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_2_B,
           TRA0_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_2_B]

//>> SET_[TRA0_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_2_B,
           TRA0_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_2_B]

//>> GET_[TRA0_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_2_B,
           TRA0_TR0_CONFIG_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_2_B]

//>> PREP_[TRA1_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA1_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_TRACE_HI_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA1_TR0_TRACE_HI_DATA_REG]

//>> GET_[TRA1_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA1_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_TRACE_HI_DATA_REG;
#endif
    return fapi2::getScom(i_target, TRA1_TR0_TRACE_HI_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA1_TR0_TRACE_HI_DATA_REG]

//>> PUT_[TRA1_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA1_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_HI_DATA_REG));
#endif
    return fapi2::putScom(i_target, TRA1_TR0_TRACE_HI_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA1_TR0_TRACE_HI_DATA_REG]


//>> SET_[TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> SET_[TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> GET_[TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_HI_DATA_REG));
#endif
    return i_data.extractToRight<TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> PREP_[DL_PPE_WRAP_SCOM_WORK_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_SCOM_WORK_REG1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = DL_PPE_WRAP_SCOM_WORK_REG1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_SCOM_WORK_REG1]

//>> GET_[DL_PPE_WRAP_SCOM_WORK_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_SCOM_WORK_REG1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = DL_PPE_WRAP_SCOM_WORK_REG1;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_SCOM_WORK_REG1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_WORK_REG1]

//>> PUT_[DL_PPE_WRAP_SCOM_WORK_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_SCOM_WORK_REG1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_WORK_REG1));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_SCOM_WORK_REG1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_SCOM_WORK_REG1]


//>> SET_[DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_WORK_REG1));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1,
           DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1]

//>> SET_[DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_WORK_REG1));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1,
           DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1]

//>> GET_[DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_WORK_REG1));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1,
           DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_WORK_REG1_SCOM_PPE_WORK1]

//>> PREP_[DL_PPE_WRAP_XIDBGPRO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_XIDBGPRO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = DL_PPE_WRAP_XIDBGPRO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_XIDBGPRO]

//>> GET_[DL_PPE_WRAP_XIDBGPRO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_XIDBGPRO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = DL_PPE_WRAP_XIDBGPRO;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_XIDBGPRO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO]

//>> PUT_[DL_PPE_WRAP_XIDBGPRO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_XIDBGPRO(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_XIDBGPRO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_XIDBGPRO]


//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_HS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_HS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_HS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_HS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_HS]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_HC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_HC,
           DL_PPE_WRAP_XIDBGPRO_XSR_HC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_HC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_HC,
           DL_PPE_WRAP_XIDBGPRO_XSR_HC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HC]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_HC]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_HC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_HC,
           DL_PPE_WRAP_XIDBGPRO_XSR_HC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_HC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_HCP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_HCP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_HCP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_HCP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_HCP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_RIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_RIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_RIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_RIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_RIP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_SIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_SIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_SIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_SIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_SIP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_TRAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_TRAP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_TRAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_TRAP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRAP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_IAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_IAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_IAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_IAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_IAC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC,
           DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC,
           DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC,
           DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_SIBRC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_RDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_RDAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_RDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_RDAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_RDAC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_WDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_WDAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_WDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_WDAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_WDAC]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_WE]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_TRH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_TRH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_TRH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_TRH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_TRH]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_SMS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_SMS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_SMS,
           DL_PPE_WRAP_XIDBGPRO_XSR_SMS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_SMS]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_SMS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_SMS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_SMS,
           DL_PPE_WRAP_XIDBGPRO_XSR_SMS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_SMS]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_SMS]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_SMS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_SMS,
           DL_PPE_WRAP_XIDBGPRO_XSR_SMS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_SMS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_SMS]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_NULL_MSR_LP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_EP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_EP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_EP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_EP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_EP]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_PTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_PTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_PTR]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_ST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_ST(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_ST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_ST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_ST]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_MFE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_MFE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_MFE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.setBit<DL_PPE_WRAP_XIDBGPRO_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_XIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.clearBit<DL_PPE_WRAP_XIDBGPRO_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_MFE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]
static inline bool GET_DL_PPE_WRAP_XIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.getBit<DL_PPE_WRAP_XIDBGPRO_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_MFE]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_MCS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_MCS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_MCS,
           DL_PPE_WRAP_XIDBGPRO_XSR_MCS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_MCS]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_XSR_MCS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_XSR_MCS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_XSR_MCS,
           DL_PPE_WRAP_XIDBGPRO_XSR_MCS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_XSR_MCS]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_XSR_MCS]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_XSR_MCS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_XSR_MCS,
           DL_PPE_WRAP_XIDBGPRO_XSR_MCS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_XSR_MCS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_XSR_MCS]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_IAR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_IAR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_IAR,
           DL_PPE_WRAP_XIDBGPRO_IAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_IAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_IAR]

//>> SET_[DL_PPE_WRAP_XIDBGPRO_IAR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIDBGPRO_IAR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIDBGPRO_IAR,
           DL_PPE_WRAP_XIDBGPRO_IAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_IAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIDBGPRO_IAR]

//>> GET_[DL_PPE_WRAP_XIDBGPRO_IAR]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIDBGPRO_IAR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIDBGPRO));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIDBGPRO_IAR,
           DL_PPE_WRAP_XIDBGPRO_IAR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIDBGPRO_IAR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIDBGPRO_IAR]

//>> PREP_[EPS_THERM_WSUB_SKITTER_DATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_SKITTER_DATA0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_SKITTER_DATA0]

//>> GET_[EPS_THERM_WSUB_SKITTER_DATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_SKITTER_DATA0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA0;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_SKITTER_DATA0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_DATA0]

//>> PUT_[EPS_THERM_WSUB_SKITTER_DATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_SKITTER_DATA0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_DATA0));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_SKITTER_DATA0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_SKITTER_DATA0]


//>> PREP_[EPS_THERM_WSUB_SKITTER_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_SKITTER_MODE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_MODE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_SKITTER_MODE_REG]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_SKITTER_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_MODE_REG;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_SKITTER_MODE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG]

//>> PUT_[EPS_THERM_WSUB_SKITTER_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_SKITTER_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_SKITTER_MODE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_SKITTER_MODE_REG]


//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline bool GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline bool GET_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline bool GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline bool GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> PREP_[PB_CNPM_PMU_PRESCALER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_CNPM_PMU_PRESCALER(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_CNPM_PMU_PRESCALER;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_CNPM_PMU_PRESCALER]

//>> GET_[PB_CNPM_PMU_PRESCALER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_CNPM_PMU_PRESCALER(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_CNPM_PMU_PRESCALER;
#endif
    return fapi2::getScom(i_target, PB_CNPM_PMU_PRESCALER, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER]

//>> PUT_[PB_CNPM_PMU_PRESCALER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_CNPM_PMU_PRESCALER(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return fapi2::putScom(i_target, PB_CNPM_PMU_PRESCALER, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_CNPM_PMU_PRESCALER]


//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP0_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP1_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP2_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3]

//>> GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3,
           PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_CNPM_PRESCALER_GRP3_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP0_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP1_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP2_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C0]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C1]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C2]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3]

//>> SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3]
static inline fapi2::buffer<uint64_t>& SET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return o_data.insertFromRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3]

//>> GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3]
static inline fapi2::buffer<uint64_t>& GET_PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CNPM_PMU_PRESCALER));
#endif
    return i_data.extractToRight<PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3,
           PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CNPM_PMU_PRESCALER_TLPM_PRESCALER_GRP3_C3]

//>> PREP_[PB_DOB01_DIB01_INT_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_DOB01_DIB01_INT_ERR_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_DOB01_DIB01_INT_ERR_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_DOB01_DIB01_INT_ERR_REG]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_DOB01_DIB01_INT_ERR_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_DOB01_DIB01_INT_ERR_REG;
#endif
    return fapi2::getScom(i_target, PB_DOB01_DIB01_INT_ERR_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG]

//>> PUT_[PB_DOB01_DIB01_INT_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_DOB01_DIB01_INT_ERR_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return fapi2::putScom(i_target, PB_DOB01_DIB01_INT_ERR_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_DOB01_DIB01_INT_ERR_REG]


//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PBITERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_RTAG_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_MISC_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_EVENPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_ODDPERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC0_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_VC1_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_EVN1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PBITERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_MISC_PERR]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_ODD1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_RTAG_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_DATA_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC0_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_IB01_VC1_OVERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F0VC1_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]

//>> SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]

//>> CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]

//>> GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]
static inline bool GET_PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB01_DIB01_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB01_DIB01_INT_ERR_REG_OB01_F1VC1_OVER_UNDERFLOW]

//>> PREP_[PB_MAILBOX_30_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_MAILBOX_30_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_30_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_MAILBOX_30_REG]

//>> GET_[PB_MAILBOX_30_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_MAILBOX_30_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_30_REG;
#endif
    return fapi2::getScom(i_target, PB_MAILBOX_30_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_MAILBOX_30_REG]

//>> PUT_[PB_MAILBOX_30_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_MAILBOX_30_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_MAILBOX_30_REG));
#endif
    return fapi2::putScom(i_target, PB_MAILBOX_30_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_MAILBOX_30_REG]


//>> PREP_[PB_MAILBOX_31_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_MAILBOX_31_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_31_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_MAILBOX_31_REG]

//>> GET_[PB_MAILBOX_31_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_MAILBOX_31_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_31_REG;
#endif
    return fapi2::getScom(i_target, PB_MAILBOX_31_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_MAILBOX_31_REG]

//>> PUT_[PB_MAILBOX_31_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_MAILBOX_31_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_MAILBOX_31_REG));
#endif
    return fapi2::putScom(i_target, PB_MAILBOX_31_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_MAILBOX_31_REG]


//>> PREP_[PB_PMU1_CNPM_COUNTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PMU1_CNPM_COUNTER(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PMU1_CNPM_COUNTER;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PMU1_CNPM_COUNTER]

//>> GET_[PB_PMU1_CNPM_COUNTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PMU1_CNPM_COUNTER(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PMU1_CNPM_COUNTER;
#endif
    return fapi2::getScom(i_target, PB_PMU1_CNPM_COUNTER, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PMU1_CNPM_COUNTER]

//>> PUT_[PB_PMU1_CNPM_COUNTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PMU1_CNPM_COUNTER(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return fapi2::putScom(i_target, PB_PMU1_CNPM_COUNTER, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PMU1_CNPM_COUNTER]


//>> SET_[PB_PMU1_CNPM_COUNTER_0]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU1_CNPM_COUNTER_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU1_CNPM_COUNTER_0,
           PB_PMU1_CNPM_COUNTER_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU1_CNPM_COUNTER_0]

//>> SET_[PB_PMU1_CNPM_COUNTER_0]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU1_CNPM_COUNTER_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU1_CNPM_COUNTER_0,
           PB_PMU1_CNPM_COUNTER_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU1_CNPM_COUNTER_0]

//>> GET_[PB_PMU1_CNPM_COUNTER_0]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU1_CNPM_COUNTER_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU1_CNPM_COUNTER_0,
           PB_PMU1_CNPM_COUNTER_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU1_CNPM_COUNTER_0]

//>> SET_[PB_PMU1_CNPM_COUNTER_1]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU1_CNPM_COUNTER_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU1_CNPM_COUNTER_1,
           PB_PMU1_CNPM_COUNTER_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU1_CNPM_COUNTER_1]

//>> SET_[PB_PMU1_CNPM_COUNTER_1]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU1_CNPM_COUNTER_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU1_CNPM_COUNTER_1,
           PB_PMU1_CNPM_COUNTER_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU1_CNPM_COUNTER_1]

//>> GET_[PB_PMU1_CNPM_COUNTER_1]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU1_CNPM_COUNTER_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU1_CNPM_COUNTER_1,
           PB_PMU1_CNPM_COUNTER_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU1_CNPM_COUNTER_1]

//>> SET_[PB_PMU1_CNPM_COUNTER_2]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU1_CNPM_COUNTER_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU1_CNPM_COUNTER_2,
           PB_PMU1_CNPM_COUNTER_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU1_CNPM_COUNTER_2]

//>> SET_[PB_PMU1_CNPM_COUNTER_2]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU1_CNPM_COUNTER_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU1_CNPM_COUNTER_2,
           PB_PMU1_CNPM_COUNTER_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU1_CNPM_COUNTER_2]

//>> GET_[PB_PMU1_CNPM_COUNTER_2]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU1_CNPM_COUNTER_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU1_CNPM_COUNTER_2,
           PB_PMU1_CNPM_COUNTER_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU1_CNPM_COUNTER_2]

//>> SET_[PB_PMU1_CNPM_COUNTER_3]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU1_CNPM_COUNTER_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU1_CNPM_COUNTER_3,
           PB_PMU1_CNPM_COUNTER_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU1_CNPM_COUNTER_3]

//>> SET_[PB_PMU1_CNPM_COUNTER_3]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU1_CNPM_COUNTER_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU1_CNPM_COUNTER_3,
           PB_PMU1_CNPM_COUNTER_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU1_CNPM_COUNTER_3]

//>> GET_[PB_PMU1_CNPM_COUNTER_3]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU1_CNPM_COUNTER_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU1_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU1_CNPM_COUNTER_3,
           PB_PMU1_CNPM_COUNTER_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU1_CNPM_COUNTER_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU1_CNPM_COUNTER_3]

//>> PREP_[PB_TL_LINK_ERR_INJECT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_TL_LINK_ERR_INJECT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_TL_LINK_ERR_INJECT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_TL_LINK_ERR_INJECT_REG]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_TL_LINK_ERR_INJECT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_TL_LINK_ERR_INJECT_REG;
#endif
    return fapi2::getScom(i_target, PB_TL_LINK_ERR_INJECT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG]

//>> PUT_[PB_TL_LINK_ERR_INJECT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_TL_LINK_ERR_INJECT_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return fapi2::putScom(i_target, PB_TL_LINK_ERR_INJECT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_TL_LINK_ERR_INJECT_REG]


//>> SET_[PB_TL_LINK_ERR_INJECT_REG_STUCK]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_STUCK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_STUCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_STUCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_STUCK]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_STUCK]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_STUCK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_STUCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_STUCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_STUCK]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_STUCK]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_STUCK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.setBit<PB_TL_LINK_ERR_INJECT_REG_STUCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_STUCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_STUCK]

//>> CLEAR_[PB_TL_LINK_ERR_INJECT_REG_STUCK]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_ERR_INJECT_REG_STUCK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_ERR_INJECT_REG_STUCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_STUCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_ERR_INJECT_REG_STUCK]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_STUCK]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_ERR_INJECT_REG_STUCK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_ERR_INJECT_REG_STUCK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_STUCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_STUCK]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_STUCK]
static inline bool GET_PB_TL_LINK_ERR_INJECT_REG_STUCK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.getBit<PB_TL_LINK_ERR_INJECT_REG_STUCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_STUCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_STUCK]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_SINGLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_SINGLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_SINGLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_SINGLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_SINGLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_SINGLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_SINGLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.setBit<PB_TL_LINK_ERR_INJECT_REG_SINGLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_SINGLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]

//>> CLEAR_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_ERR_INJECT_REG_SINGLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_ERR_INJECT_REG_SINGLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_SINGLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_ERR_INJECT_REG_SINGLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_ERR_INJECT_REG_SINGLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_SINGLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]
static inline bool GET_PB_TL_LINK_ERR_INJECT_REG_SINGLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.getBit<PB_TL_LINK_ERR_INJECT_REG_SINGLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_SINGLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_SINGLE]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_BIT_17(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_BIT_17,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_BIT_17(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_BIT_17,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_BIT_17(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.setBit<PB_TL_LINK_ERR_INJECT_REG_BIT_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]

//>> CLEAR_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_ERR_INJECT_REG_BIT_17(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_ERR_INJECT_REG_BIT_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_ERR_INJECT_REG_BIT_17(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_ERR_INJECT_REG_BIT_17,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]
static inline bool GET_PB_TL_LINK_ERR_INJECT_REG_BIT_17(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.getBit<PB_TL_LINK_ERR_INJECT_REG_BIT_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_BIT_17]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_BIT_23(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_BIT_23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_BIT_23(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_BIT_23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_BIT_23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.setBit<PB_TL_LINK_ERR_INJECT_REG_BIT_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]

//>> CLEAR_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_ERR_INJECT_REG_BIT_23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_ERR_INJECT_REG_BIT_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_ERR_INJECT_REG_BIT_23(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_ERR_INJECT_REG_BIT_23,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]
static inline bool GET_PB_TL_LINK_ERR_INJECT_REG_BIT_23(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.getBit<PB_TL_LINK_ERR_INJECT_REG_BIT_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_BIT_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_BIT_23]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.setBit<PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]

//>> CLEAR_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]
static inline bool GET_PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.getBit<PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_EVN]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.setBit<PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]

//>> CLEAR_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]
static inline bool GET_PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.getBit<PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_0_ODD]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.setBit<PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]

//>> CLEAR_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]
static inline bool GET_PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.getBit<PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_EVN]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]

//>> SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.setBit<PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]

//>> CLEAR_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return o_data.clearBit<PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]

//>> GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]
static inline bool GET_PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_ERR_INJECT_REG));
#endif
    return i_data.getBit<PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_ERR_INJECT_REG_LINK_1_ODD]

//>> PREP_[TRA0_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR0_CONFIG_2]

//>> GET_[TRA0_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_2;
#endif
    return fapi2::getScom(i_target, TRA0_TR0_CONFIG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_2]

//>> PUT_[TRA0_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return fapi2::putScom(i_target, TRA0_TR0_CONFIG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR0_CONFIG_2]


//>> SET_[TRA0_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_2_A,
           TRA0_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_2_A]

//>> SET_[TRA0_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_2_A,
           TRA0_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_2_A]

//>> GET_[TRA0_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_2_A,
           TRA0_TR0_CONFIG_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_2_A]

//>> SET_[TRA0_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_2_B,
           TRA0_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_2_B]

//>> SET_[TRA0_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_2_B,
           TRA0_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_2_B]

//>> GET_[TRA0_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_2_B,
           TRA0_TR0_CONFIG_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_2_B]

//>> PREP_[TRA1_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA1_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = TRA1_TR0_TRACE_HI_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA1_TR0_TRACE_HI_DATA_REG]

//>> GET_[TRA1_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA1_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = TRA1_TR0_TRACE_HI_DATA_REG;
#endif
    return fapi2::getScom(i_target, TRA1_TR0_TRACE_HI_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA1_TR0_TRACE_HI_DATA_REG]

//>> PUT_[TRA1_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA1_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_HI_DATA_REG));
#endif
    return fapi2::putScom(i_target, TRA1_TR0_TRACE_HI_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA1_TR0_TRACE_HI_DATA_REG]


//>> SET_[TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> SET_[TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> GET_[TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_HI_DATA_REG));
#endif
    return i_data.extractToRight<TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> PREP_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TXIRLM_REGS_TX_IMPCAL_SWO8_PB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_SWO8_PB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TXIRLM_REGS_TX_IMPCAL_SWO8_PB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_SWO8_PB;
#endif
    return fapi2::getScom(i_target, TXIRLM_REGS_TX_IMPCAL_SWO8_PB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB]

//>> PUT_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TXIRLM_REGS_TX_IMPCAL_SWO8_PB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO8_PB));
#endif
    return fapi2::putScom(i_target, TXIRLM_REGS_TX_IMPCAL_SWO8_PB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB]


//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO8_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39,
           TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO8_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39,
           TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO8_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39,
           TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO8_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XP_32_39]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
