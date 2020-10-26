/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/mcc/reg00013_unused.H $       */
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

#ifndef __MCC_REG00013_H_UNUSED__
#define __MCC_REG00013_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace mcc
{
#endif


//>> PREP_[USTL_USTLCFWOF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_USTL_USTLCFWOF(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLCFWOF;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[USTL_USTLCFWOF]

//>> GET_[USTL_USTLCFWOF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_USTL_USTLCFWOF(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLCFWOF;
#endif
    return fapi2::getScom(i_target, USTL_USTLCFWOF, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[USTL_USTLCFWOF]

//>> PUT_[USTL_USTLCFWOF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_USTL_USTLCFWOF(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(USTL_USTLCFWOF));
#endif
    return fapi2::putScom(i_target, USTL_USTLCFWOF, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[USTL_USTLCFWOF]


//>> SET_[USTL_USTLCFWOF_A_CHANFAIL_WOF]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLCFWOF_A_CHANFAIL_WOF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLCFWOF));
#endif
    return o_data.insertFromRight<USTL_USTLCFWOF_A_CHANFAIL_WOF,
           USTL_USTLCFWOF_A_CHANFAIL_WOF_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLCFWOF_A_CHANFAIL_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLCFWOF_A_CHANFAIL_WOF]

//>> SET_[USTL_USTLCFWOF_A_CHANFAIL_WOF]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLCFWOF_A_CHANFAIL_WOF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLCFWOF));
#endif
    return o_data.insertFromRight<USTL_USTLCFWOF_A_CHANFAIL_WOF,
           USTL_USTLCFWOF_A_CHANFAIL_WOF_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLCFWOF_A_CHANFAIL_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLCFWOF_A_CHANFAIL_WOF]

//>> GET_[USTL_USTLCFWOF_A_CHANFAIL_WOF]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLCFWOF_A_CHANFAIL_WOF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLCFWOF));
#endif
    return i_data.extractToRight<USTL_USTLCFWOF_A_CHANFAIL_WOF,
           USTL_USTLCFWOF_A_CHANFAIL_WOF_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLCFWOF_A_CHANFAIL_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLCFWOF_A_CHANFAIL_WOF]

//>> SET_[USTL_USTLCFWOF_B_CHANFAIL_WOF]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLCFWOF_B_CHANFAIL_WOF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLCFWOF));
#endif
    return o_data.insertFromRight<USTL_USTLCFWOF_B_CHANFAIL_WOF,
           USTL_USTLCFWOF_B_CHANFAIL_WOF_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLCFWOF_B_CHANFAIL_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLCFWOF_B_CHANFAIL_WOF]

//>> SET_[USTL_USTLCFWOF_B_CHANFAIL_WOF]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLCFWOF_B_CHANFAIL_WOF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLCFWOF));
#endif
    return o_data.insertFromRight<USTL_USTLCFWOF_B_CHANFAIL_WOF,
           USTL_USTLCFWOF_B_CHANFAIL_WOF_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLCFWOF_B_CHANFAIL_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLCFWOF_B_CHANFAIL_WOF]

//>> GET_[USTL_USTLCFWOF_B_CHANFAIL_WOF]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLCFWOF_B_CHANFAIL_WOF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLCFWOF));
#endif
    return i_data.extractToRight<USTL_USTLCFWOF_B_CHANFAIL_WOF,
           USTL_USTLCFWOF_B_CHANFAIL_WOF_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLCFWOF_B_CHANFAIL_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLCFWOF_B_CHANFAIL_WOF]

//>> PREP_[USTL_USTLLOLMASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_USTL_USTLLOLMASK(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLLOLMASK;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[USTL_USTLLOLMASK]

//>> GET_[USTL_USTLLOLMASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_USTL_USTLLOLMASK(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = USTL_USTLLOLMASK;
#endif
    return fapi2::getScom(i_target, USTL_USTLLOLMASK, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[USTL_USTLLOLMASK]

//>> PUT_[USTL_USTLLOLMASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_USTL_USTLLOLMASK(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(USTL_USTLLOLMASK));
#endif
    return fapi2::putScom(i_target, USTL_USTLLOLMASK, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[USTL_USTLLOLMASK]


//>> SET_[USTL_USTLLOLMASK_RECOVER_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLLOLMASK_RECOVER_ENABLE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLLOLMASK));
#endif
    return o_data.insertFromRight<USTL_USTLLOLMASK_RECOVER_ENABLE_MASK,
           USTL_USTLLOLMASK_RECOVER_ENABLE_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLLOLMASK_RECOVER_ENABLE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLLOLMASK_RECOVER_ENABLE_MASK]

//>> SET_[USTL_USTLLOLMASK_RECOVER_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLLOLMASK_RECOVER_ENABLE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLLOLMASK));
#endif
    return o_data.insertFromRight<USTL_USTLLOLMASK_RECOVER_ENABLE_MASK,
           USTL_USTLLOLMASK_RECOVER_ENABLE_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLLOLMASK_RECOVER_ENABLE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLLOLMASK_RECOVER_ENABLE_MASK]

//>> GET_[USTL_USTLLOLMASK_RECOVER_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLLOLMASK_RECOVER_ENABLE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLLOLMASK));
#endif
    return i_data.extractToRight<USTL_USTLLOLMASK_RECOVER_ENABLE_MASK,
           USTL_USTLLOLMASK_RECOVER_ENABLE_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLLOLMASK_RECOVER_ENABLE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLLOLMASK_RECOVER_ENABLE_MASK]

//>> SET_[USTL_USTLLOLMASK_CHECKSTOP_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLLOLMASK_CHECKSTOP_ENABLE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLLOLMASK));
#endif
    return o_data.insertFromRight<USTL_USTLLOLMASK_CHECKSTOP_ENABLE_MASK,
           USTL_USTLLOLMASK_CHECKSTOP_ENABLE_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access USTL_USTLLOLMASK_CHECKSTOP_ENABLE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLLOLMASK_CHECKSTOP_ENABLE_MASK]

//>> SET_[USTL_USTLLOLMASK_CHECKSTOP_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& SET_USTL_USTLLOLMASK_CHECKSTOP_ENABLE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLLOLMASK));
#endif
    return o_data.insertFromRight<USTL_USTLLOLMASK_CHECKSTOP_ENABLE_MASK,
           USTL_USTLLOLMASK_CHECKSTOP_ENABLE_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access USTL_USTLLOLMASK_CHECKSTOP_ENABLE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[USTL_USTLLOLMASK_CHECKSTOP_ENABLE_MASK]

//>> GET_[USTL_USTLLOLMASK_CHECKSTOP_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& GET_USTL_USTLLOLMASK_CHECKSTOP_ENABLE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(USTL_USTLLOLMASK));
#endif
    return i_data.extractToRight<USTL_USTLLOLMASK_CHECKSTOP_ENABLE_MASK,
           USTL_USTLLOLMASK_CHECKSTOP_ENABLE_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access USTL_USTLLOLMASK_CHECKSTOP_ENABLE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[USTL_USTLLOLMASK_CHECKSTOP_ENABLE_MASK]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
