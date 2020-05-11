/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_c/reg00011.H $            */
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

#ifndef __PPE_C_REG00011_H_
#define __PPE_C_REG00011_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> PREP_[CPMS_L3_PFETSTAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_L3_PFETSTAT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_L3_PFETSTAT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_L3_PFETSTAT]

//>> GET_[CPMS_L3_PFETSTAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_L3_PFETSTAT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_L3_PFETSTAT;
#endif
    return fapi2::getScom(i_target, CPMS_L3_PFETSTAT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_L3_PFETSTAT]

//>> PUT_[CPMS_L3_PFETSTAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_L3_PFETSTAT(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return fapi2::putScom(i_target, CPMS_L3_PFETSTAT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_L3_PFETSTAT]


//>> SET_[CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.setBit<CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> CLEAR_[CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.clearBit<CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> GET_[CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return i_data.extractToRight<CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> GET_[CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline bool GET_CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return i_data.getBit<CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_L3_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.setBit<CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> CLEAR_[CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.clearBit<CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> GET_[CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return i_data.extractToRight<CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> GET_[CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline bool GET_CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return i_data.getBit<CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_L3_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.setBit<CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> CLEAR_[CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.clearBit<CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> GET_[CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return i_data.extractToRight<CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> GET_[CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline bool GET_CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return i_data.getBit<CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_L3_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.setBit<CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> CLEAR_[CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.clearBit<CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> GET_[CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return i_data.extractToRight<CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> GET_[CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline bool GET_CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return i_data.getBit<CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_L3_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_L3_PFETSTAT_VDD_PFET_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_L3_PFETSTAT_VDD_PFET_ENABLE_ACTUAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_L3_PFETSTAT_VDD_PFET_ENABLE_ACTUAL,
           CPMS_L3_PFETSTAT_VDD_PFET_ENABLE_ACTUAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VDD_PFET_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_L3_PFETSTAT_VDD_PFET_ENABLE_ACTUAL]

//>> SET_[CPMS_L3_PFETSTAT_VDD_PFET_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_L3_PFETSTAT_VDD_PFET_ENABLE_ACTUAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_L3_PFETSTAT_VDD_PFET_ENABLE_ACTUAL,
           CPMS_L3_PFETSTAT_VDD_PFET_ENABLE_ACTUAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VDD_PFET_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_L3_PFETSTAT_VDD_PFET_ENABLE_ACTUAL]

//>> GET_[CPMS_L3_PFETSTAT_VDD_PFET_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_L3_PFETSTAT_VDD_PFET_ENABLE_ACTUAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return i_data.extractToRight<CPMS_L3_PFETSTAT_VDD_PFET_ENABLE_ACTUAL,
           CPMS_L3_PFETSTAT_VDD_PFET_ENABLE_ACTUAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VDD_PFET_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_L3_PFETSTAT_VDD_PFET_ENABLE_ACTUAL]

//>> SET_[CPMS_L3_PFETSTAT_VCS_PFET_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_L3_PFETSTAT_VCS_PFET_ENABLE_ACTUAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_L3_PFETSTAT_VCS_PFET_ENABLE_ACTUAL,
           CPMS_L3_PFETSTAT_VCS_PFET_ENABLE_ACTUAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VCS_PFET_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_L3_PFETSTAT_VCS_PFET_ENABLE_ACTUAL]

//>> SET_[CPMS_L3_PFETSTAT_VCS_PFET_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_L3_PFETSTAT_VCS_PFET_ENABLE_ACTUAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_L3_PFETSTAT_VCS_PFET_ENABLE_ACTUAL,
           CPMS_L3_PFETSTAT_VCS_PFET_ENABLE_ACTUAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VCS_PFET_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_L3_PFETSTAT_VCS_PFET_ENABLE_ACTUAL]

//>> GET_[CPMS_L3_PFETSTAT_VCS_PFET_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_L3_PFETSTAT_VCS_PFET_ENABLE_ACTUAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return i_data.extractToRight<CPMS_L3_PFETSTAT_VCS_PFET_ENABLE_ACTUAL,
           CPMS_L3_PFETSTAT_VCS_PFET_ENABLE_ACTUAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_L3_PFETSTAT_VCS_PFET_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_L3_PFETSTAT_VCS_PFET_ENABLE_ACTUAL]

