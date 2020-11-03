/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_c/reg00014.H $            */
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

#ifndef __PPE_C_REG00014_H_
#define __PPE_C_REG00014_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> PREP_[CPMS_ASSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_ASSR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_ASSR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_ASSR]

//>> GET_[CPMS_ASSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_ASSR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_ASSR;
#endif
    return fapi2::getScom(i_target, CPMS_ASSR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_ASSR]

//>> PUT_[CPMS_ASSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_ASSR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return fapi2::putScom(i_target, CPMS_ASSR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_ASSR]


//>> SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> CLEAR_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline bool GET_CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> CLEAR_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline bool GET_CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> CLEAR_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline bool GET_CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> CLEAR_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline bool GET_CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> CLEAR_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> GET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> GET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline bool GET_CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> CLEAR_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> GET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> GET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline bool GET_CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE]

//>> SET_[CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE]

//>> SET_[CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE]

//>> CLEAR_[CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE]

//>> GET_[CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE]

//>> GET_[CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE]
static inline bool GET_CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_RVCSR_RVID_ACTIVE]

//>> SET_[CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE]

//>> SET_[CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE]

//>> SET_[CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE]

//>> CLEAR_[CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE]

//>> GET_[CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE]

//>> GET_[CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE]
static inline bool GET_CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_RVCSR_BYPASS_ACTIVE]

//>> SET_[CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW]

//>> SET_[CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW]

//>> SET_[CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW]

//>> CLEAR_[CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW]

//>> GET_[CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW]

//>> GET_[CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW]
static inline bool GET_CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_RVCSR_BYPASS_RAW]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET]

//>> CLEAR_[CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET]

//>> GET_[CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET]

//>> GET_[CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET]
static inline bool GET_CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_CL2_PFETCNTL_VDD_PFET_REGULATION_FINGER_SET]

//>> SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> CLEAR_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline bool GET_CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> CLEAR_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline bool GET_CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> CLEAR_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline bool GET_CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> CLEAR_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline bool GET_CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_ASSR_L3_CLKGLM_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_L3_CLKGLM_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_L3_CLKGLM_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_L3_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_L3_CLKGLM_SEL]

//>> SET_[CPMS_ASSR_L3_CLKGLM_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_L3_CLKGLM_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_L3_CLKGLM_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_L3_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_L3_CLKGLM_SEL]

//>> SET_[CPMS_ASSR_L3_CLKGLM_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_L3_CLKGLM_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_L3_CLKGLM_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_L3_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_L3_CLKGLM_SEL]

//>> CLEAR_[CPMS_ASSR_L3_CLKGLM_SEL]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_L3_CLKGLM_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_L3_CLKGLM_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_L3_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_L3_CLKGLM_SEL]

//>> GET_[CPMS_ASSR_L3_CLKGLM_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_L3_CLKGLM_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_L3_CLKGLM_SEL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_L3_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_L3_CLKGLM_SEL]

//>> GET_[CPMS_ASSR_L3_CLKGLM_SEL]
static inline bool GET_CPMS_ASSR_L3_CLKGLM_SEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_L3_CLKGLM_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_L3_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_L3_CLKGLM_SEL]

//>> SET_[CPMS_ASSR_L2_CLKGLM_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_L2_CLKGLM_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_L2_CLKGLM_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_L2_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_L2_CLKGLM_SEL]

//>> SET_[CPMS_ASSR_L2_CLKGLM_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_L2_CLKGLM_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_L2_CLKGLM_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_L2_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_L2_CLKGLM_SEL]

//>> SET_[CPMS_ASSR_L2_CLKGLM_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_L2_CLKGLM_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_L2_CLKGLM_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_L2_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_L2_CLKGLM_SEL]

//>> CLEAR_[CPMS_ASSR_L2_CLKGLM_SEL]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_L2_CLKGLM_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_L2_CLKGLM_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_L2_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_L2_CLKGLM_SEL]

//>> GET_[CPMS_ASSR_L2_CLKGLM_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_L2_CLKGLM_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_L2_CLKGLM_SEL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_L2_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_L2_CLKGLM_SEL]

//>> GET_[CPMS_ASSR_L2_CLKGLM_SEL]
static inline bool GET_CPMS_ASSR_L2_CLKGLM_SEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_L2_CLKGLM_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_L2_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_L2_CLKGLM_SEL]

//>> SET_[CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE]

//>> SET_[CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE]

//>> SET_[CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE]

//>> CLEAR_[CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE]

//>> GET_[CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE]

//>> GET_[CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE]
static inline bool GET_CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_CGCSR_L3_CLK_SYNC_DONE]

//>> SET_[CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE]

//>> SET_[CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE]

//>> SET_[CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE]

//>> CLEAR_[CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE]

//>> GET_[CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE]

//>> GET_[CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE]
static inline bool GET_CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_CGCSR_CL2_CLK_SYNC_DONE]

//>> SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE]

//>> SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE]

//>> SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE]

//>> CLEAR_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE]

//>> GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE]

//>> GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE]
static inline bool GET_CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VDD_PFETS_FINGER0_SENSE]

//>> SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE]

//>> SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE]

//>> SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE]

//>> CLEAR_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE]

//>> GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE]

//>> GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE]
static inline bool GET_CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_L3_PFETSTAT_VCS_PFETS_FINGER0_SENSE]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE]

//>> CLEAR_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE]

//>> GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE]

//>> GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE]
static inline bool GET_CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VDD_PFETS_FINGER0_SENSE]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE]

//>> SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE]

//>> CLEAR_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE]

//>> GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE]

//>> GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE]
static inline bool GET_CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_CL2_PFETSTAT_L2_VCS_PFETS_FINGER0_SENSE]

//>> SET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE]

//>> SET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE]

//>> SET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.setBit<CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE]

//>> CLEAR_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.clearBit<CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE]

//>> GET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE]

//>> GET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE]
static inline bool GET_CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.getBit<CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CPMS_MMA_PFETSTAT_VDD_PFETS_FINGER0_SENSE]

//>> SET_[CPMS_ASSR_CL2_VDD_CURRENT_AVG]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CL2_VDD_CURRENT_AVG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CL2_VDD_CURRENT_AVG,
           CPMS_ASSR_CL2_VDD_CURRENT_AVG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_AVG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CL2_VDD_CURRENT_AVG]

//>> SET_[CPMS_ASSR_CL2_VDD_CURRENT_AVG]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CL2_VDD_CURRENT_AVG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CL2_VDD_CURRENT_AVG,
           CPMS_ASSR_CL2_VDD_CURRENT_AVG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_AVG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CL2_VDD_CURRENT_AVG]

