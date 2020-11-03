/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/c/reg00008_unused.H $         */
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

#ifndef __C_REG00008_H_UNUSED__
#define __C_REG00008_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> PREP_[EC_LS_LSU_HOLD_OUT_REG13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_LS_LSU_HOLD_OUT_REG13(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG13;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_LS_LSU_HOLD_OUT_REG13]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_LS_LSU_HOLD_OUT_REG13(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG13;
#endif
    return fapi2::getScom(i_target, EC_LS_LSU_HOLD_OUT_REG13, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13]

//>> PUT_[EC_LS_LSU_HOLD_OUT_REG13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_LS_LSU_HOLD_OUT_REG13(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return fapi2::putScom(i_target, EC_LS_LSU_HOLD_OUT_REG13, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_LS_LSU_HOLD_OUT_REG13]


//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_D_XFVC_UPDATE_PASS_FAIL_NOT_ONE_HOT_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>&
SET_EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>&
SET_EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>&
SET_EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>&
CLEAR_EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>&
GET_EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_D_SRQZ01_AGN_INVAL_WALK_V_BOTH_ACTIVE_SAME_CYCLE_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_D_ATOMIC_PTEUPDATE_RECEIVED_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_L2_NOT_EMPTY_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_D_RECONFIG_NOT_QUIESCED_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_D_DRAINING_INVALID_TTYPE_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_P_RC7_DRAIN_V_NO_REQ_ACTIVE_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_P_PTEUPDATE_RECEIVED_WITH_NO_FIELDS_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_P_LS_L2_ST_ORD_G_SHOULD_NOT_BE_SET_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_P_MU_LS_ST_RC_RA60_EQUALS_0_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_P_NCU_STORE_32B_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG13));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG13_P_STORE_0B_ERR_HOLD_OUT]

//>> PREP_[EC_LS_LSU_HOLD_OUT_REG5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_LS_LSU_HOLD_OUT_REG5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_LS_LSU_HOLD_OUT_REG5]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_LS_LSU_HOLD_OUT_REG5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG5;
#endif
    return fapi2::getScom(i_target, EC_LS_LSU_HOLD_OUT_REG5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5]

//>> PUT_[EC_LS_LSU_HOLD_OUT_REG5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_LS_LSU_HOLD_OUT_REG5(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return fapi2::putScom(i_target, EC_LS_LSU_HOLD_OUT_REG5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_LS_LSU_HOLD_OUT_REG5]


//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_DCAC_TAG_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_DCAC_TAG_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD0_EADIR_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_RES_LD1_EADIR_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_LD0_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_LD1_ACC_LLQ_RF_PERR_RECOV_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERATMHE_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP2_ERRPT_ERAT_PARITY_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_ERTO_MP3_ERRPT_FMISS_ERR_HOLD_OUT_3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG5));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG5_LMQ_MP5_BAD_RESPONSE_HOLD_OUT]

//>> PREP_[EC_PC_COMMON_SPR_V3_HMER_RW_WAND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_COMMON_SPR_V3_HMER_RW_WAND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_V3_HMER_RW_WAND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_COMMON_SPR_V3_HMER_RW_WAND]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_RW_WAND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_COMMON_SPR_V3_HMER_RW_WAND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_V3_HMER_RW_WAND;
#endif
    return fapi2::getScom(i_target, EC_PC_COMMON_SPR_V3_HMER_RW_WAND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_RW_WAND]

//>> PUT_[EC_PC_COMMON_SPR_V3_HMER_RW_WAND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_COMMON_SPR_V3_HMER_RW_WAND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return fapi2::putScom(i_target, EC_PC_COMMON_SPR_V3_HMER_RW_WAND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_COMMON_SPR_V3_HMER_RW_WAND]

//>> PREP_[EC_PC_COMMON_SPR_V3_HMER_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_COMMON_SPR_V3_HMER_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_V3_HMER_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_COMMON_SPR_V3_HMER_WO_OR]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_COMMON_SPR_V3_HMER_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_V3_HMER_WO_OR;
#endif
    return fapi2::getScom(i_target, EC_PC_COMMON_SPR_V3_HMER_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_WO_OR]

//>> PUT_[EC_PC_COMMON_SPR_V3_HMER_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_COMMON_SPR_V3_HMER_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return fapi2::putScom(i_target, EC_PC_COMMON_SPR_V3_HMER_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_COMMON_SPR_V3_HMER_WO_OR]