//>> SET_[CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL]

//>> SET_[CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL]

//>> SET_[CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.setBit<CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL]

//>> CLEAR_[CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return o_data.clearBit<CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL]

//>> GET_[CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return i_data.extractToRight<CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL]

//>> GET_[CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL]
static inline bool GET_CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_L3_PFETSTAT));
#endif
    return i_data.getBit<CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_L3_PFETSTAT_SRAM_ENABLE_ACTUAL]

//>> PREP_[QME_PSCRS1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_PSCRS1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PSCRS1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_PSCRS1]

//>> GET_[QME_PSCRS1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_PSCRS1(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PSCRS1;
#endif
    return fapi2::getScom(i_target, QME_PSCRS1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_PSCRS1]

//>> PUT_[QME_PSCRS1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_PSCRS1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return fapi2::putScom(i_target, QME_PSCRS1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_PSCRS1]


//>> SET_[QME_PSCRS1_DPDES_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_DPDES_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_DPDES_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS1_DPDES_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_DPDES_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_DPDES_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_DPDES_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_DPDES_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS1_DPDES_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_DPDES_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_DPDES_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_DPDES_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.setBit<QME_PSCRS1_DPDES_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS1_DPDES_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_DPDES_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS1_DPDES_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS1_DPDES_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.clearBit<QME_PSCRS1_DPDES_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS1_DPDES_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS1_DPDES_EXIT_ENABLE]

//>> GET_[QME_PSCRS1_DPDES_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS1_DPDES_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.extractToRight<QME_PSCRS1_DPDES_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS1_DPDES_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_DPDES_EXIT_ENABLE]

//>> GET_[QME_PSCRS1_DPDES_EXIT_ENABLE]
static inline bool GET_QME_PSCRS1_DPDES_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.getBit<QME_PSCRS1_DPDES_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS1_DPDES_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_DPDES_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_SD]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_SD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_SD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS1_SD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_SD]

//>> SET_[QME_PSCRS1_SD]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_SD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_SD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS1_SD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_SD]

//>> SET_[QME_PSCRS1_SD]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_SD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.setBit<QME_PSCRS1_SD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS1_SD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_SD]

//>> CLEAR_[QME_PSCRS1_SD]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS1_SD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.clearBit<QME_PSCRS1_SD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS1_SD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS1_SD]

//>> GET_[QME_PSCRS1_SD]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS1_SD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.extractToRight<QME_PSCRS1_SD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS1_SD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_SD]

//>> GET_[QME_PSCRS1_SD]
static inline bool GET_QME_PSCRS1_SD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.getBit<QME_PSCRS1_SD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS1_SD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_SD]

//>> SET_[QME_PSCRS1_ESL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_ESL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_ESL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS1_ESL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_ESL]

//>> SET_[QME_PSCRS1_ESL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_ESL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_ESL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS1_ESL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_ESL]

//>> SET_[QME_PSCRS1_ESL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_ESL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.setBit<QME_PSCRS1_ESL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS1_ESL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_ESL]

//>> CLEAR_[QME_PSCRS1_ESL]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS1_ESL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.clearBit<QME_PSCRS1_ESL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS1_ESL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS1_ESL]

//>> GET_[QME_PSCRS1_ESL]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS1_ESL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.extractToRight<QME_PSCRS1_ESL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS1_ESL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_ESL]

//>> GET_[QME_PSCRS1_ESL]
static inline bool GET_QME_PSCRS1_ESL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.getBit<QME_PSCRS1_ESL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS1_ESL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_ESL]

//>> SET_[QME_PSCRS1_EC]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_EC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_EC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS1_EC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_EC]

//>> SET_[QME_PSCRS1_EC]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_EC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_EC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS1_EC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_EC]

//>> SET_[QME_PSCRS1_EC]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_EC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.setBit<QME_PSCRS1_EC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS1_EC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_EC]

//>> CLEAR_[QME_PSCRS1_EC]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS1_EC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.clearBit<QME_PSCRS1_EC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS1_EC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS1_EC]

//>> GET_[QME_PSCRS1_EC]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS1_EC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.extractToRight<QME_PSCRS1_EC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS1_EC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_EC]