//>> GET_[CPMS_ASSR_CL2_VDD_CURRENT_AVG]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CL2_VDD_CURRENT_AVG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CL2_VDD_CURRENT_AVG,
           CPMS_ASSR_CL2_VDD_CURRENT_AVG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_AVG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CL2_VDD_CURRENT_AVG]

//>> SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE0]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CL2_VDD_CURRENT_SENSE0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CL2_VDD_CURRENT_SENSE0,
           CPMS_ASSR_CL2_VDD_CURRENT_SENSE0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_SENSE0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE0]

//>> SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE0]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CL2_VDD_CURRENT_SENSE0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CL2_VDD_CURRENT_SENSE0,
           CPMS_ASSR_CL2_VDD_CURRENT_SENSE0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_SENSE0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE0]

//>> GET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE0]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CL2_VDD_CURRENT_SENSE0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CL2_VDD_CURRENT_SENSE0,
           CPMS_ASSR_CL2_VDD_CURRENT_SENSE0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_SENSE0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE0]

//>> SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE1]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CL2_VDD_CURRENT_SENSE1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CL2_VDD_CURRENT_SENSE1,
           CPMS_ASSR_CL2_VDD_CURRENT_SENSE1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_SENSE1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE1]

//>> SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE1]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CL2_VDD_CURRENT_SENSE1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CL2_VDD_CURRENT_SENSE1,
           CPMS_ASSR_CL2_VDD_CURRENT_SENSE1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_SENSE1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE1]

//>> GET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE1]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CL2_VDD_CURRENT_SENSE1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CL2_VDD_CURRENT_SENSE1,
           CPMS_ASSR_CL2_VDD_CURRENT_SENSE1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_SENSE1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE1]

//>> SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE2]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CL2_VDD_CURRENT_SENSE2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CL2_VDD_CURRENT_SENSE2,
           CPMS_ASSR_CL2_VDD_CURRENT_SENSE2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_SENSE2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE2]

//>> SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE2]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CL2_VDD_CURRENT_SENSE2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CL2_VDD_CURRENT_SENSE2,
           CPMS_ASSR_CL2_VDD_CURRENT_SENSE2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_SENSE2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE2]

//>> GET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE2]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CL2_VDD_CURRENT_SENSE2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CL2_VDD_CURRENT_SENSE2,
           CPMS_ASSR_CL2_VDD_CURRENT_SENSE2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_SENSE2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE2]

//>> SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE3]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CL2_VDD_CURRENT_SENSE3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CL2_VDD_CURRENT_SENSE3,
           CPMS_ASSR_CL2_VDD_CURRENT_SENSE3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_SENSE3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE3]

//>> SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE3]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CL2_VDD_CURRENT_SENSE3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CL2_VDD_CURRENT_SENSE3,
           CPMS_ASSR_CL2_VDD_CURRENT_SENSE3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_SENSE3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE3]

//>> GET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE3]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CL2_VDD_CURRENT_SENSE3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CL2_VDD_CURRENT_SENSE3,
           CPMS_ASSR_CL2_VDD_CURRENT_SENSE3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_SENSE3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE3]

//>> SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MAX]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MAX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MAX,
           CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MAX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MAX]

//>> SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MAX]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MAX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MAX,
           CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MAX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MAX]

//>> GET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MAX]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MAX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MAX,
           CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MAX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MAX]

//>> SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MIN]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MIN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MIN,
           CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MIN]

//>> SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MIN]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return o_data.insertFromRight<CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MIN,
           CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MIN]

//>> GET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MIN]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MIN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ASSR));
#endif
    return i_data.extractToRight<CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MIN,
           CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MIN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ASSR_CL2_VDD_CURRENT_SENSE_MIN]

//>> PREP_[CPMS_DESR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_DESR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DESR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_DESR]

//>> GET_[CPMS_DESR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_DESR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DESR;
#endif
    return fapi2::getScom(i_target, CPMS_DESR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_DESR]

//>> PUT_[CPMS_DESR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_DESR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return fapi2::putScom(i_target, CPMS_DESR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_DESR]


//>> SET_[CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL,
           CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL]

//>> SET_[CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL,
           CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL]

//>> GET_[CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL,
           CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL]

//>> SET_[CPMS_DESR_COUNTA_FTC_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTA_FTC_EVENT_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTA_FTC_EVENT_SEL,
           CPMS_DESR_COUNTA_FTC_EVENT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_COUNTA_FTC_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTA_FTC_EVENT_SEL]

//>> SET_[CPMS_DESR_COUNTA_FTC_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTA_FTC_EVENT_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTA_FTC_EVENT_SEL,
           CPMS_DESR_COUNTA_FTC_EVENT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_COUNTA_FTC_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTA_FTC_EVENT_SEL]

//>> GET_[CPMS_DESR_COUNTA_FTC_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_COUNTA_FTC_EVENT_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_COUNTA_FTC_EVENT_SEL,
           CPMS_DESR_COUNTA_FTC_EVENT_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_COUNTA_FTC_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_COUNTA_FTC_EVENT_SEL]

//>> SET_[CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL,
           CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL]

//>> SET_[CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL,
           CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL]

//>> GET_[CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL,
           CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL]

//>> SET_[CPMS_DESR_COUNTB_FTC_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTB_FTC_EVENT_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTB_FTC_EVENT_SEL,
           CPMS_DESR_COUNTB_FTC_EVENT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_COUNTB_FTC_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTB_FTC_EVENT_SEL]

//>> SET_[CPMS_DESR_COUNTB_FTC_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTB_FTC_EVENT_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTB_FTC_EVENT_SEL,
           CPMS_DESR_COUNTB_FTC_EVENT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_COUNTB_FTC_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTB_FTC_EVENT_SEL]

//>> GET_[CPMS_DESR_COUNTB_FTC_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_COUNTB_FTC_EVENT_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_COUNTB_FTC_EVENT_SEL,
           CPMS_DESR_COUNTB_FTC_EVENT_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_COUNTB_FTC_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_COUNTB_FTC_EVENT_SEL]

//>> SET_[CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL,
           CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL]

//>> SET_[CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL,
           CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL]

//>> GET_[CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL,
           CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL]

//>> SET_[CPMS_DESR_COUNTC_FTC_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTC_FTC_EVENT_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTC_FTC_EVENT_SEL,
           CPMS_DESR_COUNTC_FTC_EVENT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_COUNTC_FTC_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTC_FTC_EVENT_SEL]