//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_MALFUNCTION_ALERT]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_1]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_1]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_1]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_1]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_1]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_1]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_SPARE_1]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_SPARE_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_SPARE_1]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_1]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_SPARE_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_1]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_1]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_SPARE_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_1]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_DONE]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SUSPEND_MODE]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFAC_ERR]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TFX_ERR]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_6]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_6]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_6]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_6]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_6]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_6]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_SPARE_6]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_SPARE_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_SPARE_6]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_6]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_SPARE_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_6]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_6]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_SPARE_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_6]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SPURR_SCALE_LIMIT]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_7]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_7]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_7]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_7]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_7]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_7]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_SPARE_7]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_SPARE_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_SPARE_7]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_7]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_SPARE_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_7]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_7]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_SPARE_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_7]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_FAIL]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_DONE]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_10]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_10]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_10]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_10]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_10]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_10]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_SPARE_10]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_SPARE_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_SPARE_10]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_10]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_SPARE_10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_10]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_10]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_SPARE_10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_10]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_PROC_RCVY_AGAIN]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_12]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_12]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_12]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_12]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_12]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_12]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_SPARE_12]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_SPARE_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_SPARE_12]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_12]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_SPARE_12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_12]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_12]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_SPARE_12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_12]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_13]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_13]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_13]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_13]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_13]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_13]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_SPARE_13]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_SPARE_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_SPARE_13]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_13]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_SPARE_13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_13]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_13]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_SPARE_13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_13]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_14]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_14]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_14]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_14]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_14]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_14]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_SPARE_14]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_SPARE_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_SPARE_14]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_14]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_SPARE_14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_14]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_14]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_SPARE_14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_14]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_15]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_15]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_15]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_15]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_15]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_15]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_SPARE_15]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_SPARE_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_SPARE_15]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_15]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_SPARE_15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_15]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_15]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_SPARE_15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_15]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_SCOM_FIR_HMI]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_TRIG_FIR_HMI]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_19]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_19(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_19]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_19]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_19(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_19]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_19]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_19(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_19]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_SPARE_19]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_SPARE_19(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_SPARE_19]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_19]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_SPARE_19(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_19,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_19]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_19]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_SPARE_19(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_19]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_20]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_20(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_20]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_20]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_20(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_20]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_20]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_SPARE_20(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_20]

//>> CLEAR_[EC_PC_COMMON_SPR_V3_HMER_SPARE_20]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V3_HMER_SPARE_20(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V3_HMER_SPARE_20]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_20]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_SPARE_20(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_SPARE_20,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_20]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_20]
static inline bool GET_EC_PC_COMMON_SPR_V3_HMER_SPARE_20(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V3_HMER_SPARE_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_SPARE_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_SPARE_20]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_STATUS,
           EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_STATUS]

//>> SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_STATUS,
           EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_STATUS]

//>> GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_STATUS]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V3_HMER_RW_WAND, EC_PC_COMMON_SPR_V3_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_STATUS,
           EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_STATUS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V3_HMER_V3_HMER_XSCOM_STATUS]

//>> PREP_[EC_PC_PMU_SPRCOR_HV_STATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_PMU_SPRCOR_HV_STATE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_PMU_SPRCOR_HV_STATE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_PMU_SPRCOR_HV_STATE]

//>> GET_[EC_PC_PMU_SPRCOR_HV_STATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_PMU_SPRCOR_HV_STATE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_PMU_SPRCOR_HV_STATE;
#endif
    return fapi2::getScom(i_target, EC_PC_PMU_SPRCOR_HV_STATE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_HV_STATE]

//>> PUT_[EC_PC_PMU_SPRCOR_HV_STATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_PMU_SPRCOR_HV_STATE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return fapi2::putScom(i_target, EC_PC_PMU_SPRCOR_HV_STATE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_PMU_SPRCOR_HV_STATE]


//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV]

//>> CLEAR_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV]

//>> GET_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV]

//>> GET_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV]
static inline bool GET_EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_HV]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV]

//>> CLEAR_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV]

//>> GET_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV]

//>> GET_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV]
static inline bool GET_EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_HV]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV]

//>> CLEAR_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV]

//>> GET_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV]

//>> GET_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV]
static inline bool GET_EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_HV]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV]

//>> CLEAR_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV]