//>> GET_[QME_PSCRS1_EC]
static inline bool GET_QME_PSCRS1_EC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.getBit<QME_PSCRS1_EC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS1_EC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_EC]

//>> SET_[QME_PSCRS1_PSLL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_PSLL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_PSLL,
           QME_PSCRS1_PSLL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS1_PSLL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_PSLL]

//>> SET_[QME_PSCRS1_PSLL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_PSLL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_PSLL,
           QME_PSCRS1_PSLL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS1_PSLL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_PSLL]

//>> GET_[QME_PSCRS1_PSLL]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS1_PSLL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.extractToRight<QME_PSCRS1_PSLL,
           QME_PSCRS1_PSLL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS1_PSLL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_PSLL]

//>> SET_[QME_PSCRS1_HYP_VIRT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_HYP_VIRT_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_HYP_VIRT_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS1_HYP_VIRT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_HYP_VIRT_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_HYP_VIRT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_HYP_VIRT_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_HYP_VIRT_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS1_HYP_VIRT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_HYP_VIRT_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_HYP_VIRT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_HYP_VIRT_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.setBit<QME_PSCRS1_HYP_VIRT_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS1_HYP_VIRT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_HYP_VIRT_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS1_HYP_VIRT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS1_HYP_VIRT_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.clearBit<QME_PSCRS1_HYP_VIRT_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS1_HYP_VIRT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS1_HYP_VIRT_EXIT_ENABLE]

//>> GET_[QME_PSCRS1_HYP_VIRT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS1_HYP_VIRT_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.extractToRight<QME_PSCRS1_HYP_VIRT_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS1_HYP_VIRT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_HYP_VIRT_EXIT_ENABLE]

//>> GET_[QME_PSCRS1_HYP_VIRT_EXIT_ENABLE]
static inline bool GET_QME_PSCRS1_HYP_VIRT_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.getBit<QME_PSCRS1_HYP_VIRT_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS1_HYP_VIRT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_HYP_VIRT_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_UV_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_UV_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_UV_DB_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS1_UV_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_UV_DB_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_UV_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_UV_DB_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_UV_DB_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS1_UV_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_UV_DB_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_UV_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_UV_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.setBit<QME_PSCRS1_UV_DB_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS1_UV_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_UV_DB_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS1_UV_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS1_UV_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.clearBit<QME_PSCRS1_UV_DB_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS1_UV_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS1_UV_DB_EXIT_ENABLE]

//>> GET_[QME_PSCRS1_UV_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS1_UV_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.extractToRight<QME_PSCRS1_UV_DB_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS1_UV_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_UV_DB_EXIT_ENABLE]

//>> GET_[QME_PSCRS1_UV_DB_EXIT_ENABLE]
static inline bool GET_QME_PSCRS1_UV_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.getBit<QME_PSCRS1_UV_DB_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS1_UV_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_UV_DB_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_HYP_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_HYP_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_HYP_DB_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS1_HYP_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_HYP_DB_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_HYP_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_HYP_DB_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_HYP_DB_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS1_HYP_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_HYP_DB_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_HYP_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_HYP_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.setBit<QME_PSCRS1_HYP_DB_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS1_HYP_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_HYP_DB_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS1_HYP_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS1_HYP_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.clearBit<QME_PSCRS1_HYP_DB_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS1_HYP_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS1_HYP_DB_EXIT_ENABLE]

//>> GET_[QME_PSCRS1_HYP_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS1_HYP_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.extractToRight<QME_PSCRS1_HYP_DB_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS1_HYP_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_HYP_DB_EXIT_ENABLE]

//>> GET_[QME_PSCRS1_HYP_DB_EXIT_ENABLE]
static inline bool GET_QME_PSCRS1_HYP_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.getBit<QME_PSCRS1_HYP_DB_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS1_HYP_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_HYP_DB_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_EXT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_EXT_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_EXT_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS1_EXT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_EXT_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_EXT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_EXT_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_EXT_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS1_EXT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_EXT_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_EXT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_EXT_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.setBit<QME_PSCRS1_EXT_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS1_EXT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_EXT_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS1_EXT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS1_EXT_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.clearBit<QME_PSCRS1_EXT_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS1_EXT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS1_EXT_EXIT_ENABLE]