//>> SET_[CPMS_DESR_COUNTC_FTC_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTC_FTC_EVENT_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTC_FTC_EVENT_SEL,
           CPMS_DESR_COUNTC_FTC_EVENT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_COUNTC_FTC_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTC_FTC_EVENT_SEL]

//>> GET_[CPMS_DESR_COUNTC_FTC_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_COUNTC_FTC_EVENT_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_COUNTC_FTC_EVENT_SEL,
           CPMS_DESR_COUNTC_FTC_EVENT_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_COUNTC_FTC_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_COUNTC_FTC_EVENT_SEL]

//>> SET_[CPMS_DESR_COUNTA_FTC_STATE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTA_FTC_STATE_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTA_FTC_STATE_SELECT,
           CPMS_DESR_COUNTA_FTC_STATE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_COUNTA_FTC_STATE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTA_FTC_STATE_SELECT]

//>> SET_[CPMS_DESR_COUNTA_FTC_STATE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTA_FTC_STATE_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTA_FTC_STATE_SELECT,
           CPMS_DESR_COUNTA_FTC_STATE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_COUNTA_FTC_STATE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTA_FTC_STATE_SELECT]

//>> GET_[CPMS_DESR_COUNTA_FTC_STATE_SELECT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_COUNTA_FTC_STATE_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_COUNTA_FTC_STATE_SELECT,
           CPMS_DESR_COUNTA_FTC_STATE_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_COUNTA_FTC_STATE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_COUNTA_FTC_STATE_SELECT]

//>> SET_[CPMS_DESR_COUNTB_FTC_STATE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTB_FTC_STATE_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTB_FTC_STATE_SELECT,
           CPMS_DESR_COUNTB_FTC_STATE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_COUNTB_FTC_STATE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTB_FTC_STATE_SELECT]

//>> SET_[CPMS_DESR_COUNTB_FTC_STATE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTB_FTC_STATE_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTB_FTC_STATE_SELECT,
           CPMS_DESR_COUNTB_FTC_STATE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_COUNTB_FTC_STATE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTB_FTC_STATE_SELECT]

//>> GET_[CPMS_DESR_COUNTB_FTC_STATE_SELECT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_COUNTB_FTC_STATE_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_COUNTB_FTC_STATE_SELECT,
           CPMS_DESR_COUNTB_FTC_STATE_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_COUNTB_FTC_STATE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_COUNTB_FTC_STATE_SELECT]

//>> SET_[CPMS_DESR_COUNTC_FTC_STATE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTC_FTC_STATE_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTC_FTC_STATE_SELECT,
           CPMS_DESR_COUNTC_FTC_STATE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_COUNTC_FTC_STATE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTC_FTC_STATE_SELECT]

//>> SET_[CPMS_DESR_COUNTC_FTC_STATE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTC_FTC_STATE_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTC_FTC_STATE_SELECT,
           CPMS_DESR_COUNTC_FTC_STATE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_COUNTC_FTC_STATE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTC_FTC_STATE_SELECT]

//>> GET_[CPMS_DESR_COUNTC_FTC_STATE_SELECT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_COUNTC_FTC_STATE_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_COUNTC_FTC_STATE_SELECT,
           CPMS_DESR_COUNTC_FTC_STATE_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_COUNTC_FTC_STATE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_COUNTC_FTC_STATE_SELECT]

//>> SET_[CPMS_DESR_FTC_INVERT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_FTC_INVERT_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_FTC_INVERT_SEL,
           CPMS_DESR_FTC_INVERT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_FTC_INVERT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_FTC_INVERT_SEL]

//>> SET_[CPMS_DESR_FTC_INVERT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_FTC_INVERT_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_FTC_INVERT_SEL,
           CPMS_DESR_FTC_INVERT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_FTC_INVERT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_FTC_INVERT_SEL]

//>> GET_[CPMS_DESR_FTC_INVERT_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_FTC_INVERT_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_FTC_INVERT_SEL,
           CPMS_DESR_FTC_INVERT_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_FTC_INVERT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_FTC_INVERT_SEL]

//>> SET_[CPMS_DESR_FTC_SPARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_FTC_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_FTC_SPARE,
           CPMS_DESR_FTC_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_FTC_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_FTC_SPARE]

//>> SET_[CPMS_DESR_FTC_SPARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_FTC_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_FTC_SPARE,
           CPMS_DESR_FTC_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_FTC_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_FTC_SPARE]

//>> GET_[CPMS_DESR_FTC_SPARE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_FTC_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_FTC_SPARE,
           CPMS_DESR_FTC_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_FTC_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_FTC_SPARE]

//>> SET_[CPMS_DESR_FTC_EVENT_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_FTC_EVENT_INVERT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_FTC_EVENT_INVERT,
           CPMS_DESR_FTC_EVENT_INVERT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_FTC_EVENT_INVERT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_FTC_EVENT_INVERT]

//>> SET_[CPMS_DESR_FTC_EVENT_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_FTC_EVENT_INVERT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_FTC_EVENT_INVERT,
           CPMS_DESR_FTC_EVENT_INVERT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_FTC_EVENT_INVERT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_FTC_EVENT_INVERT]

//>> GET_[CPMS_DESR_FTC_EVENT_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_FTC_EVENT_INVERT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_FTC_EVENT_INVERT,
           CPMS_DESR_FTC_EVENT_INVERT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_FTC_EVENT_INVERT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_FTC_EVENT_INVERT]

//>> SET_[CPMS_DESR_STATEW_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_STATEW_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_STATEW_ENABLE,
           CPMS_DESR_STATEW_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_STATEW_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_STATEW_ENABLE]

//>> SET_[CPMS_DESR_STATEW_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_STATEW_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_STATEW_ENABLE,
           CPMS_DESR_STATEW_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_STATEW_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_STATEW_ENABLE]

//>> GET_[CPMS_DESR_STATEW_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_STATEW_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_STATEW_ENABLE,
           CPMS_DESR_STATEW_ENABLE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_STATEW_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_STATEW_ENABLE]

//>> SET_[CPMS_DESR_STATEZ_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_STATEZ_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_STATEZ_ENABLE,
           CPMS_DESR_STATEZ_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_STATEZ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_STATEZ_ENABLE]

//>> SET_[CPMS_DESR_STATEZ_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_STATEZ_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_STATEZ_ENABLE,
           CPMS_DESR_STATEZ_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_STATEZ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_STATEZ_ENABLE]

//>> GET_[CPMS_DESR_STATEZ_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_STATEZ_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_STATEZ_ENABLE,
           CPMS_DESR_STATEZ_ENABLE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_STATEZ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_STATEZ_ENABLE]