//>> GET_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV]

//>> GET_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV]
static inline bool GET_EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_HV]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR]

//>> CLEAR_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR]

//>> GET_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR]

//>> GET_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR]
static inline bool GET_EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_HV_STATE_0_MSR_PR]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR]

//>> CLEAR_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR]

//>> GET_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR]

//>> GET_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR]
static inline bool GET_EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_HV_STATE_1_MSR_PR]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR]

//>> CLEAR_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR]

//>> GET_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR]

//>> GET_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR]
static inline bool GET_EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_HV_STATE_2_MSR_PR]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR]

//>> SET_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR]

//>> CLEAR_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR]

//>> GET_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR]

//>> GET_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR]
static inline bool GET_EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_HV_STATE));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_HV_STATE_3_MSR_PR]

//>> PREP_[EC_PC_PMU_SPRCOR_SCOMC_EN]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_PMU_SPRCOR_SCOMC_EN(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_PMU_SPRCOR_SCOMC_EN;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_PMU_SPRCOR_SCOMC_EN]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_EN]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_PMU_SPRCOR_SCOMC_EN(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_PMU_SPRCOR_SCOMC_EN;
#endif
    return fapi2::getScom(i_target, EC_PC_PMU_SPRCOR_SCOMC_EN, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_EN]

//>> PUT_[EC_PC_PMU_SPRCOR_SCOMC_EN]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_PMU_SPRCOR_SCOMC_EN(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC_EN));
#endif
    return fapi2::putScom(i_target, EC_PC_PMU_SPRCOR_SCOMC_EN, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_PMU_SPRCOR_SCOMC_EN]


//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC_EN));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC_EN));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC_EN));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM]

//>> CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC_EN));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC_EN));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM]
static inline bool GET_EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC_EN));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_EN_ENABLE_INDIRECT_PMU_SCOM]

//>> PREP_[EC_PC_PMU_SPRCOR_SCOMD]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_PMU_SPRCOR_SCOMD(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_PMU_SPRCOR_SCOMD;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_PMU_SPRCOR_SCOMD]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMD]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_PMU_SPRCOR_SCOMD(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_PMU_SPRCOR_SCOMD;
#endif
    return fapi2::getScom(i_target, EC_PC_PMU_SPRCOR_SCOMD, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMD]

//>> PUT_[EC_PC_PMU_SPRCOR_SCOMD]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_PMU_SPRCOR_SCOMD(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMD));
#endif
    return fapi2::putScom(i_target, EC_PC_PMU_SPRCOR_SCOMD, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_PMU_SPRCOR_SCOMD]


//>> PREP_[EC_PC_PMU_SPRCOR_SHID0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_PMU_SPRCOR_SHID0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_PMU_SPRCOR_SHID0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_PMU_SPRCOR_SHID0]

//>> GET_[EC_PC_PMU_SPRCOR_SHID0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_PMU_SPRCOR_SHID0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_PMU_SPRCOR_SHID0;
#endif
    return fapi2::getScom(i_target, EC_PC_PMU_SPRCOR_SHID0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SHID0]

//>> PUT_[EC_PC_PMU_SPRCOR_SHID0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_PMU_SPRCOR_SHID0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SHID0));
#endif
    return fapi2::putScom(i_target, EC_PC_PMU_SPRCOR_SHID0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_PMU_SPRCOR_SHID0]


//>> SET_[EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SHID0));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN]

//>> SET_[EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SHID0));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN]

//>> SET_[EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SHID0));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN]

//>> CLEAR_[EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SHID0));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN]

//>> GET_[EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SHID0));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN]

//>> GET_[EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN]
static inline bool GET_EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SHID0));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SHID0_TRIG2_TRACE_EN]

//>> SET_[EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SHID0));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR]

//>> SET_[EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SHID0));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR]

//>> SET_[EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SHID0));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR]

//>> CLEAR_[EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SHID0));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR]

//>> GET_[EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SHID0));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR]

//>> GET_[EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR]
static inline bool GET_EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SHID0));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SHID0_DIS_TRACE_SPR]

//>> PREP_[EC_PC_SCR7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_SCR7(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_SCR7;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_SCR7]

//>> GET_[EC_PC_SCR7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_SCR7(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_SCR7;
#endif
    return fapi2::getScom(i_target, EC_PC_SCR7, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_SCR7]