//>> GET_[QME_PSCRS1_EXT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS1_EXT_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.extractToRight<QME_PSCRS1_EXT_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS1_EXT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_EXT_EXIT_ENABLE]

//>> GET_[QME_PSCRS1_EXT_EXIT_ENABLE]
static inline bool GET_QME_PSCRS1_EXT_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.getBit<QME_PSCRS1_EXT_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS1_EXT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_EXT_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_DEC_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_DEC_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_DEC_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS1_DEC_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_DEC_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_DEC_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_DEC_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_DEC_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS1_DEC_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_DEC_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_DEC_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_DEC_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.setBit<QME_PSCRS1_DEC_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS1_DEC_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_DEC_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS1_DEC_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS1_DEC_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.clearBit<QME_PSCRS1_DEC_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS1_DEC_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS1_DEC_EXIT_ENABLE]

//>> GET_[QME_PSCRS1_DEC_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS1_DEC_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.extractToRight<QME_PSCRS1_DEC_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS1_DEC_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_DEC_EXIT_ENABLE]

//>> GET_[QME_PSCRS1_DEC_EXIT_ENABLE]
static inline bool GET_QME_PSCRS1_DEC_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.getBit<QME_PSCRS1_DEC_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS1_DEC_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_DEC_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_HMI_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_HMI_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_HMI_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS1_HMI_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_HMI_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_HMI_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_HMI_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_HMI_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS1_HMI_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_HMI_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_HMI_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_HMI_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.setBit<QME_PSCRS1_HMI_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS1_HMI_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_HMI_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS1_HMI_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS1_HMI_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.clearBit<QME_PSCRS1_HMI_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS1_HMI_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS1_HMI_EXIT_ENABLE]

//>> GET_[QME_PSCRS1_HMI_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS1_HMI_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.extractToRight<QME_PSCRS1_HMI_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS1_HMI_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_HMI_EXIT_ENABLE]

//>> GET_[QME_PSCRS1_HMI_EXIT_ENABLE]
static inline bool GET_QME_PSCRS1_HMI_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.getBit<QME_PSCRS1_HMI_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS1_HMI_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_HMI_EXIT_ENABLE]

//>> SET_[QME_PSCRS1_TR]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_TR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_TR,
           QME_PSCRS1_TR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS1_TR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_TR]

//>> SET_[QME_PSCRS1_TR]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_TR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_TR,
           QME_PSCRS1_TR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS1_TR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_TR]

//>> GET_[QME_PSCRS1_TR]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS1_TR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.extractToRight<QME_PSCRS1_TR,
           QME_PSCRS1_TR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS1_TR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_TR]

//>> SET_[QME_PSCRS1_MTL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_MTL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_MTL,
           QME_PSCRS1_MTL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS1_MTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_MTL]

//>> SET_[QME_PSCRS1_MTL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_MTL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_MTL,
           QME_PSCRS1_MTL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS1_MTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_MTL]

//>> GET_[QME_PSCRS1_MTL]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS1_MTL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.extractToRight<QME_PSCRS1_MTL,
           QME_PSCRS1_MTL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS1_MTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_MTL]

//>> SET_[QME_PSCRS1_RL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_RL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_RL,
           QME_PSCRS1_RL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS1_RL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_RL]

//>> SET_[QME_PSCRS1_RL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_RL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_RL,
           QME_PSCRS1_RL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS1_RL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_RL]

//>> GET_[QME_PSCRS1_RL]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS1_RL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.extractToRight<QME_PSCRS1_RL,
           QME_PSCRS1_RL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS1_RL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_RL]

//>> SET_[QME_PSCRS1_PLS]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_PLS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_PLS,
           QME_PSCRS1_PLS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS1_PLS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_PLS]

//>> SET_[QME_PSCRS1_PLS]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS1_PLS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return o_data.insertFromRight<QME_PSCRS1_PLS,
           QME_PSCRS1_PLS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS1_PLS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS1_PLS]

//>> GET_[QME_PSCRS1_PLS]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS1_PLS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS1));
#endif
    return i_data.extractToRight<QME_PSCRS1_PLS,
           QME_PSCRS1_PLS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS1_PLS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS1_PLS]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