//>> SET_[CPMS_DESR_SPARE_COUNT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_SPARE_COUNT_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_SPARE_COUNT_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_SPARE_COUNT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_SPARE_COUNT_SEL]

//>> SET_[CPMS_DESR_SPARE_COUNT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_SPARE_COUNT_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_SPARE_COUNT_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_SPARE_COUNT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_SPARE_COUNT_SEL]

//>> SET_[CPMS_DESR_SPARE_COUNT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_SPARE_COUNT_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.setBit<CPMS_DESR_SPARE_COUNT_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DESR_SPARE_COUNT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_SPARE_COUNT_SEL]

//>> CLEAR_[CPMS_DESR_SPARE_COUNT_SEL]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DESR_SPARE_COUNT_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.clearBit<CPMS_DESR_SPARE_COUNT_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DESR_SPARE_COUNT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DESR_SPARE_COUNT_SEL]

//>> GET_[CPMS_DESR_SPARE_COUNT_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_SPARE_COUNT_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_SPARE_COUNT_SEL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_SPARE_COUNT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_SPARE_COUNT_SEL]

//>> GET_[CPMS_DESR_SPARE_COUNT_SEL]
static inline bool GET_CPMS_DESR_SPARE_COUNT_SEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.getBit<CPMS_DESR_SPARE_COUNT_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DESR_SPARE_COUNT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_SPARE_COUNT_SEL]

//>> SET_[CPMS_DESR_SECONDARY_QUAL_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_SECONDARY_QUAL_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_SECONDARY_QUAL_SEL,
           CPMS_DESR_SECONDARY_QUAL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_SECONDARY_QUAL_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_SECONDARY_QUAL_SEL]

//>> SET_[CPMS_DESR_SECONDARY_QUAL_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_SECONDARY_QUAL_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_SECONDARY_QUAL_SEL,
           CPMS_DESR_SECONDARY_QUAL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_SECONDARY_QUAL_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_SECONDARY_QUAL_SEL]

//>> GET_[CPMS_DESR_SECONDARY_QUAL_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_SECONDARY_QUAL_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_SECONDARY_QUAL_SEL,
           CPMS_DESR_SECONDARY_QUAL_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_SECONDARY_QUAL_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_SECONDARY_QUAL_SEL]

//>> SET_[CPMS_DESR_SECONDARY_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_SECONDARY_EVENT_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_SECONDARY_EVENT_SEL,
           CPMS_DESR_SECONDARY_EVENT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_SECONDARY_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_SECONDARY_EVENT_SEL]

//>> SET_[CPMS_DESR_SECONDARY_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_SECONDARY_EVENT_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_SECONDARY_EVENT_SEL,
           CPMS_DESR_SECONDARY_EVENT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_SECONDARY_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_SECONDARY_EVENT_SEL]

//>> GET_[CPMS_DESR_SECONDARY_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_SECONDARY_EVENT_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_SECONDARY_EVENT_SEL,
           CPMS_DESR_SECONDARY_EVENT_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_SECONDARY_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_SECONDARY_EVENT_SEL]

//>> PREP_[CPMS_DTTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_DTTR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DTTR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_DTTR]

//>> GET_[CPMS_DTTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_DTTR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DTTR;
#endif
    return fapi2::getScom(i_target, CPMS_DTTR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_DTTR]

//>> PUT_[CPMS_DTTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_DTTR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return fapi2::putScom(i_target, CPMS_DTTR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_DTTR]


//>> SET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT,
           CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT]

//>> SET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT,
           CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT]

//>> GET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return i_data.extractToRight<CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT,
           CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT]

//>> SET_[CPMS_DTTR_T1_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T1_DPT_RATE_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T1_DPT_RATE_LIMIT,
           CPMS_DTTR_T1_DPT_RATE_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTTR_T1_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T1_DPT_RATE_LIMIT]

//>> SET_[CPMS_DTTR_T1_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T1_DPT_RATE_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T1_DPT_RATE_LIMIT,
           CPMS_DTTR_T1_DPT_RATE_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTTR_T1_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T1_DPT_RATE_LIMIT]

//>> GET_[CPMS_DTTR_T1_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTTR_T1_DPT_RATE_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return i_data.extractToRight<CPMS_DTTR_T1_DPT_RATE_LIMIT,
           CPMS_DTTR_T1_DPT_RATE_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTTR_T1_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTTR_T1_DPT_RATE_LIMIT]

//>> SET_[CPMS_DTTR_T2_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T2_DPT_RATE_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T2_DPT_RATE_LIMIT,
           CPMS_DTTR_T2_DPT_RATE_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTTR_T2_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T2_DPT_RATE_LIMIT]

//>> SET_[CPMS_DTTR_T2_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T2_DPT_RATE_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T2_DPT_RATE_LIMIT,
           CPMS_DTTR_T2_DPT_RATE_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTTR_T2_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T2_DPT_RATE_LIMIT]

//>> GET_[CPMS_DTTR_T2_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTTR_T2_DPT_RATE_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return i_data.extractToRight<CPMS_DTTR_T2_DPT_RATE_LIMIT,
           CPMS_DTTR_T2_DPT_RATE_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTTR_T2_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTTR_T2_DPT_RATE_LIMIT]

//>> SET_[CPMS_DTTR_T3_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T3_DPT_RATE_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T3_DPT_RATE_LIMIT,
           CPMS_DTTR_T3_DPT_RATE_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTTR_T3_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T3_DPT_RATE_LIMIT]

//>> SET_[CPMS_DTTR_T3_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T3_DPT_RATE_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T3_DPT_RATE_LIMIT,
           CPMS_DTTR_T3_DPT_RATE_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTTR_T3_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T3_DPT_RATE_LIMIT]

//>> GET_[CPMS_DTTR_T3_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTTR_T3_DPT_RATE_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return i_data.extractToRight<CPMS_DTTR_T3_DPT_RATE_LIMIT,
           CPMS_DTTR_T3_DPT_RATE_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTTR_T3_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTTR_T3_DPT_RATE_LIMIT]

//>> SET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT]

//>> SET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT]

//>> GET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return i_data.extractToRight<CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT]

//>> SET_[CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT]

//>> SET_[CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT]

//>> GET_[CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return i_data.extractToRight<CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT]

//>> SET_[CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT]

//>> SET_[CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT]

//>> GET_[CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return i_data.extractToRight<CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT]

//>> SET_[CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT]

//>> SET_[CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT]

//>> GET_[CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return i_data.extractToRight<CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT]

//>> PREP_[QME_CISR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_CISR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_CISR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_CISR]