//>> PUT_[EC_PC_SCR7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_SCR7(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_SCR7));
#endif
    return fapi2::putScom(i_target, EC_PC_SCR7, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_SCR7]


//>> PREP_[EC_PC_TRACE2_TR_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TRACE2_TR_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE2_TR_TR0_CONFIG_5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TRACE2_TR_TR0_CONFIG_5]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TRACE2_TR_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE2_TR_TR0_CONFIG_5;
#endif
    return fapi2::getScom(i_target, EC_PC_TRACE2_TR_TR0_CONFIG_5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_5]

//>> PUT_[EC_PC_TRACE2_TR_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TRACE2_TR_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_5));
#endif
    return fapi2::putScom(i_target, EC_PC_TRACE2_TR_TR0_CONFIG_5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TRACE2_TR_TR0_CONFIG_5]


//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_5_C,
           EC_PC_TRACE2_TR_TR0_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_5_C]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_5_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_5_C,
           EC_PC_TRACE2_TR_TR0_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_5_C]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_5));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_5_C,
           EC_PC_TRACE2_TR_TR0_CONFIG_5_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_5_C]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_5_D,
           EC_PC_TRACE2_TR_TR0_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_5_D]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_5_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_5_D,
           EC_PC_TRACE2_TR_TR0_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_5_D]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_5));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_5_D,
           EC_PC_TRACE2_TR_TR0_CONFIG_5_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_5_D]

//>> PREP_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = EC_SD_SDP_SDCR_UNIT_HOLD_OUT4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT4]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = EC_SD_SDP_SDCR_UNIT_HOLD_OUT4;
#endif
    return fapi2::getScom(i_target, EC_SD_SDP_SDCR_UNIT_HOLD_OUT4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT4]

//>> PUT_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return fapi2::putScom(i_target, EC_SD_SDP_SDCR_UNIT_HOLD_OUT4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT4]


//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_SDE_T3_MCHK_AND_ME_EQ_0]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED1]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED2]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED3]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED4]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED5]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED6]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED7]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED8]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED9]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED10]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED11]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED12]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED13]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED14]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT4));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT4_UNUSED15]

//>> PREP_[L2TRA_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L2TRA_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR1_CONFIG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L2TRA_TR1_CONFIG_1]

//>> GET_[L2TRA_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L2TRA_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR1_CONFIG_1;
#endif
    return fapi2::getScom(i_target, L2TRA_TR1_CONFIG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_1]

//>> PUT_[L2TRA_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L2TRA_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_1));
#endif
    return fapi2::putScom(i_target, L2TRA_TR1_CONFIG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L2TRA_TR1_CONFIG_1]


//>> SET_[L2TRA_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_1));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L2TRA_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> SET_[L2TRA_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_1));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L2TRA_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> GET_[L2TRA_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_1));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L2TRA_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> PREP_[PSCOM_STATUS_ERROR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PSCOM_STATUS_ERROR_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PSCOM_STATUS_ERROR_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PSCOM_STATUS_ERROR_REG]

//>> GET_[PSCOM_STATUS_ERROR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PSCOM_STATUS_ERROR_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PSCOM_STATUS_ERROR_REG;
#endif
    return fapi2::getScom(i_target, PSCOM_STATUS_ERROR_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG]

//>> PUT_[PSCOM_STATUS_ERROR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PSCOM_STATUS_ERROR_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return fapi2::putScom(i_target, PSCOM_STATUS_ERROR_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PSCOM_STATUS_ERROR_REG]


//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]
static inline bool GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]
static inline bool GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]
static inline bool GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]
static inline bool GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]
static inline bool GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]
static inline bool GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline bool GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]
static inline bool GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline bool GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline bool GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline bool GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]
static inline bool GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline bool GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]
static inline bool GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]
static inline bool GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]
static inline bool GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline bool GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline bool GET_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]
static inline bool GET_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]
static inline bool GET_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]
static inline bool GET_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]
static inline bool GET_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]
static inline bool GET_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]
static inline bool GET_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline bool GET_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]
static inline bool GET_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline bool GET_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline bool GET_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline bool GET_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]
static inline bool GET_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline bool GET_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]
static inline bool GET_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]
static inline bool GET_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]
static inline bool GET_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline bool GET_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& SET_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& CLEAR_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& GET_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline bool GET_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