//>> GET_[QME_CISR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_CISR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_CISR;
#endif
    return fapi2::getScom(i_target, QME_CISR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_CISR]

//>> PUT_[QME_CISR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_CISR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return fapi2::putScom(i_target, QME_CISR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_CISR]


//>> SET_[QME_CISR_HYP_INTR_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_HYP_INTR_PRESENT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_HYP_INTR_PRESENT,
           QME_CISR_HYP_INTR_PRESENT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_HYP_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_HYP_INTR_PRESENT]

//>> SET_[QME_CISR_HYP_INTR_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_HYP_INTR_PRESENT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_HYP_INTR_PRESENT,
           QME_CISR_HYP_INTR_PRESENT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_HYP_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_HYP_INTR_PRESENT]

//>> GET_[QME_CISR_HYP_INTR_PRESENT]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_HYP_INTR_PRESENT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_HYP_INTR_PRESENT,
           QME_CISR_HYP_INTR_PRESENT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_HYP_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_HYP_INTR_PRESENT]

//>> SET_[QME_CISR_OS_INTR_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_OS_INTR_PRESENT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_OS_INTR_PRESENT,
           QME_CISR_OS_INTR_PRESENT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_OS_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_OS_INTR_PRESENT]

//>> SET_[QME_CISR_OS_INTR_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_OS_INTR_PRESENT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_OS_INTR_PRESENT,
           QME_CISR_OS_INTR_PRESENT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_OS_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_OS_INTR_PRESENT]

//>> GET_[QME_CISR_OS_INTR_PRESENT]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_OS_INTR_PRESENT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_OS_INTR_PRESENT,
           QME_CISR_OS_INTR_PRESENT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_OS_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_OS_INTR_PRESENT]

//>> SET_[QME_CISR_MSGSND_INTR_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MSGSND_INTR_PRESENT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_MSGSND_INTR_PRESENT,
           QME_CISR_MSGSND_INTR_PRESENT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_MSGSND_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MSGSND_INTR_PRESENT]

//>> SET_[QME_CISR_MSGSND_INTR_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MSGSND_INTR_PRESENT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_MSGSND_INTR_PRESENT,
           QME_CISR_MSGSND_INTR_PRESENT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_MSGSND_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MSGSND_INTR_PRESENT]

//>> GET_[QME_CISR_MSGSND_INTR_PRESENT]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_MSGSND_INTR_PRESENT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_MSGSND_INTR_PRESENT,
           QME_CISR_MSGSND_INTR_PRESENT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_MSGSND_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_MSGSND_INTR_PRESENT]

//>> SET_[QME_CISR_EBB_INTR_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_EBB_INTR_PRESENT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_EBB_INTR_PRESENT,
           QME_CISR_EBB_INTR_PRESENT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_EBB_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_EBB_INTR_PRESENT]

//>> SET_[QME_CISR_EBB_INTR_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_EBB_INTR_PRESENT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_EBB_INTR_PRESENT,
           QME_CISR_EBB_INTR_PRESENT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_EBB_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_EBB_INTR_PRESENT]

//>> GET_[QME_CISR_EBB_INTR_PRESENT]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_EBB_INTR_PRESENT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_EBB_INTR_PRESENT,
           QME_CISR_EBB_INTR_PRESENT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_EBB_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_EBB_INTR_PRESENT]

//>> SET_[QME_CISR_HYP_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_HYP_INTR_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_HYP_INTR_REQUESTED,
           QME_CISR_HYP_INTR_REQUESTED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_HYP_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_HYP_INTR_REQUESTED]

//>> SET_[QME_CISR_HYP_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_HYP_INTR_REQUESTED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_HYP_INTR_REQUESTED,
           QME_CISR_HYP_INTR_REQUESTED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_HYP_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_HYP_INTR_REQUESTED]

//>> GET_[QME_CISR_HYP_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_HYP_INTR_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_HYP_INTR_REQUESTED,
           QME_CISR_HYP_INTR_REQUESTED_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_HYP_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_HYP_INTR_REQUESTED]

//>> SET_[QME_CISR_OS_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_OS_INTR_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_OS_INTR_REQUESTED,
           QME_CISR_OS_INTR_REQUESTED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_OS_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_OS_INTR_REQUESTED]

//>> SET_[QME_CISR_OS_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_OS_INTR_REQUESTED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_OS_INTR_REQUESTED,
           QME_CISR_OS_INTR_REQUESTED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_OS_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_OS_INTR_REQUESTED]

//>> GET_[QME_CISR_OS_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_OS_INTR_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_OS_INTR_REQUESTED,
           QME_CISR_OS_INTR_REQUESTED_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_OS_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_OS_INTR_REQUESTED]

//>> SET_[QME_CISR_MSGSND_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MSGSND_INTR_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_MSGSND_INTR_REQUESTED,
           QME_CISR_MSGSND_INTR_REQUESTED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_MSGSND_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MSGSND_INTR_REQUESTED]

//>> SET_[QME_CISR_MSGSND_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MSGSND_INTR_REQUESTED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_MSGSND_INTR_REQUESTED,
           QME_CISR_MSGSND_INTR_REQUESTED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_MSGSND_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MSGSND_INTR_REQUESTED]

//>> GET_[QME_CISR_MSGSND_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_MSGSND_INTR_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_MSGSND_INTR_REQUESTED,
           QME_CISR_MSGSND_INTR_REQUESTED_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_MSGSND_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_MSGSND_INTR_REQUESTED]

//>> SET_[QME_CISR_MSGSND_INTR_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MSGSND_INTR_SAMPLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_MSGSND_INTR_SAMPLE,
           QME_CISR_MSGSND_INTR_SAMPLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_MSGSND_INTR_SAMPLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MSGSND_INTR_SAMPLE]

//>> SET_[QME_CISR_MSGSND_INTR_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MSGSND_INTR_SAMPLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_MSGSND_INTR_SAMPLE,
           QME_CISR_MSGSND_INTR_SAMPLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_MSGSND_INTR_SAMPLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MSGSND_INTR_SAMPLE]

//>> GET_[QME_CISR_MSGSND_INTR_SAMPLE]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_MSGSND_INTR_SAMPLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_MSGSND_INTR_SAMPLE,
           QME_CISR_MSGSND_INTR_SAMPLE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_MSGSND_INTR_SAMPLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_MSGSND_INTR_SAMPLE]

//>> SET_[QME_CISR_MSGSND_ACK]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MSGSND_ACK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_MSGSND_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_MSGSND_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MSGSND_ACK]

//>> SET_[QME_CISR_MSGSND_ACK]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MSGSND_ACK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_MSGSND_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_MSGSND_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MSGSND_ACK]

//>> SET_[QME_CISR_MSGSND_ACK]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MSGSND_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.setBit<QME_CISR_MSGSND_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_CISR_MSGSND_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MSGSND_ACK]

//>> CLEAR_[QME_CISR_MSGSND_ACK]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_CISR_MSGSND_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.clearBit<QME_CISR_MSGSND_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_CISR_MSGSND_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_CISR_MSGSND_ACK]

//>> GET_[QME_CISR_MSGSND_ACK]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_MSGSND_ACK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_MSGSND_ACK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_MSGSND_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_MSGSND_ACK]

//>> GET_[QME_CISR_MSGSND_ACK]
static inline bool GET_QME_CISR_MSGSND_ACK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.getBit<QME_CISR_MSGSND_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_CISR_MSGSND_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_MSGSND_ACK]

//>> SET_[QME_CISR_MALF_ALERT_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MALF_ALERT_PRESENT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_MALF_ALERT_PRESENT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_MALF_ALERT_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MALF_ALERT_PRESENT]

//>> SET_[QME_CISR_MALF_ALERT_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MALF_ALERT_PRESENT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_MALF_ALERT_PRESENT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_MALF_ALERT_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MALF_ALERT_PRESENT]

//>> SET_[QME_CISR_MALF_ALERT_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MALF_ALERT_PRESENT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.setBit<QME_CISR_MALF_ALERT_PRESENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_CISR_MALF_ALERT_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MALF_ALERT_PRESENT]

//>> CLEAR_[QME_CISR_MALF_ALERT_PRESENT]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_CISR_MALF_ALERT_PRESENT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.clearBit<QME_CISR_MALF_ALERT_PRESENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_CISR_MALF_ALERT_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_CISR_MALF_ALERT_PRESENT]

//>> GET_[QME_CISR_MALF_ALERT_PRESENT]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_MALF_ALERT_PRESENT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_MALF_ALERT_PRESENT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_MALF_ALERT_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_MALF_ALERT_PRESENT]

//>> GET_[QME_CISR_MALF_ALERT_PRESENT]
static inline bool GET_QME_CISR_MALF_ALERT_PRESENT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.getBit<QME_CISR_MALF_ALERT_PRESENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_CISR_MALF_ALERT_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_MALF_ALERT_PRESENT]

//>> SET_[QME_CISR_MALF_ALERT_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MALF_ALERT_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_MALF_ALERT_REQUESTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_MALF_ALERT_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MALF_ALERT_REQUESTED]

//>> SET_[QME_CISR_MALF_ALERT_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MALF_ALERT_REQUESTED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_MALF_ALERT_REQUESTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_MALF_ALERT_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MALF_ALERT_REQUESTED]

//>> SET_[QME_CISR_MALF_ALERT_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MALF_ALERT_REQUESTED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.setBit<QME_CISR_MALF_ALERT_REQUESTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_CISR_MALF_ALERT_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MALF_ALERT_REQUESTED]

//>> CLEAR_[QME_CISR_MALF_ALERT_REQUESTED]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_CISR_MALF_ALERT_REQUESTED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.clearBit<QME_CISR_MALF_ALERT_REQUESTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_CISR_MALF_ALERT_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_CISR_MALF_ALERT_REQUESTED]

//>> GET_[QME_CISR_MALF_ALERT_REQUESTED]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_MALF_ALERT_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_MALF_ALERT_REQUESTED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_MALF_ALERT_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_MALF_ALERT_REQUESTED]

//>> GET_[QME_CISR_MALF_ALERT_REQUESTED]
static inline bool GET_QME_CISR_MALF_ALERT_REQUESTED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.getBit<QME_CISR_MALF_ALERT_REQUESTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_CISR_MALF_ALERT_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_MALF_ALERT_REQUESTED]

//>> SET_[QME_CISR_MSGSNDU_INTR_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MSGSNDU_INTR_PRESENT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_MSGSNDU_INTR_PRESENT,
           QME_CISR_MSGSNDU_INTR_PRESENT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_MSGSNDU_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MSGSNDU_INTR_PRESENT]

//>> SET_[QME_CISR_MSGSNDU_INTR_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MSGSNDU_INTR_PRESENT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_MSGSNDU_INTR_PRESENT,
           QME_CISR_MSGSNDU_INTR_PRESENT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_MSGSNDU_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MSGSNDU_INTR_PRESENT]

//>> GET_[QME_CISR_MSGSNDU_INTR_PRESENT]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_MSGSNDU_INTR_PRESENT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_MSGSNDU_INTR_PRESENT,
           QME_CISR_MSGSNDU_INTR_PRESENT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_MSGSNDU_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_MSGSNDU_INTR_PRESENT]

//>> SET_[QME_CISR_MSGSNDU_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MSGSNDU_INTR_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_MSGSNDU_INTR_REQUESTED,
           QME_CISR_MSGSNDU_INTR_REQUESTED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_MSGSNDU_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MSGSNDU_INTR_REQUESTED]

//>> SET_[QME_CISR_MSGSNDU_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MSGSNDU_INTR_REQUESTED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_MSGSNDU_INTR_REQUESTED,
           QME_CISR_MSGSNDU_INTR_REQUESTED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_MSGSNDU_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MSGSNDU_INTR_REQUESTED]

//>> GET_[QME_CISR_MSGSNDU_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_MSGSNDU_INTR_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_MSGSNDU_INTR_REQUESTED,
           QME_CISR_MSGSNDU_INTR_REQUESTED_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_MSGSNDU_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_MSGSNDU_INTR_REQUESTED]

//>> SET_[QME_CISR_MSGSNDU_INTR_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MSGSNDU_INTR_SAMPLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_MSGSNDU_INTR_SAMPLE,
           QME_CISR_MSGSNDU_INTR_SAMPLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_MSGSNDU_INTR_SAMPLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MSGSNDU_INTR_SAMPLE]

//>> SET_[QME_CISR_MSGSNDU_INTR_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_MSGSNDU_INTR_SAMPLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_MSGSNDU_INTR_SAMPLE,
           QME_CISR_MSGSNDU_INTR_SAMPLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_MSGSNDU_INTR_SAMPLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_MSGSNDU_INTR_SAMPLE]

//>> GET_[QME_CISR_MSGSNDU_INTR_SAMPLE]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_MSGSNDU_INTR_SAMPLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_MSGSNDU_INTR_SAMPLE,
           QME_CISR_MSGSNDU_INTR_SAMPLE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_MSGSNDU_INTR_SAMPLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_MSGSNDU_INTR_SAMPLE]

//>> SET_[QME_CISR_TFCS_DEC_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_TFCS_DEC_PRESENT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_TFCS_DEC_PRESENT,
           QME_CISR_TFCS_DEC_PRESENT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_TFCS_DEC_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_TFCS_DEC_PRESENT]

//>> SET_[QME_CISR_TFCS_DEC_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_TFCS_DEC_PRESENT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_TFCS_DEC_PRESENT,
           QME_CISR_TFCS_DEC_PRESENT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_TFCS_DEC_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_TFCS_DEC_PRESENT]

//>> GET_[QME_CISR_TFCS_DEC_PRESENT]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_TFCS_DEC_PRESENT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_TFCS_DEC_PRESENT,
           QME_CISR_TFCS_DEC_PRESENT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_TFCS_DEC_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_TFCS_DEC_PRESENT]

//>> SET_[QME_CISR_TFCS_DEC_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_TFCS_DEC_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_TFCS_DEC_REQUESTED,
           QME_CISR_TFCS_DEC_REQUESTED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_TFCS_DEC_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_TFCS_DEC_REQUESTED]

//>> SET_[QME_CISR_TFCS_DEC_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_TFCS_DEC_REQUESTED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_TFCS_DEC_REQUESTED,
           QME_CISR_TFCS_DEC_REQUESTED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_TFCS_DEC_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_TFCS_DEC_REQUESTED]

//>> GET_[QME_CISR_TFCS_DEC_REQUESTED]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_TFCS_DEC_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_TFCS_DEC_REQUESTED,
           QME_CISR_TFCS_DEC_REQUESTED_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_TFCS_DEC_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_TFCS_DEC_REQUESTED]

//>> SET_[QME_CISR_TFCS_HDEC_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_TFCS_HDEC_PRESENT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_TFCS_HDEC_PRESENT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_TFCS_HDEC_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_TFCS_HDEC_PRESENT]

//>> SET_[QME_CISR_TFCS_HDEC_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_TFCS_HDEC_PRESENT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_TFCS_HDEC_PRESENT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_TFCS_HDEC_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_TFCS_HDEC_PRESENT]

//>> SET_[QME_CISR_TFCS_HDEC_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_TFCS_HDEC_PRESENT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.setBit<QME_CISR_TFCS_HDEC_PRESENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_CISR_TFCS_HDEC_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_TFCS_HDEC_PRESENT]

//>> CLEAR_[QME_CISR_TFCS_HDEC_PRESENT]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_CISR_TFCS_HDEC_PRESENT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.clearBit<QME_CISR_TFCS_HDEC_PRESENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_CISR_TFCS_HDEC_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_CISR_TFCS_HDEC_PRESENT]

//>> GET_[QME_CISR_TFCS_HDEC_PRESENT]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_TFCS_HDEC_PRESENT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_TFCS_HDEC_PRESENT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_TFCS_HDEC_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_TFCS_HDEC_PRESENT]

//>> GET_[QME_CISR_TFCS_HDEC_PRESENT]
static inline bool GET_QME_CISR_TFCS_HDEC_PRESENT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.getBit<QME_CISR_TFCS_HDEC_PRESENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_CISR_TFCS_HDEC_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_TFCS_HDEC_PRESENT]

//>> SET_[QME_CISR_TFCS_HDEC_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_TFCS_HDEC_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_TFCS_HDEC_REQUESTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_TFCS_HDEC_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_TFCS_HDEC_REQUESTED]

//>> SET_[QME_CISR_TFCS_HDEC_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_TFCS_HDEC_REQUESTED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_TFCS_HDEC_REQUESTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_TFCS_HDEC_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_TFCS_HDEC_REQUESTED]

//>> SET_[QME_CISR_TFCS_HDEC_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_TFCS_HDEC_REQUESTED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.setBit<QME_CISR_TFCS_HDEC_REQUESTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_CISR_TFCS_HDEC_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_TFCS_HDEC_REQUESTED]

//>> CLEAR_[QME_CISR_TFCS_HDEC_REQUESTED]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_CISR_TFCS_HDEC_REQUESTED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.clearBit<QME_CISR_TFCS_HDEC_REQUESTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_CISR_TFCS_HDEC_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_CISR_TFCS_HDEC_REQUESTED]

//>> GET_[QME_CISR_TFCS_HDEC_REQUESTED]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_TFCS_HDEC_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_TFCS_HDEC_REQUESTED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_TFCS_HDEC_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_TFCS_HDEC_REQUESTED]

//>> GET_[QME_CISR_TFCS_HDEC_REQUESTED]
static inline bool GET_QME_CISR_TFCS_HDEC_REQUESTED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.getBit<QME_CISR_TFCS_HDEC_REQUESTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_CISR_TFCS_HDEC_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_TFCS_HDEC_REQUESTED]

//>> SET_[QME_CISR_DPDES_INTR_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_DPDES_INTR_PRESENT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_DPDES_INTR_PRESENT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_DPDES_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_DPDES_INTR_PRESENT]

//>> SET_[QME_CISR_DPDES_INTR_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_DPDES_INTR_PRESENT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_DPDES_INTR_PRESENT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_DPDES_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_DPDES_INTR_PRESENT]

//>> SET_[QME_CISR_DPDES_INTR_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_DPDES_INTR_PRESENT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.setBit<QME_CISR_DPDES_INTR_PRESENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_CISR_DPDES_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_DPDES_INTR_PRESENT]

//>> CLEAR_[QME_CISR_DPDES_INTR_PRESENT]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_CISR_DPDES_INTR_PRESENT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.clearBit<QME_CISR_DPDES_INTR_PRESENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_CISR_DPDES_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_CISR_DPDES_INTR_PRESENT]

//>> GET_[QME_CISR_DPDES_INTR_PRESENT]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_DPDES_INTR_PRESENT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_DPDES_INTR_PRESENT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_DPDES_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_DPDES_INTR_PRESENT]

//>> GET_[QME_CISR_DPDES_INTR_PRESENT]
static inline bool GET_QME_CISR_DPDES_INTR_PRESENT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.getBit<QME_CISR_DPDES_INTR_PRESENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_CISR_DPDES_INTR_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_DPDES_INTR_PRESENT]

//>> SET_[QME_CISR_DPDES_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_DPDES_INTR_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_DPDES_INTR_REQUESTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_DPDES_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_DPDES_INTR_REQUESTED]

//>> SET_[QME_CISR_DPDES_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_DPDES_INTR_REQUESTED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_DPDES_INTR_REQUESTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_DPDES_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_DPDES_INTR_REQUESTED]

//>> SET_[QME_CISR_DPDES_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_DPDES_INTR_REQUESTED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.setBit<QME_CISR_DPDES_INTR_REQUESTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_CISR_DPDES_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_DPDES_INTR_REQUESTED]

//>> CLEAR_[QME_CISR_DPDES_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_CISR_DPDES_INTR_REQUESTED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.clearBit<QME_CISR_DPDES_INTR_REQUESTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_CISR_DPDES_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_CISR_DPDES_INTR_REQUESTED]

//>> GET_[QME_CISR_DPDES_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_DPDES_INTR_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_DPDES_INTR_REQUESTED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_DPDES_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_DPDES_INTR_REQUESTED]

//>> GET_[QME_CISR_DPDES_INTR_REQUESTED]
static inline bool GET_QME_CISR_DPDES_INTR_REQUESTED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.getBit<QME_CISR_DPDES_INTR_REQUESTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_CISR_DPDES_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_DPDES_INTR_REQUESTED]

//>> SET_[QME_CISR_PC_INTR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_PC_INTR_PENDING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_PC_INTR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_PC_INTR_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_PC_INTR_PENDING]

//>> SET_[QME_CISR_PC_INTR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_PC_INTR_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_PC_INTR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_PC_INTR_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_PC_INTR_PENDING]

//>> SET_[QME_CISR_PC_INTR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_PC_INTR_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.setBit<QME_CISR_PC_INTR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_CISR_PC_INTR_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_PC_INTR_PENDING]

//>> CLEAR_[QME_CISR_PC_INTR_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_CISR_PC_INTR_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.clearBit<QME_CISR_PC_INTR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_CISR_PC_INTR_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_CISR_PC_INTR_PENDING]

//>> GET_[QME_CISR_PC_INTR_PENDING]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_PC_INTR_PENDING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_PC_INTR_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_PC_INTR_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_PC_INTR_PENDING]

//>> GET_[QME_CISR_PC_INTR_PENDING]
static inline bool GET_QME_CISR_PC_INTR_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.getBit<QME_CISR_PC_INTR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_CISR_PC_INTR_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_PC_INTR_PENDING]

//>> SET_[QME_CISR_PC_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_PC_INTR_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_PC_INTR_REQUESTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_PC_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_PC_INTR_REQUESTED]

//>> SET_[QME_CISR_PC_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_PC_INTR_REQUESTED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_PC_INTR_REQUESTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_PC_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_PC_INTR_REQUESTED]

//>> SET_[QME_CISR_PC_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_PC_INTR_REQUESTED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.setBit<QME_CISR_PC_INTR_REQUESTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_CISR_PC_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_PC_INTR_REQUESTED]

//>> CLEAR_[QME_CISR_PC_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_CISR_PC_INTR_REQUESTED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.clearBit<QME_CISR_PC_INTR_REQUESTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_CISR_PC_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_CISR_PC_INTR_REQUESTED]

//>> GET_[QME_CISR_PC_INTR_REQUESTED]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_PC_INTR_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_PC_INTR_REQUESTED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_PC_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_PC_INTR_REQUESTED]

//>> GET_[QME_CISR_PC_INTR_REQUESTED]
static inline bool GET_QME_CISR_PC_INTR_REQUESTED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.getBit<QME_CISR_PC_INTR_REQUESTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_CISR_PC_INTR_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_PC_INTR_REQUESTED]

//>> SET_[QME_CISR_REG_WKUP_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_REG_WKUP_PRESENT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_REG_WKUP_PRESENT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_REG_WKUP_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_REG_WKUP_PRESENT]

//>> SET_[QME_CISR_REG_WKUP_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_REG_WKUP_PRESENT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_REG_WKUP_PRESENT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_REG_WKUP_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_REG_WKUP_PRESENT]

//>> SET_[QME_CISR_REG_WKUP_PRESENT]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_REG_WKUP_PRESENT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.setBit<QME_CISR_REG_WKUP_PRESENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_CISR_REG_WKUP_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_REG_WKUP_PRESENT]

//>> CLEAR_[QME_CISR_REG_WKUP_PRESENT]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_CISR_REG_WKUP_PRESENT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.clearBit<QME_CISR_REG_WKUP_PRESENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_CISR_REG_WKUP_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_CISR_REG_WKUP_PRESENT]

//>> GET_[QME_CISR_REG_WKUP_PRESENT]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_REG_WKUP_PRESENT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_REG_WKUP_PRESENT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_REG_WKUP_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_REG_WKUP_PRESENT]

//>> GET_[QME_CISR_REG_WKUP_PRESENT]
static inline bool GET_QME_CISR_REG_WKUP_PRESENT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.getBit<QME_CISR_REG_WKUP_PRESENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_CISR_REG_WKUP_PRESENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_REG_WKUP_PRESENT]

//>> SET_[QME_CISR_REG_WKUP_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_REG_WKUP_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_REG_WKUP_REQUESTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CISR_REG_WKUP_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_REG_WKUP_REQUESTED]

//>> SET_[QME_CISR_REG_WKUP_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_REG_WKUP_REQUESTED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.insertFromRight<QME_CISR_REG_WKUP_REQUESTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CISR_REG_WKUP_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_REG_WKUP_REQUESTED]

//>> SET_[QME_CISR_REG_WKUP_REQUESTED]
static inline fapi2::buffer<uint64_t>& SET_QME_CISR_REG_WKUP_REQUESTED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.setBit<QME_CISR_REG_WKUP_REQUESTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_CISR_REG_WKUP_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CISR_REG_WKUP_REQUESTED]

//>> CLEAR_[QME_CISR_REG_WKUP_REQUESTED]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_CISR_REG_WKUP_REQUESTED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return o_data.clearBit<QME_CISR_REG_WKUP_REQUESTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_CISR_REG_WKUP_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_CISR_REG_WKUP_REQUESTED]

//>> GET_[QME_CISR_REG_WKUP_REQUESTED]
static inline fapi2::buffer<uint64_t>& GET_QME_CISR_REG_WKUP_REQUESTED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.extractToRight<QME_CISR_REG_WKUP_REQUESTED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CISR_REG_WKUP_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_REG_WKUP_REQUESTED]

//>> GET_[QME_CISR_REG_WKUP_REQUESTED]
static inline bool GET_QME_CISR_REG_WKUP_REQUESTED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CISR));
#endif
    return i_data.getBit<QME_CISR_REG_WKUP_REQUESTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_CISR_REG_WKUP_REQUESTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CISR_REG_WKUP_REQUESTED]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
